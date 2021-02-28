#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>
#include<stdio.h>

int main (){
	int saldo,ret,op1,op2;
	char ent;
	saldo=10000;
	setlocale(LC_ALL, "spanish");
	printf("Para fines prácticos de este programa el saldo valdrá $10,000.00.\n\n ");
	printf("\t\tBIENVENIDO AL BANCO ECLIPSE.\n");
	printf("\tMenú de acciones para tarjeta de débito.\n\n");
	printf("1.- Consulta de saldo.\n");
	printf("2.- Retiro de efectivo.\n\n");
	printf("Digite la acción que dese realizar con su tarjeta de débito: ");
	scanf("%i",&op1);
	system("cls");
	if (op1==1){
		printf("\tCONSULTA DE SALDO.\n");
		printf("Formas de consultar su saldo\n");	
		printf("1.- En pantalla.\n");
		printf("2.- Impreso en comprobante.\n");
		printf("�C�mo desea consultar su saldo?: ");
		scanf("%i",&op2);
		if(op2==1){
			printf("\nSu saldo es de $%i.\n",saldo);
			printf("ENTER para terminar...");
			scanf("%c",&ent);
		}else{
			printf("\nSu saldo se est� imprimiendo\n");
			printf("ENTER para terminar...");
			scanf("%c",&ent);
		}	
	}else{
		printf("\tRETIRO DE EFECTIVO.\n");
		printf("El retiro de efectivo est� limitado a la mitad del saldo disponible.\n");
		printf("Por lo que no puede ser mayor a $5,000.00.");
		printf("\n�Qu� cantidad desea retirar?: ");
		scanf("%i",&ret);
		if(ret<5001){
		printf("\nSu saldo inicial era de $%i.",saldo);
		saldo=saldo-ret;
		printf("\nEl monto de retiro fue de $%i.",ret);
		printf("\nSu saldo final es de $%i.",saldo);
		printf("\nENTER para terminar...");
		scanf("%c",ent);	
		}else{
			printf("\nPor disposici�n oficial del banco no puede retirar el monto de $%i.",ret);
			printf("\nENTER para terminar...");
			scanf("%c",ent);
		}
	}
	return 0; 
}
