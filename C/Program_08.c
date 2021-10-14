#include<stdio.h>
int i,j,k;                         //variables a utilizar
int main()
{
	int arr[2][3][3];              //declaración del arreglo
	printf("Capturar los valores al arreglo 3D: \n");
	for(i=1;i<=2;i++)              //bloque dimensional
	{
		for(j=1;j<=3;j++)          //registros
		{
			for(k=1;k<=3;k++)      //columnas
			{
				printf("el valor en el arreglo[%d][%d][%d] es ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("Imprimir los valores en el arreglo: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
