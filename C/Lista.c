#include <stdio.h>
#include <stdlib.h>

typedef struct snodo {
	int valor;
	struct snodo *sig;
} tnodo;

typedef tnodo *tpuntero;
void insertaralprincipio(tpuntero *cabeza, int dato);
void imprimirlista(tpuntero cabeza);
int main() {
	tpuntero cabeza;
	int e;
	printf("Ingrese elemento -1 para terminar");
	scanf("%d", &e);
	while(e=!-1) {
		insertaralprincipio(&cabeza, e);
		scanf("%d", &e);
	}
	imprimirlista(cabeza);
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
		printf("%d", cabeza->valor);
		cabeza=cabeza->sig;
	}
}
