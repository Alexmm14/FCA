#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int Num,i,x;
	float cont,perfecto;
	setlocale(LC_ALL,"spanish");
	printf("Comentario prueba"\n);
	printf("\nEste programa analiza un numero digitado por el teclado.");
	printf("\nEse número debe ser entero, de lo contrario el programa lo redondea.");
	printf("\n\nDigita un número: ");scanf("%i", &Num);
	system("cls");
	printf("Digitó el número: %i", Num);
	if(Num>0){
		printf("\nEs positivo");
	}
	else{
     	printf("\nEs negativo");	
	}
	if (Num%2==0) {
		printf("\nEs Par");
	}
	else{
		printf("\nEs impar");
	}
	for (i=1;i<=Num;i++) {
		if (Num%i==0) {
			cont = cont+1;
		}
	}
	if (cont==2 || cont==1) {
		printf("\nEs primo");
	}
	else{
		printf("\nNo es primo");
	}
	x = 2;
	perfecto = 0;
	while (x<=Num) {
		if (Num%x==0) {
			perfecto = perfecto+(Num/x);
		}
		x = x+1;
	}
	if (perfecto==Num) {
		printf("\nEs perfecto");
	}
	else{
		printf("\nNo es perfecto");
	}
	return 0;
}
