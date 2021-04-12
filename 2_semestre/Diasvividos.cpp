#include<iostream>
#include <windows.h>  
#include<locale.h>
using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}
int main(){
    setlocale(LC_ALL,"spanish");
    char nombre[50];
    int dia,mes,ano,diahoy,meshoy,anohoy,diafin,mesfin,anofin;
    gotoxy(3,3);cout<<"------------------------------------------------------------------------";
    gotoxy(3,4);cout<<"-  Este programa calcula los días vividos de una persona.              -";
    gotoxy(3,5);cout<<"-  Se considerará que todos los meses tiene 30 días naturales.         -";
    gotoxy(3,6);cout<<"-  Para eso se necesita conocer la fecha de nacimietno de la persona.  -";
    gotoxy(3,7);cout<<"-  Para eso se necesita conocer la fecha de nacimietno de la persona.  -";
    gotoxy(3,8);cout<<"------------------------------------------------------------------------";
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
    gotoxy(3,3);cout<<"------------------------------------------------------------------------";
    gotoxy(4,4);cout<<nombre;printf(" nació el %i %i %i y ha vivido: ",dia,mes,ano);
    gotoxy(4,5);printf("%i dias//%i meses//%i años hasta el día de hoy.\n",diafin,mesfin,anofin);
    gotoxy(3,6);cout<<"------------------------------------------------------------------------\n\n";
    system ("pause");    
    return 0;
}