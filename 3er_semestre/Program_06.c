#include<stdio.h>
#include<conio.h>
int main()
{
   int i, j, k;
   int arr[3][3][3] = {
      { {4, 10, 5}, {17, 0, 12}, {5, 56, 13} },
      { {10, 23, 15}, {2, 1, 13}, {1, 57, 14} },
      { {5, 16, 0}, {4, 2, 14}, {8, 58, 15} }
      };
   for(i=0; i<3; i++)
   {
      for(j=0; j<3; j++)
      {
         for(k=0; k<3; k++)
            printf(" %d  ", arr[i][j][k]);
         printf("\n");
      }
      printf("\n");
   }
   getch();
   return 0;
}
