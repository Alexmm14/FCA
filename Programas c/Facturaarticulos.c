#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>

int main (){
	float pu,nu,des,imp;
	setlocale(LC_ALL, "spanish");
	printf("\t\nEste programa genera la factura de una venta de varios art�culo.");
	printf("\n\nDigite el precio unitario del producto: "); scanf("%f",&pu);
	printf("Digite el n�mero de unidades: "); scanf("%f",&nu);
	imp=pu*nu;
	if(imp<=5000){
		des=5;
	}
	if(imp>5000 && imp<20001){
		des=10;
	}
	if(imp>20000){
		des=15;
	}
	system("cls");
	printf("Importe sin descuento:  $%.2f.",imp);
	printf("\nDescuento: \t\t\    %.2f%%",des);
	des=(des/100);
	imp=(imp-(imp*des));
	printf("\nImporte con descuento:   $%.2f.",imp);
	printf("\nIVA:\t\t\t    16,00%%");
	imp=(imp-(imp*0.16));
	printf("\nTOTAL A PAGAR:\t\t $%.2f.",imp);
	return 0;
}
