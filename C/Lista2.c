//Un programa C simple para introducir una lista vinculada
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int datos;
    struct Node* siguiente;
};
//Programa para crear una lista enlazada sencilla con 3 nodos
int main()
{
    struct Node* cabeza = NULL;
    struct Node* segundo = NULL;
    struct Node* tercero = NULL;

    //Asignar nodos en el montón
    cabeza = (struct Node*)malloc(sizeof(struct Node));
    segundo = (struct Node*)malloc(sizeof(struct Node));
    tercero = (struct Node*)malloc(sizeof(struct Node));

    /* Se han asignado tres bloques dinámicamente.
     Tenemos punteros a estos tres bloques como cabeza,
     segundo y tercero
      cabeza          segundo          tercero
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
# representa cualquier valor aleatorio.
   Los datos son aleatorios porque no hemos asignado
   cualquier cosa todavía  */

    cabeza->datos = 1; // asignar datos en el primer nodo
    cabeza->siguiente = segundo; // Vincular el primer nodo con
    // el segundo nodo

    /* Los datos se han asignado a la parte de datos del primero
     bloque (bloque apuntado por la cabeza). Y a continuación
     puntero del primer bloque apunta al segundo.
     Así que ambos están vinculados.

      cabeza        segundo        tercero
        |              |              |
        |              |              |
    +---+---+     +----+----+     +-----+----+
    | 1  | o----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+
  */
// asignar datos en el segundo nodo
    segundo->datos = 2;

    // vincular el segudo nodo con el tercero
    segundo->siguiente = tercero;

    /* los datos se han asignado a la parte de datos del segundo
     bloque (bloque apuntado por segundo). Y a continuación
     puntero del segundo bloque apunta al tercero
     Bloquear. Así que los tres bloques están vinculados.

      cabeza       segundo        tercero
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */

    tercero->datos = 3; // asignar datos en el tercer nodo
    tercero->siguiente = NULL;
/* los datos se han asignado a la parte de datos de terceros
    bloque (bloque apuntado por tercio). Y siguiente puntero
    del tercer bloque se hace NULL para indicar
    que la lista enlazada se termina aquí.

Tenemos lista la lista enlazada.

           cabeza
             |
             |
        +---+---+     +---+---+       +----+------+
        | 1  | o----->|  2  | o-----> |  3 | NULL |
        +---+---+     +---+---+       +----+------+


    Tenga en cuenta que solo la cabeza es suficiente para representar toda la lista.
    Podemos atravesar la lista completa
    enmerando los siguientes punteros.    */

    return 0;
}
