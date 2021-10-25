#include<stdio.h>
#include<stdio.h>
void Shell(int *array, int n) {
  int i,x,y,tmp;

  for(i = 1; i < n; i = i*3+1) {} //la idea es que SOLO se incremente i a razón de i*3+1 por repetición

    while (i > 0) {
      for(x = i; x < n; x++) {
        y = x;
        tmp = array[x];
        while (y >= i && array[y - i] > tmp) {
          array[y] = array[y - i];
          y = y - i;
        }
        array[y] = tmp;
      }
      i = i / 2;
    }
}
