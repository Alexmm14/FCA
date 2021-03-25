#include<iostream>
int main(){
    int x,y=1,i;
    printf("Este programa calcula el factorial de un numero que digites.");
    printf("\nDigita un numero: ");scanf("%i",&x);
    for(i=1;i<=x;i++){
          y*=i;
    }
    printf("El factorial de %i es %i",x,y);
    return 0;
}