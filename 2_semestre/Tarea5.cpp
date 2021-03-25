#include <iostream>
int main(){
int x,y,suma,resta,producto,division,residuo;
printf("Digite el primer valor: ");scanf("%i",&x);
printf("Digite el segundo valor: ");scanf("%i",&y);
suma=x+y;resta=x-y;producto=x*y;division=x/y;residuo=x%y;
printf("suma:%i\nresta:%i\nproducto:%i\ndivision:%i\nresiduo:%i\n",suma,resta,producto,division,residuo);
system("pause");
return 0;
}