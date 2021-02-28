#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
	float aac,dt,eh,he,isr,pa,sai,sb,sd,sh,sm,sn,te;
	char nom[35];
	setlocale(LC_ALL, "spanish");
	printf("Este programa ayuda a presentar el sueldo que se pagará al empleado por quincena.\n");
	printf("Digite nombre del empeado: ");scanf("%s",nom);
	printf("Digite su antiguedad en años cumplidos: ");scanf("%f",&aac);
	if (aac<=0) {
		do {
			printf("El valor en años debe ser un número positivo.");
			printf("\nVuelva a digitar su antiguedad en años cumplidos: ");scanf("%f",&aac);
		} while (aac<=0);
	}
	printf("Digite el monto de su salario diario: ");scanf("%f",&sd);
	printf("Digite los días trabajados que tiene: ");scanf("%f",&dt);
	if (dt>15) {
		do{
			printf("El valor registrado es erroneo.\nComo el pago es quincenal el límite es 15\nDigitelo de nuevo:");scanf("%f",&dt);
		} while (!(dt>0 && dt<=15));
	}
	printf("Digite las horas extras que trabajó: ");scanf("%f",&he);
	while (eh<=0) {
		printf("Valor invalido, debe ingresar un valor positivo.\n");
		printf("Digite las horas extras que trabajó: ");scanf("%f",&he);
	}
	sb = sd*dt;
	sm = sd*30;
	if(aac<=5){
		pa = sm*0.05;
	} else{
		if(aac>5 && aac<=15){
			pa = sm*0.1;
		}else{
			pa = sm*0.15;
		}
	}
	sh = sd/8;
	if(he<=9 && he>=0){
		te = sh*he*2;
	}else{
		te = (sh*9*2)+(sh*(he-9)*3);
	}
	sai = sb+pa+te;
	if(sai<=12500){
		isr = sai*0.05;
	}
	if(sai>12500 && sai<=25000){
		isr = sai*0.1;
	}else{
		isr = sai*0.15;
	}
	sn = sai-isr;
	system("cls");
	printf("======================================================\n");
	printf("Nombre del empleado     : %s.\n",nom);
	printf("Antiguedad del empleado : %.0f a�os.\n",aac);
	printf("Salario diario          : $%.2f.\n",sd);
	printf("Dias trabajados         : %.0f.\n",dt);
	printf("Sueldo bruto            : $%.2f.\n",sb);
	printf("Prima de antiguedad     : $%.2f.\n",pa);
	printf("Horas extras trabajadas : %.0f\n",he);
	printf("Tiempo extra            : $%.0f\n",te);
	printf("ISR                     : $%.2f\n",isr);
	printf("Sueldo neto             : $%.2f\n",sn);
	printf("======================================================\n");
	return 0;
}

