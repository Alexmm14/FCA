#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int main () {
    setlocale(LC_ALL, "spanish");
    short a;
    unsigned int b;
    long c;
    unsigned long d;
    int e;
    float f;
    double g;
    char h;
    printf("Este programa pide valores válidos para las siguientes variables.\n");
    printf("Short (-32,798---32767): ");scanf("%i",&a);
    printf("unsigned short (0---65,535): ");scanf("%i",&b);fflush(stdin);
    printf("long (-2,147,483,684---2,147,483,647): "); scanf("%li",&c);fflush(stdin);
    printf("unsigned long (0---4,249,967,295): ");scanf("%i",&d);fflush(stdin);
    printf("int (2,147,483,684---2,147,483,647): ");scanf("%i",&e);fflush(stdin);
    printf("float (3.4^-38---3.4^38): ");scanf("%f",&f);fflush(stdin);
    printf("double (1.7^-308---1.7^308: ");scanf("%f",&g);fflush(stdin);
    printf("char (-128---127): ");scanf("%c",&h);fflush(stdin);
    system ("cls");
    printf("short %i\nunsigned short %i\nlong %i\nunsigned long %i\nint %i",a,b,c,d,e);
    printf("\nfloat %f\ndouble %f",f,g);
    printf("\nchar %c\n",h);
    return 0;
}