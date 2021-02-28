#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	float asigap,asigno,cont,cal,calap,calmas=5,calmenos=10,calapmas,calapmenos=10,dif,prom=0,promap;
	
	setlocale(LC_ALL, "spanish");
	printf("\n\t\tSISTEMA ESCOLAR.");
	printf("\n\n\t    Captura de calificaciones.");
	printf("\n\n\t  Digite sus diez calificaciones.");
	printf("\n\nLas calificaciones válidas están entre 5.0 y 10.0.\n");
	
	for (cont=1;cont<=10;cont++){
		printf("\nDigite la calificación %.0f:", cont);scanf("%f",&cal);
		if(cal>=5 && cal<=10){
			if(cal>calmas){
			calmas=cal;
		}
		if(cal<calmenos){
			calmenos=cal;
		}		
		prom=prom+cal;
		if(cal>5){
			asigap=asigap++;
		}else{
			asigno=asigno++;
		}	
		}else{
			printf("ERROR");
			printf("\nCalificación inválida");
			printf("\nEnter para volver a intentar...\n");
			cont--;
			getch();
		}
		if(cal>5 && cal>calapmas){
			calapmas=cal;
		}
		if(cal>5 && cal<calapmenos){
			calapmenos=cal;
		}		
		if(cal>5){
			calap=calap+cal;
		}
	}
	prom=prom/10;
	dif=calapmas-calapmenos;
	promap=calap/asigap;
	system("cls");
	printf("La calificación más alta fue:                %.1f", calmas);
	printf("\nLa calificación más baja fue:                %.1f", calmenos);
	printf("\nEl promedio general es:                      %.1f", prom);
	printf("\nLas asignaturas no aprobadas son:            %.1f", asigno);
	printf("\nLas asignaturas aprobadas son:               %.1f", asigap);
	printf("\nEl promedio de las asignaturas aprobadas es: %.1f",promap);
	printf("\nLa diferencia entre %.0f y %.0f es:\t\t     %.1f",calapmenos,calapmas,dif);
	return 0;
}
