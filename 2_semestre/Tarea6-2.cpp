#include<iostream>
int main(){
    int x,uni,dec,cen,res;
   printf("Este programa realiza la descomposicion de un valor numerico de tres cifras en unidades, decenas y centenas.\n");
   printf("Digite un numero de tres cifras: ");scanf("%i",&x);
   cen=x/100;res=x%100;x=res;dec=x/10;res=x%10;
   printf("Unidades:%i\nDecenas:%i\nCentenas:%i\n",res,dec,cen);
   return 0;
}