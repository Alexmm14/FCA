#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>

 main()
 {
 	int Var1, Var2;
 	char sigue;
 	setlocale(LC_ALL, "spanish");
	printf("Este programa te pide dos n�meros enteros diferentes y\n ");
	printf("divide el mayor entre el menor.\n");
	printf("Digita el primer n�mero: "); scanf("%i", &Var1);
	do{
		printf("\n\nEscribe un segundo n�mero diferente al primero: ");
		scanf("%i", &Var2);
		if (Var2 == Var1)
		   {
		   	printf("El n�mero que escribiste es igual al primer n�mero \n");
		    printf("ENTER para volver a intentarlo...");
		    scanf("%C", &sigue);
			}
	}while (Var1 == Var2);
		if (Var1 > Var2)
		   {
		    	printf("\n\n El resultado de dividir %i / %i es : %i", Var1, Var2, Var1/Var2);
		   }	
		  else
		  {
			printf("\n\n El resultado de dividir %i / %i es: %i", Var2, Var1, Var2/Var1);
		   }
       
           printf ("\n\n ENTER PARA TERMINAR...");
           scanf("c", &sigue);
   }
