#include <stdio.h>
int main () {

   /* an array with 5 rows and 2 columns*/
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {
      for ( j = 0; j < 2; j++ ) {
         printf("El arreglo a[%d][%d] es igual a %d\n", i*3,j*(6/(i+1), a[i][j] );
      }
   }
   
   return 0;
}
