#include<iostream>
int main(){
    int n,x,y=0,resultado=0;
    printf("Este programa calcula el valor de 1+2+3+…+n.");
    printf("\nDigita n: ");scanf("%i",&n);
    do{
    x=resultado;
    y++;
    resultado=x+y;
    }while(y<n);
    printf("El resultado es: %i",resultado);
    return 0;
}