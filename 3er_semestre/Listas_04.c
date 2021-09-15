#include <stdio.h>
#include <stdlib.h>

typedef struct snodo {
	int valor;
	struct snodo *sig;
} tnodo;

typedef tnodo *tpuntero;

void insertaralprincipio(tpuntero *cabeza, int dato);
void imprimirlista(tpuntero cabeza);
void borrarlista(tpuntero *cabeza);

int main() {
	tpuntero cabeza;
	int e;
	print("Ingrese elemento -1 para terminar");

	scanf("%d", &e);
	while(e!=-1) {
		insertaralprincipio(&cabeza, e);
		scanf("%d", &e);
	}
	imprimirlista(cabeza);
	borrarlista(&cabeza);

	return 0;
}

void insertaralprincipio(tpuntero *cabeza, int dato) {
	tpuntero nuevo;
	nuevo=(tpuntero) malloc(sizeof(tnodo));
	nuevo->valor=dato;
	nuevo->sig=*cabeza;
	*cabeza=nuevo;
}

void imprimirlista(tpuntero cabeza) {
	while(cabeza!=NULL) {
		printf("%4d", cabeza->valor);
		cabeza=cabeza->sig;
	}
}

void borrarlista(tpuntero *cabeza) {
	tpuntero actual;
	while(*cabeza!=NULL) {
		actual=*cabeza;
		*cabeza=(*cabeza)->sig;
		free(actual);
	}
}