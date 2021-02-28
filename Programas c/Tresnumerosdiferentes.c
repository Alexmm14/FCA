#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
#include<stdlib.h>
#define MAX_STRLEN 256

int main (){
	int Var1,Var2,Var3,aux;
	char sigue[MAX_STRLEN];
	setlocale(LC_ALL, "spanish");
	printf("Este programa pide tres n�meros enteros diferentes\ny los acomoda en las mismas variables de menor a mayor.");
	printf("\nDigita el primer n�mero: "); scanf("%i",&Var1);
	printf("Digita el segundo n�mero: ");scanf("%i",&Var2);	
	do{
		if(Var1==Var2){
			printf("El segundo n�mero debe ser distinto a %i.",Var1);
			printf("\nVuelve a digitar el segundo n�mero: ");scanf("%i",&Var2);
		}
	}while(Var1==Var2);	
	printf("Digita el tercer n�mero : ");scanf("%i",&Var3);
	do {
		if (Var3==Var1) {
			printf("El tercer n�mero debe ser distinto a %i.\n",Var1);
			printf("Vuelve a digitar el tercer n�mero : ");scanf("%i",&Var3);
		} else {
			if (Var3==Var2) {
				printf("El tercer n�mero debe ser distinto a %i\n",Var2);
				printf("Vuelve a digitar el tercer n�mero : ");scanf("%i",&Var3);
			}
		}
	} while (!(Var3!=Var2 && Var3!=Var1));
	if (Var3<Var2) {
		aux=Var3;
		Var3=Var2;
		Var2=aux;
	}
	if (Var2<Var1) {
		aux=Var2;
		Var2=Var1;
		Var1=aux;
	}
	if (Var3<Var2) {
		aux=Var3;
		Var3=Var2;
		Var2=aux;
	}
	system("cls");
	printf("Var 1 ahora tiene el n�mero %i",Var1);
	printf("\nVar 2 ahora tiene el n�mero %i",Var2);
	printf("\nVar 3 ahora tiene el n�mero %i",Var3);
	return 0;
}
