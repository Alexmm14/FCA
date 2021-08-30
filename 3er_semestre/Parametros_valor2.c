#include<stdio.h>//Función que calcula x^y(con y entero)
#include<math.h>
 
float potencia(float x,int y);/*prototipo*/
 
int main(){
    float a,resultado;
    int b;
    printf("Este programa calcula x^y con y entera.\nDigite x: ");scanf("%f",&a);
    printf("Digite y: ");scanf("%d",&b);
    resultado=potencia(a,b);
    printf("%f ^ %d = %f",a,b,resultado);
    return 0;
}
 
float potencia(float x,int y){/*definición*/
    float prod;
    prod=pow(x,y);
    return(prod);
}
