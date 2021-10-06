// Programa que realiza todas las operaciones en una lista de enlaces individual

#include <stdio.h>
#include<stdlib.h>

// Se inicia con el nodo de la lista enlazada
struct nodo {
    int info;
    struct nodo* link;
};
struct nodo* inicia = NULL;
  
// Función que atraviesa la lista enlazada
void atravesar()
{
    struct nodo* temporal;
  
    // En caso que la lista este vacía
    if (inicia == NULL)
        printf("\nLa Lista se encuentra vacia\n");
  
    // De lo contrario imprime la Lista
    else {
        temporal = inicia;
        while (temporal != NULL) {
            printf("El dato es = %d\n",temporal->info);
            temporal = temporal->link;
        }
    }
}
//Función que inseta un elemento al inicio de la lista enlazada
void alFrente()
{
    int dato;
    struct nodo* temporal;
    temporal = malloc(sizeof(struct nodo));
    printf("\nCapture el numero a ser insertado en la lista : ");
    scanf("%d", &dato);
    temporal->info = dato;
    // El puntero de temporal será asignado al inicio
    temporal->link = inicia;
    inicia = temporal;
}
// Función que inserta un elemento al final de la lista enlazada
void alFinal()
{
    int dato;
    struct nodo *temporal, *principio;
    temporal = malloc(sizeof(struct nodo));
  
    // Se captura el elemento
    printf("\nCapture el numero a ser insertado, por favor  : ");
    scanf("%d", &dato);
  
    // Se cambian los enlaces
    temporal->link = 0;
    temporal->info = dato;
    principio = inicia;
    while (principio->link != NULL) {
        principio = principio->link;
    }
    principio->link = temporal;
}
// Función que permite insertar en cualquier posición que se indique en la lista enlazada
void enPosicion()
{
    struct nodo *temporal, *nuevo_nodo;
    int pos, dato, i = 1;
    nuevo_nodo = malloc(sizeof(struct nodo));
  
    // Se captura tanto la ubicación como el dato
    printf("\nPor favor, capture la ubicacion y el numero :");
    scanf("%d %d", &pos, &dato);
  
    // Se cambian los enlaces
    temporal = inicia;
    nuevo_nodo->info = dato;
    nuevo_nodo->link = 0;
    while (i < pos - 1) {
        temporal = temporal->link;
        i++;
    }
    nuevo_nodo->link = temporal->link;
    temporal->link = nuevo_nodo;
}
// Función que elimina elementos desde el frente, principio, de la lista enlazada
void borrarPrimero()
{
    struct nodo* temporal;
    if (inicia == NULL)
        printf("\nLa lista se encuentra vacia\n");
    else {
        temporal = inicia;
        inicia = inicia->link;
        free(temporal);
    }
}
// Funcion que elimina elementos desde el final de la lista enlazada
void borrarUltimo()
{
    struct nodo *temporal, *nodo_previo;
    if (inicia == NULL)
        printf("\nLa lista esta vacia\n");
    else {
        temporal = inicia;
        while (temporal->link != 0) {
            nodo_previo = temporal;
            temporal = temporal->link;
        }
        free(temporal);
        nodo_previo->link = 0;
    }
}
//Función que borra un elemento desde cualquier posición indicada en la lista enlazada
void borrarPosicion()
{
    struct nodo *temporal,*posicion;
    int i = 1, pos;
  
    // Si la lista enlazada esta vacia, se informa
    if (inicia == NULL)
        printf("\nLa lista esta vacia\n");
  
    // De lo contrario
    else {
        printf("\nCapture el indice, ubicación, para borrar el elemento : ");
  
        // Posición para borrar el elemento
        scanf("%d", &pos);
        posicion = malloc(sizeof(struct nodo));
        temporal = inicia;
  
        // atravesar hasta la posición indicada
        while (i < pos - 1) {
            temporal = temporal->link;
            i++;
        }
        // Se cambian los enlaces
        posicion = temporal->link;
        temporal->link = posicion->link;
  
        // Se libera memoria
        free(posicion);
    }
}
// Función para encontrar el elemento más alto (máximo) en la lista enlazada
void mayor()
{
    struct nodo* temporal;
  
    // Si la lista enlazada esta vacía
    if (inicia == NULL)
        printf("\nLa lista esta vacia\n");
  
    // De lo contrario
    else {
        temporal = inicia;
        int max = temporal->info;
  
        // atraviesa la lista enlazada y actualiza el elemento mayor
        while (temporal != NULL) {
  
            // Actualiza el elemento mayor
            if (max < temporal->info)
                max = temporal->info;
            temporal = temporal->link;
        }
        printf("\nEl numero mayor es : %d ", max);
    }
}
// Función que encuentra la media de los elementos en la lista enlazada
void media()
{
    struct nodo* temporal;
  
    // Si la lista está vacía
    if (inicia == NULL)
        printf("\nLa lista esta vacia\n");
  
    // De lo contrario
    else {
        temporal = inicia;
  
        // Se almacena la suma y el conteo de los elementos en la lista enlazada
        int suma = 0, contar = 0;
        float m;
  
        // atraviesa la lista enlazada
        while (temporal != NULL) {
  
            // Actualiza la suma
            suma = suma + temporal->info;
            temporal = temporal->link;
            contar++;
        }
  
        // Encuentra la media
        m = suma / contar;
  
        // Se imprime el valor de la media
        printf("\nLa media es %f ", m);
    }
}
// Función que ordena los elementos de la lista enlazada en forma ascendente
void ordenar()
{
    struct nodo* actual = inicia;
    struct nodo* indice = NULL;
    int temporal;
  
    // Si la lista enlazada esta vacía
    if (inicia == NULL) {
        return;
    }
  
    // De lo contrario
    else {
  
        // atraviesa la lista enlazada
        while (actual != NULL) {
            indice = actual->link;
  
            // se atraviesa la lista enlazada anidada y ubica al mínimo elemento
            while (indice != NULL) {
  
                // Intercambia el valor por el actual
                if (actual->info > indice->info) {
                    temporal = actual->info;
                    actual->info = indice->info;
                    indice->info = temporal;
                }
                indice = indice->link;
            }
  
            // Se actualiza el valor actual
            actual = actual->link;
        }
    }
}
//Función que lee la lista enlazada de reversa (inversamente)
void deReversa()
{
    struct nodo *t1, *t2, *temporal;
    t1 = t2 = NULL;
  
    // Si la lista enlazada esta vacía
    if (inicia == NULL)
        printf("La lista esta vacia\n");
  
    // De lo contrario
    else {
  
        // se atraviesa la lista enlazada
        while (inicia != NULL) {
  
            // se invierten los punteros
            t2 = inicia->link;
            inicia->link = t1;
            t1 = inicia;
            inicia = t2;
        }
        inicia = t1;
  
        // Se tiene un nuevo nodo de inicio, principio
        temporal = inicia;
  
        printf("La lista en reversa es : ");
  
        // Se imprime la lista enlazada
        while (temporal != NULL) {
            printf("%d ", temporal->info);
            temporal = temporal->link;
        }
    }
}
//Se inicia el bloque de opciones
int main()
{
    int opcion;
    while (1) {
  
        printf("\n\t1  Ver la lista\n");
        printf("\t2  Insertar al inicio\n");
        printf("\t3  Insertar al final\n");
        printf("\t4  Insertar en cualquier ubicacion\n");
        printf("\t5  Borrar el primer elemento\n");
        printf("\t6  Borrar el ultimo elemento\n");
        printf("\t7  Borrar un elemento en cualquier posicion\n");
        printf("\t8  Encontrar el mayor elemento\n");
        printf("\t9  Conocer la media de los elementos\n");
        printf("\t10 Ordenar los elementos\n");
        printf("\t11 Ver la lista de elementos en reversa\n");
        printf("\t12 Salir\n");
        printf("\nPor favor, seleccione una opcion :\n");
        scanf("%d", &opcion);
         switch (opcion) {
        case 1:
            atravesar();
            break;
        case 2:
            alFrente();
            break;
        case 3:
            alFinal();
            break;
        case 4:
            enPosicion();
            break;
        case 5:
            borrarPrimero();
            break;
        case 6:
            borrarUltimo();
            break;
        case 7:
            borrarPosicion();
            break;
        case 8:
            mayor();
            break;
        case 9:
            media();
            break;
        case 10:
            ordenar();
            break;
        case 11:
            deReversa();
            break;
        case 12:
            exit(1);
            break;
        default:
            printf("Opcion Incorrecta\n");
        }
    }
    return 0;
}
