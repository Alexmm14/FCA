#include <stdio.h>
#include <stdlib.h>
 
typedef struct nodo_s
{
 int dato;
 struct nodo_s *siguiente;
} nodo_t;
 
typedef nodo_t *ptrNodo;
typedef nodo_t *ptrLista;
ptrNodo crea_nodo(int valor)
{
 ptrNodo nuevo_nodo = (ptrNodo)malloc(sizeof(nodo_t));
 if (nuevo_nodo != NULL)
    {
     nuevo_nodo->dato = valor;
     nuevo_nodo->siguiente = NULL;
    }
 
 return nuevo_nodo;
}
void inserta_despues(ptrLista *lista, ptrNodo nodo, int valor)
{
 ptrNodo nuevo_nodo = crea_nodo(valor);
 
 if (nodo != NULL)
    {
     nuevo_nodo->siguiente = nodo->siguiente;
     nodo->siguiente = nuevo_nodo;
    }
 else
    {
     if (*lista != NULL)
         nuevo_nodo->siguiente = *lista;
     *lista = nuevo_nodo;
    }
}
int elimina_despues(ptrLista *lista, ptrNodo nodo)
{
 int x=0;
 ptrNodo borrar_nodo = NULL;
 
 if (nodo != NULL)
    {
     if (nodo->siguiente != NULL)
        {
         borrar_nodo = nodo->siguiente;
         nodo->siguiente = borrar_nodo->siguiente;
        }
    }
 else
     {
      if (*lista != NULL)
         {
          borrar_nodo = *lista;
          *lista = borrar_nodo->siguiente;
         }
     }
 if (borrar_nodo != NULL)
    {
     x=borrar_nodo->dato;
     free(borrar_nodo);
    }
 else
     printf("Borrado prohibido\n");
 
 return x;
}
int lista_vacia(ptrLista *lista)
{
 return (*lista == NULL ? 1:0);
}
void nodos_lista(ptrNodo nodo)
{
 if (nodo == NULL)
     printf("La lista está vacia\n");
 else
     {
      while (nodo != NULL)
            {
             printf("%d",nodo->dato);
             nodo = nodo->siguiente;
             if (nodo != NULL)
                 printf(" -> ");
            }
      printf("\n");
     }
}