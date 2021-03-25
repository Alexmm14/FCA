#include<iostream>
int main(){
    int x,y=1;
    printf("Este programa escribe la numeracion desde el 1 hasta el numero que digites.");
    printf("\nDigita un numero: ");scanf("%i",&x);
    printf("%i\n",y);
    while(y<x){
        y++;
        printf("%i\n",y);
    }
    return 0;
}