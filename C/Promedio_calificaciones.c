#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "spanish");
	float a,b,contador,promedio;
	printf("Este programa te pide calificaciones y las suma hasta que");
	printf("una calificación valga 0 y te dice cuantas calificaciones");
	printf("se promediaron y su promedio.\n");
	do {
		contador = contador+1;
		printf("Digite su calificación %.0f:",contador);scanf("%f",&a);
		while (a>10) {
			printf("La calificación debe ser menor o iagual a 10\n");
			printf("Digite su calificación %.0f otra vez: \n",contador);scanf("%.0f",&a);
		}
		b = a+b;
	} while (a!=0);
	contador = contador-1;
	promedio = b/(contador);
	system("cls");
	printf("Se promediaron %.0f calificaciones y el promedio es: %.2f\n",contador,promedio);
	return 0;
}

