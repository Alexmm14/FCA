#include<iostream>
#include<math.h>
int main(){
    int b,e,resultado;
    printf("Este programa calcula la raiz cuadrada.");
    printf("\nDigita el numero de la base: ");scanf("%i",&b);
    printf("Digita el numero del exponente: ");scanf("%i",&e);
    resultado=pow(b,e);
    printf("El resultado es: %i",resultado);
    return 0;
}