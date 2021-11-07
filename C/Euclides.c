#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int dividendo,divisor,residuo;
    printf("Este programa calcula el MCD de dos numeros usando el algoritmo de Euclides");
    printf("\nDigite el dividendo: ");scanf("%d",&dividendo);
    printf("Digite el divisor: ");scanf("%d",&divisor);
    residuo=dividendo%divisor;
    if(residuo==0)
    {
        printf("El MCD es %d", divisor);
    }
    while(!residuo==0)
    {
        dividendo=divisor;
        divisor=residuo;
        residuo=dividendo%divisor;
        if(dividendo%divisor==0)
        {
            printf("El MCD es %d\n", divisor);
            break;
        }
    }
    return 0;
}
