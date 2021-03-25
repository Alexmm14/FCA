#include<iostream>
int main(){
    int x;
    printf("Este programa escribe la numeracion desde el numero que digites hasta el 1.");
    printf("\nDigita un numero mayor a 1: ");scanf("%i",&x);
    printf("%i\n",x);
    while(x>1){
        x--;
        printf("%i\n",x);
    }
    return 0;
}