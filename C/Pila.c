#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int up=-1, array[MAX];
void add();
void show();
int main()
{
    int opcion;
    while(1)
    {
    system("pause");
    system("clear");
    printf("\n\tMENU\n\n");
    printf("\n1.Agregar elemento\n2.Mostrar los elementos\n3.Salir");
    printf("\n\nDigite una opcion :");
    scanf("%d",&opcion);
        switch(opcion)
        {
            case 1: add();
            break;
            case 2: show();
            break;
            case 3: exit(0);
            default: printf("\nOpcion invalida.\n");
        }
    }
}

void add()
{
    int var;
    if(up == MAX-1)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        printf("Digite un valor positivo: ");
        scanf("%d",&var);
        up=up+1;
        array[up] = var;
    }
}

void show()
{
    if(up==-1)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        printf("\nLos elementos de la pila son: \n");
    for(int i=up; i >=0; --i)
        printf("%d.- %d\n",i,array[i]);
    }
}
