#include<iostream>
int main(){
    int n,m,x=0,y=1,z=1,i=1;
    printf("Este programa calcula la serie de Fibonacci hasta la posision indicado por dos numeros sumados que tu digites.");
    printf("\nDigita el primer numero: ");scanf("%i",&n);
    printf("Digita el segundo numero: ");scanf("%i",&m);n=n+m;printf("1\n");
    do{
        z=x+y;
        x=y;
        y=z;
        i++;
        printf("%i\n",z);
    }while(i<n);
    return 0;
}