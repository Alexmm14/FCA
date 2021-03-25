#include<iostream>
int main(){
    int x,y;
    printf("Este programa determina si un numero es par o impar.");
    printf("\nDigita un numero: ");scanf("%i",&x);
    if(x%2==0){
        printf("El numero es par.");
    }else{
        printf("El numero es impar.");
    }
    return 0;
}