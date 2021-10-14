#include<stdio.h>
#include<conio.h>
int main()
{
   int i, j, k;
   int arr[3][3][3] = {
      { {4, 10, 6}, {10, 23, 15}, {5, 16, 0} },
      { {17, 0, 12}, {2, 0, 12}, {4, 0, 12} },
      { {5, 56, 13}, {1, 57, 14}, {8, 58, 15} }
      };
   for(i=0; i<3; i++)
   {
      for(j=0; j<4; j++)
      {
         for(k=0; k<2; k++)
            printf("Ubicacion [%d][%d][%d] = %d  ", i, j, k, arr[i][j][k]);
         printf("\n");
      }
      printf("\n");
   }
   getch();
   return 0;
}