#include<stdio.h>
#include<conio.h>
int main()
{
   int i, j, k;
   int arr[3][4][2] = {
      { {2, 4}, {7, 8}, {3, 4}, {5, 6} },
      { {7, 6}, {3, 4}, {5, 3}, {2, 3} },
      { {8, 9}, {7, 2}, {3, 4}, {5, 1} }
      };
   for(i=0; i<3; i++)
   {
      for(j=0; j<4; j++)
      {
         for(k=0; k<2; k++)
            printf("El arreglo [%d][%d][%d] tiene el valor %d  ", i, j, k, arr[i][j][k]);
         printf("\n");
      }
      printf("\n");
   }
   getch();
   return 0;
}
