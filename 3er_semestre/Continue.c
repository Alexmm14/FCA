#include<stdio.h>
#include<conio.h>

void main(){
    int n,positivos=0;
    do
    {
        printf("\nTeclea un numero (-99 finaliza): ");
        scanf("%d",&n);
        if (n<=0)continue;
        {
            positivos++;
        }
    } while (n!=-99);
    printf("\nHas tecleado %d numeros positivos.",positivos);    
}
