#include<stdio.h>
#include<locale.h>
int main(){
	float x=0,y=2,cont1,cont2,contfinal,r1=1,r2=-0.5,rf;
	setlocale(LC_ALL, "spanish");
	printf("\tEste programa imprime el resultado de la serie:");
	printf("\n\t\t1 - 1/2 + 1/4 - 1/6 + 1/8 - 1/10 + 1/12 - + - + - +");
	printf("\n\tMientras el resultado del elemento sea mayor o igual a 0.01.");
	printf("\n\tAl finalizar el programa muestra el número de elementos sumados y el resultado de la serie.");
	printf("\n\tENTER para continuar...");
	getch();	
	for(cont1=1;cont1<=25;cont1++){
		x=x+4;
		r1=r1+(1/x);
	}
	for(cont2=1;cont2<=24;cont2++){
		y=y+4;
		r2=r2-(1/y);
	}
	contfinal=cont1+cont2;
	rf=r1+r2;
	printf("\n\n\tSe sumaron %.0f elementos.",contfinal);
	printf("\n\tEl resultado de la serie es %f.",rf);
}
