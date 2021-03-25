#include<iostream>
int main(){
    float a,b,resultado;
    printf("Este programa resuelve la ecuacion (a + b)3\n");
    printf("Digite a: ");scanf("%f",&a);
    printf("Digite b: ");scanf("%f",&b);
    resultado=a+b;resultado=resultado*3;
    printf("El resultado es %f.",resultado);
    return 0;
}