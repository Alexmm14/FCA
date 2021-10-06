#include <stdio.h>
#include<stdlib.h>

// Se inicia con el nodo de la lista enlazada
struct nodo {
    int info;
    struct nodo* link;
};
struct nodo* inicia = NULL;

//Función que borra un elemento desde cualquier posición indicada en la lista enlazada
void main()
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