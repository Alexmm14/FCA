#include<iostream>
int main (){
    int x;
    printf("Digita tu edad en años: ");scanf("%i",&x);
    if(x<=12){
    printf("Infante");
    }
    if(x>12 && x<=18){
        printf("Adolecente");
    }
    if(x>18 && x<=45){
        printf("Maduro");
    }
    if(x>45){
        printf("Tercera edad");
    }
    return 0;
}