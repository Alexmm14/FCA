#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;

void gotoxy();
void menu();
int main(){
    setlocale(LC_ALL,"spanish");
    return 0;
}

void menu(){
    gotoxy(1,1);cout<<("*****************************");
    gotoxy(1,2);cout<<("*            MENÚ           *");
    gotoxy(1,3);cout<<("*****************************");
    gotoxy(1,4);cout<<("* OPCIONES                  *");
    gotoxy(1,5);cout<<("*                           *");
    gotoxy(1,6);cout<<("* Consultar pila            *");
    gotoxy(1,6);cout<<("* Introducir nuevovalor     *");
    gotoxy(1,6);cout<<("**");
    gotoxy(1,6);cout<<("**");
    gotoxy(1,6);cout<<("**");
}

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}