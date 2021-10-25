#include<stdio.h>
#include<stdlib.h>
#define Tamano 4
int Arriba=-1, poner_arreglo[Tamano];
void Empujar();
void Sacar();
void Mostrar();
int main()
{
    int opcion;
    while(1)
    {
    printf("\n\t\tOperaciones a Realizar con Pilas\n\n\n");
    printf("\n1.Empujar el elemento\n2.Sacar el elemento\n3.Mostrarlos\n4.Se acabo");
    printf("\n\nPor favor, capture una opcion :");
    scanf("%d",&opcion);
        switch(opcion)
        {
            case 1: Empujar();
            break;
            case 2: Sacar();
            break;
            case 3: Mostrar();
            break;
            case 4: exit(0);
            default: printf("\n¡Valor no aceptado!");
        }
    }
}

void Empujar()
{
    int x;
    if(Arriba == Tamano-1)
    {
        printf("\nHay un desbordamiento de memoria\n");
    }
    else
    {
        printf("\nCapture el elemento a insertar en la pila de valor positivo: ");
        scanf("%d",&x);
        Arriba = Arriba + 1;
        poner_arreglo[Arriba] = x;
    }
}

void Sacar()
{
    if(Arriba == -1)
    {
        printf("\n\nHay un desbordamiento de memoria\n");
    }
    else
    {
        printf("\nEl elemento a sacar es: %d", poner_arreglo[Arriba]);
        Arriba = Arriba - 1;
    }
}

void Mostrar()
{
    if(Arriba == -1)
    {
        printf("\nHay un desbordamiento de memoria");
    }
    else
    {
        printf("\nLos elementos existentes en la pila exceptuando el ultimo son: \n");
    for(int i=Arriba; i >0; --i)
        printf("%d.- %d\n",i,poner_arreglo[i]);
    }
}
