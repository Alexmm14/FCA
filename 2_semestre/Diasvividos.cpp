#include<iostream>
#include<locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"spanish");
    char nombre[50];
    int dia,mes,ano,diahoy,meshoy,anohoy,diafin,mesfin,anofin;
    cout<<"Este programa calcula los días vividos de una persona.";
    cout<<"\nSe considerará que todos los meses tiene 30 días naturales.";
    cout<<"\nPara eso se necesita conocer la fecha de nacimietno de la persona.";
    cout<<"\nDigita el nombre de la persona: ";gets(nombre);
    cout<<"Digita el día de nacimiento de ";cout<<nombre;cout<<" : ";cin>>dia;
    cout<<"Digita el mes de nacimiento de ";cout<<nombre;cout<<" : ";cin>>mes;
    cout<<"Digita el año de nacimiento de ";cout<<nombre;cout<<" : ";cin>>ano;
    cout<<"¿Qué día es hoy? ";cin>>diahoy;
    cout<<"¿Cuál es el mes actual? ";cin>>meshoy;
    cout<<"¿Cuál es el año actual? ";cin>>anohoy;
    diafin=diahoy-dia;
    mesfin=meshoy-mes;
    anofin=anohoy-ano;
    system("cls");
    cout<<nombre;printf(" nació el %i %i %i y ha vivido:",dia,mes,ano);
    printf("\n%i dias %i meses %i años hasta el día de hoy.",diafin,mesfin,anofin);
    
    return 0;
}