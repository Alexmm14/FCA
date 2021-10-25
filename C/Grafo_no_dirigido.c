#include<stdio.h>
//Definición de la matriz
int grafo[50][50];

init()
{
    int n,i,j;
    char res,enter;
    printf("Cuantos nodos tiene tu grafo: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=n;j++)
        {
            if (i==j)
            {
                grafo[i][j]=0;
            }
            printf("\nLos nodos %d y %d son adyacentes? (Y/N): ",i,j);
            scanf("%c",&res);
            if (res==0){
                grafo[i][j]=1;
            }else
                grafo[i][j]=0;
            scanf("%c",&enter);            
        }
    }
}