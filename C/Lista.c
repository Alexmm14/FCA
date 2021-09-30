#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int dato;
   int llave;
   struct node *siguiente;
};

struct node *cabecera = NULL;
struct node *currentado = NULL;

//desplega la lista
void imprimirlista() {
   struct node *ptr = cabecera;
   printf("\n[ ");

   //inicia desde el comienzo
   while(ptr != NULL) {
      printf("(%d,%d) ",ptr->llave,ptr->dato);
      ptr = ptr->siguiente;
   }

   printf(" ]");
}

//inserta el primer enlace
void inserte_primero(int llave, int data) {
   //crea el enlace
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->llave = llave;
   link->dato = data;

   //apuntador al primer nodo (cabeza)
   link->siguiente = cabecera;

   //apunta al nuevo nodo
   cabecera = link;
}

//elimina el primer elemento
struct node* eliminarlista() {

   //guarda la referencia del primer enlace
   struct node *tempLink = cabecera;

   //marca el primer nodo (cabeza) a el siguiente enlace
   cabecera = cabecera->siguiente;

   //regresa el enlace eliminado
   return tempLink;
}

//borra la lista
bool vacia() {
   return cabecera == NULL;
}

int ancho() {
   int ancho = 0;
   struct node *current;

   for(current = cabecera; current != NULL; current = current->siguiente) {
      ancho++;
   }

   return ancho;
}

//Encondrar el enlace con la llave
struct node* encontrar(int key) {

   //inicia con el primer enlace
   struct node* current = cabecera;

   //si la lista esta vacia
   if(cabecera == NULL) {
      return NULL;
   }

   //revisa la lista
   while(current->llave != key) {

      //si es el ultimo nodo
      if(current->siguiente == NULL) {
         return NULL;
      } else {
         //ve al siguiente nodo
         current = current->siguiente;
      }
   }

   //si el dato es encontrado, regresa su enlace
}

//borra el enlace con la llave
struct node* eliminar(int key) {

   //expieza desde el primer enlace
   struct node* current = cabecera;
   struct node* previa = NULL;

   //si la lista esta vacia
   if(cabecera == NULL) {
      return NULL;
   }

   //revisa la lista
   while(current->llave != key) {

      //si es el ultimo nodo
      if(current->siguiente == NULL) {
         return NULL;
      } else {
         //guarda la referencia del enlace
         previa = current;
         //move to next link
         current = current->siguiente;
      }
   }

   //busca la coincidencia, actualiza el enlace
   if(current == cabecera) {
      //cambia el apuntador a el siguiente enlace
      cabecera = cabecera->siguiente;
   } else {
      //sustituir cada apuntador de cada enlace
      previa->siguiente = current->siguiente;
   }

   return current;
}

void corto() {

   int i, j, k, templlave, tempDato;
   struct node *current;
   struct node *otro;

   int size = ancho();
   k = size ;

   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      current = cabecera;
      otro = cabecera->siguiente;

      for ( j = 1 ; j < k ; j++ ) {

         if ( current->dato > otro->dato ) {
            tempDato = current->dato;
            current->dato = otro->dato;
            otro->dato = tempDato;

            templlave = current->llave;
            current->llave = otro->llave;
            otro->llave = templlave;
         }

         current = current->siguiente;
         otro = otro->siguiente;
      }
   }
}

void reverse(struct node** referencia) {
   struct node* previo   = NULL;
   struct node* current = *referencia;
   struct node* next;

   while (current != NULL) {
      next  = current->siguiente;
      current->siguiente = previo;
      previo = current;
      current = next;
   }

   *referencia = previo;
}

void main() {
   inserte_primero(1,10);
   inserte_primero(2,20);
   inserte_primero(3,30);
   inserte_primero(4,1);
   inserte_primero(5,40);
   inserte_primero(6,56);

   printf("Lista original: ");

   //imprime la lista
   imprimirlista();

   while(!vacia()) {
      struct node *temp = eliminarlista();
      printf("\nDeleted value:");
      printf("(%d,%d) ",temp->llave,temp->dato);
   }
printf("\nLista despues de eliminar los datos: ");
   imprimirlista();
   inserte_primero(1,10);
   inserte_primero(2,20);
   inserte_primero(3,30);
   inserte_primero(4,1);
   inserte_primero(5,40);
   inserte_primero(6,56);

   printf("\nLista restaurada: ");
   imprimirlista();
   printf("\n");

   struct node *foundLink = encontrar(4);

   if(foundLink != NULL) {
      printf("Elemento encontrado: ");
      printf("(%d,%d) ",foundLink->llave,foundLink->dato);
      printf("\n");
   } else {
      printf("Element not found.");
   }

   eliminar(4);
   printf("List after deleting an item: ");
   imprimirlista();
   printf("\n");
   foundLink = encontrar(4);

   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->llave,foundLink->dato);
      printf("\n");
   } else {
      printf("Element not found.");
   }
printf("\n");
   corto();

   printf("List after sorting the data: ");
   imprimirlista();

   reverse(&cabecera);
   printf("\nList after reversing the data: ");
   imprimirlista();
}
