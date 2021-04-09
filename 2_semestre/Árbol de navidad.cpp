#include<iostream> 
#include<locale.h>
using namespace std;
int main (){
   int hojas,tronco,espacios=1,dibujo=1,cont1,cont2,x=1;
   setlocale(LC_ALL, "spanish");
   printf("Este programa imprime un árbol de navidad con *.");
   printf("\nDigite la altura de las hojas del árbol: ");fflush(stdin);scanf("%i",&cont1);
   cont2=cont1;
   for(hojas=1;hojas<=cont1;hojas++){//estos procesos son para las hojas
   for (espacios=1;espacios<=cont2;espacios++){
       printf(" ");    
   }
   cont2--;
   for(dibujo=1;dibujo<=x;dibujo++){
       printf("*");
   }
   x=x+2;printf("\n");
   }

   for(tronco=1;tronco<=2;tronco++){//Estos procesos don del tronco
       for(espacios=1;espacios<=cont1;espacios++){
           printf(" ");
       }
       printf("*\n");
   }
    system ("pause");
    return 0;
}