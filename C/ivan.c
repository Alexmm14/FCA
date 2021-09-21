/*
	Name: pila dinammica.c
	Copyright: 
	Author: ivan flores
	Date: 17/09/21 11:47
	Description: ejemplo de pilas dinamicas trabajando elemto por elemento 
*/
//directivas a l preposeador 
#include <stdio.h>
#include <stdlib.h>
 
typedef struct nodo {
   int iValor;
   char sNombre [20];
   struct nodo *siguiente;// es un aputnaador a un nodo q
} tipoNodo;//

typedef tipoNodo *pNodo;

/* Funciones con pilas: */
void Push(int iValor,char sNombre [20], pNodo *ultimo ) {
   pNodo nuevo;
 	
   /* Crear un nodo nuevo */
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   //nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->iValor = iValor;
   nuevo->sNombre[20] = sNombre[20];
   /* A�adimos la pila a continuaci�n del nuevo nodo */
 
   nuevo->siguiente = *ultimo;
  
   /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
   *ultimo = nuevo;
}

int Pop(pNodo *pila) {
   pNodo nodo; /* variable auxiliar para manipular nodo */
   int iValor;      /* variable auxiliar para retorno */
   char sNombre[20];
   /* Nodo apunta al primer elemento de la pila */
   nodo = *pila;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a pila toda la pila menos el primer elemento */
   *pila = nodo->siguiente;
   /* Guardamos el valor de retorno */
   iValor = nodo->iValor; 
  // sNombre[20] = nodo->sNombre[20]; 
   /* Borrar el nodo */
   free(nodo);
   return iValor;
  // return sNombre[20];
} 

int main() {
   pNodo pila = NULL;

   Push(10,"Diez" , &pila);
   Push(20,"veinte",&pila);
   Push(30,"treinta", &pila);
   printf("%d, ", Pop(&pila));
   printf("%d, ", Pop(&pila));
   Push(40,"cuarenta", &pila);
   Push(50,"cicuenta", &pila);

   printf("%d, ", Pop(&pila));
   printf("%d, ", Pop(&pila));
   Push(60,"sesenta", &pila);
   printf("%d, ", Pop(&pila));
   printf("%d\n", Pop(&pila));
   printf("%d\n", Pop(&pila));
   return 0;
}
