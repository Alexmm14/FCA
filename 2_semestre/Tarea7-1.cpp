#include<iostream>
int main(){
    int a,b,c,d,e,aux;
    printf("Este programa el mayor de 5 numeros.");
    printf("\nDigita el primer numero: ");scanf("%i",&a);
    printf("Digita el segundo numero: ");scanf("%i",&b);
    printf("Digita el tercer numero: ");scanf("%i",&c);
    printf("Digita el cuarto numero: ");scanf("%i",&d);
    printf("Digita el quinto numero: ");scanf("%i",&e);
    if (a>b){
		aux=a;
		a=b;
		b=aux;
    }
    if (b>c){
		aux=b;
		b=c;
		c=aux;
    }
    if (c>d){
		aux=c;
		c=d;
		d=aux;
    }
    if (d>e){
		aux=d;
		d=e;
		e=aux;
    }
    if(a>e){
        aux=a;
        a=e;
        e=aux;
    }
    printf("El numero mas grande es %i",e);
    return 0;
}