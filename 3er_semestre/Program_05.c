#include<stdio.h>
#include<conio.h>
int main()
{
   int i, j, k;
   int arr[3][3][3] = {
      { {4, 10, 5}, {10, 23, 16}, {6, 15, 0} },
      { {17, 2, 4}, {0, 1, 2}, {12, 13, 14} },
      { {5, 1, 8}, {56, 57, 58}, {13, 14, 15} }
      };
   for(i=0; i<3; i++)
   {
      for(j=0; j<3; j++)
      {
         for(k=0; k<3; k++)
            printf("Ubicacion [%d][%d][%d] = %d  ", i, j, k, arr[i][j][k]);
         printf("\n");
      }
      printf("\n");
   }
   getch();
   return 0;
}
