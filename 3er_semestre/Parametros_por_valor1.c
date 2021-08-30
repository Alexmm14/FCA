#include<stdio.h>
 
int main (){
    int x,y,max;
    x=2;
    y=4;
    max=maximo(x,2*y);//Llamada a la función maximo asignando valores de x y 2*y
    printf("El valor maximo de %d y %d es %d",x,y,max);
}   
 
int maximo(int a,int b){//La función asigna x=a 2*y=b
    int max;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    return(max);//Se devuelve el valor de 8 en la variable max de la línea 8
 
}
