#include<stdio.h>//Función que indica si un número es cuadrado perfecto
#include<math.h>
 
#define TRUE 1//Declaración de macros y asignación de valor
#define FALSE 0
 
void explicacion(void);//Declaración de funciones
int cuadrado_perfecto(int x);
 
void main(){
    int n,perfecto;
    explicacion();//Llamada a la función explicación
    scanf("%d",&n);//Se guarda el dato digitado en la función explicación
    perfecto=cuadrado_perfecto(n);//Se llama la función cuadrado_perfecto y se iguala
    if(perfecto){
        printf("%d es cuadrado perfecto.\n",n);
    }else{
        printf("%d no es cuadrado perfecto.\n",n);
    }
}
 
void explicacion(void){
    printf("Este programa dice si un numero ");
    printf("es cuadrado perfecto \n");
    printf("Introduzca un numero: ");
}
 
int cuadrado_perfecto(int x){
    int raiz,perfecto;
    raiz=(int)sqrt(x);
    if(x==raiz*raiz){
        perfecto=TRUE;/*cuadrado perfecto*/
    }else{
        perfecto=FALSE;/*no es cuadrado perfecto*/
        return (perfecto);
    }
}
