#include <stdio.h>
#include <stdlib.h>

char* getPtrNom();
int getId();
int isEmpty();
int menu();
void clearBuffer();
void dequeue();
void enqueue();
void isEmptyWrap();

struct persona {
  int id;
  char *nombre;
  struct persona *siguiente;
};

typedef struct persona Nodo;

Nodo *final;
Nodo *inicio;

main() {
  final = inicio = 0;
  return menu();
}

int menu() {
  char c;

  do {
    printf("\n~~ MENU: cola! ~~");
    printf("\nHaga una seleccion:");
    printf("\n 1. enqueue()");
    printf("\n 2. dequeue()");
    printf("\n 3. isEmpty()");
    printf("\n q: salir.\n");
    c = getchar();
    switch(c) {
      case '1':
        enqueue();
        break;
      case '2':
        dequeue();
        break;
      case '3':
        isEmptyWrap();
        break;
      default:
        break;
    }
  } while(c != 'q' && c != EOF);

  return 1;
}
void isEmptyWrap() {
  clearBuffer();
  if (isEmpty()) {
    printf("sirilo piscuilo.\n");
  } else {
    printf("nel pastel.\n");
  }
}
int getId() {
  int num;
  printf("Ingrese el ID: ");
  scanf("%d" , &num);
  return num;
}
char* getPtrNom() {
  char d,*newAr;

  int i = 0;

  newAr = (char*) malloc(sizeof(char)*100);

  printf("Ingrese el nombre: ");

  while((d = getchar()) != EOF && d != '\n') {
    newAr[i++] = d;
  }
  return newAr;
}
void dequeue() {
  Nodo *actual,
       *temporal;
  clearBuffer();
  if (isEmpty()) {
    printf("Y metiamos algo en la cola...");
  } else {
    if (final == inicio) {
      printf("%d | %s\n", final->id, final->nombre);
      final = inicio = 0;
    } else {
      actual = final;
      while (actual != inicio) {
        temporal = actual;
        actual = temporal->siguiente;
      }
      printf("%d | %s\n", inicio->id, inicio->nombre);
      inicio = temporal;
    }
  }
}
void enqueue() {
  Nodo *nodoNuevo,
       *temporal;

  nodoNuevo = (Nodo*) malloc(sizeof(Nodo));
  clearBuffer();

  nodoNuevo->nombre = getPtrNom();
  nodoNuevo->id = getId();
  if (isEmpty()) {
    final = nodoNuevo;
    inicio = nodoNuevo;
  } else {
    temporal = final;
    final = nodoNuevo;
    final->siguiente = temporal;
  }
  clearBuffer();
}
int isEmpty() {
  if (!final) {
    return 1;
  } else {
    return 0;
  }
}

void clearBuffer() {
  while(getchar() != '\n')
    ;
}