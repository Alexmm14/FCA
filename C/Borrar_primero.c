#include <stdio.h>
#include<stdlib.h>

// Se inicia con el nodo de la lista enlazada
struct nodo {
    int info;
    struct nodo* link;
};
struct nodo* inicia = NULL;

// Función que elimina elementos desde el frente, principio, de la lista enlazada
void main()
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