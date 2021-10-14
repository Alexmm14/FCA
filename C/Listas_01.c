#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
typedef struct nodo
{
	int info;
	struct nodo *sig;
} nodoL;
typedef nodoL* lista;
void insFront(lista *L, int n);
int mostrar(nodoL* L);
void borrar(lista *L, int n);
int main()
{
	int op=-1;
	lista milista=NULL;
	while(op)
	{
		system("cls");
		printf("\t\tEjemplo  con Listas\n\n\tSeleccione una opcion\n\n\t-1. Agregar elemento al frente\n\t-2. Mostrar lista\n\t-3. Borrar un elemento\n\t-0. Salir\n");
		scanf("%d",&op);
		switch(op)
		{
		case 1:
		{
			int numNuevo;
			system("cls");
			printf("Ingrese el numero para agregar a la lista:\n");
			scanf("%d",&numNuevo);
			system("cls");
			insFront(&milista,numNuevo);
			getch();
			break;
		}
		case 2:
		{
			system("cls");
			printf("Los numeros cargados en la lista:\n\n");
			int i = mostrar(milista);
			if(i==0)printf("La lista esta vacia \n\n");
			else printf("# \n\n");
			getch();
			break;
		}
		case 3:
		{
			int n;
			system("cls");
			printf("Ingrese el numero para borrar de la lista:\n");
			scanf("%d",&n);
			system("cls");
			borrar(&milista,n);
			getch();
			break;
		}
		}
	}
	return 0;
}
void insFront (lista *L, int n){
	lista aux = malloc(sizeof(nodoL));
	aux -> info = n;
	aux -> sig = *L;
	*L=aux;
	printf("Se agrego el %d a la lista\n",n);
}
int mostrar(nodoL* L){
	int i=0;
	if (L!=NULL){
		i=1;
		printf(" |%d|->",L->info);
		mostrar(L->sig);
	}
	return i;
}
void borrar(lista *L, int n){
	lista aux = *L;
	(*L) = (*L) -> sig;
	free(aux);
}