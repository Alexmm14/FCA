#include<iostream>
#include <windows.h>
#include<locale.h>
using namespace std;

void gotoxy(int x,int y){//Función para colocar el cursor en xy punto
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}

int main (){
    setlocale(LC_ALL,"spanish");
    int i,j;
    int array1[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int array2[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int arrayr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    for(i=0;i<4;i++){//Captura de datos de matriz 1
        for(j=0;j<4;j++){
            system("cls");
            gotoxy(1,1);cout<<"-----------------   ";
            gotoxy(1,2);cout<<"| "<<array1[0][0]<<" | "<<array1[0][1]<<" | "<<array1[0][2]<<" | "<<array1[0][3]<<" |";
            gotoxy(1,3);cout<<"-----------------   ";
            gotoxy(1,4);cout<<"| "<<array1[1][0]<<" | "<<array1[1][1]<<" | "<<array1[1][2]<<" | "<<array1[1][3]<<" |";
            gotoxy(1,5);cout<<"----------------- + ";
            gotoxy(1,6);cout<<"| "<<array1[2][0]<<" | "<<array1[2][1]<<" | "<<array1[2][2]<<" | "<<array1[2][3]<<" |";
            gotoxy(1,7);cout<<"-----------------   ";
            gotoxy(1,8);cout<<"| "<<array1[3][0]<<" | "<<array1[3][1]<<" | "<<array1[3][2]<<" | "<<array1[3][3]<<" |";
            gotoxy(1,9);cout<<"-----------------   ";
            cout<<"\nDigite el elemento "<<i<<j<<" de la matriz 1: ";cin>>array1[i][j];

        }
    }

    for(i=0;i<4;i++){//Captura de datos de la matriz 2
        for(j=0;j<4;j++){
            system("cls");
            gotoxy(1,1);cout<<"-----------------   ";
            gotoxy(1,2);cout<<"| "<<array1[0][0]<<" | "<<array1[0][1]<<" | "<<array1[0][2]<<" | "<<array1[0][3]<<" |";
            gotoxy(1,3);cout<<"-----------------   ";
            gotoxy(1,4);cout<<"| "<<array1[1][0]<<" | "<<array1[1][1]<<" | "<<array1[1][2]<<" | "<<array1[1][3]<<" |";
            gotoxy(1,5);cout<<"----------------- + ";
            gotoxy(1,6);cout<<"| "<<array1[2][0]<<" | "<<array1[2][1]<<" | "<<array1[2][2]<<" | "<<array1[2][3]<<" |";
            gotoxy(1,7);cout<<"-----------------   ";
            gotoxy(1,8);cout<<"| "<<array1[3][0]<<" | "<<array1[3][1]<<" | "<<array1[3][2]<<" | "<<array1[3][3]<<" |";
            gotoxy(1,9);cout<<"-----------------   ";

            gotoxy(21,1);cout<<"-----------------   ";
            gotoxy(21,2);cout<<"| "<<array2[0][0]<<" | "<<array2[0][1]<<" | "<<array2[0][2]<<" | "<<array2[0][3]<<" |";
            gotoxy(21,3);cout<<"-----------------   ";
            gotoxy(21,4);cout<<"| "<<array2[1][0]<<" | "<<array2[1][1]<<" | "<<array2[1][2]<<" | "<<array2[1][3]<<" |";
            gotoxy(21,5);cout<<"----------------- = ";
            gotoxy(21,6);cout<<"| "<<array2[2][0]<<" | "<<array2[2][1]<<" | "<<array2[2][2]<<" | "<<array2[2][3]<<" |";
            gotoxy(21,7);cout<<"-----------------   ";
            gotoxy(21,8);cout<<"| "<<array2[3][0]<<" | "<<array2[3][1]<<" | "<<array2[3][2]<<" | "<<array2[3][3]<<" |";
            gotoxy(21,9);cout<<"-----------------   ";
            cout<<"\nDigite el elemento "<<i<<j<<" de la matriz 2: ";cin>>array2[i][j];
        }
    }

    for(i=0;i<4;i++){//Suma de todos los elementos
        for(j=0;j<4;j++){
            arrayr[i][j]=array1[i][j]+array2[i][j];
        }
    }

    system("cls");//Impresión de la suma final
    gotoxy(1,1);cout<<"-----------------   ";
    gotoxy(1,2);cout<<"| "<<array1[0][0]<<" | "<<array1[0][1]<<" | "<<array1[0][2]<<" | "<<array1[0][3]<<" |";
    gotoxy(1,3);cout<<"-----------------   ";
    gotoxy(1,4);cout<<"| "<<array1[1][0]<<" | "<<array1[1][1]<<" | "<<array1[1][2]<<" | "<<array1[1][3]<<" |";
    gotoxy(1,5);cout<<"----------------- + ";
    gotoxy(1,6);cout<<"| "<<array1[2][0]<<" | "<<array1[2][1]<<" | "<<array1[2][2]<<" | "<<array1[2][3]<<" |";
    gotoxy(1,7);cout<<"-----------------   ";
    gotoxy(1,8);cout<<"| "<<array1[3][0]<<" | "<<array1[3][1]<<" | "<<array1[3][2]<<" | "<<array1[3][3]<<" |";
    gotoxy(1,9);cout<<"-----------------   ";

    gotoxy(21,1);cout<<"-----------------   ";
    gotoxy(21,2);cout<<"| "<<array2[0][0]<<" | "<<array2[0][1]<<" | "<<array2[0][2]<<" | "<<array2[0][3]<<" |";
    gotoxy(21,3);cout<<"-----------------   ";
    gotoxy(21,4);cout<<"| "<<array2[1][0]<<" | "<<array2[1][1]<<" | "<<array2[1][2]<<" | "<<array2[1][3]<<" |";
    gotoxy(21,5);cout<<"----------------- = ";
    gotoxy(21,6);cout<<"| "<<array2[2][0]<<" | "<<array2[2][1]<<" | "<<array2[2][2]<<" | "<<array2[2][3]<<" |";
    gotoxy(21,7);cout<<"-----------------   ";
    gotoxy(21,8);cout<<"| "<<array2[3][0]<<" | "<<array2[3][1]<<" | "<<array2[3][2]<<" | "<<array2[3][3]<<" |";
    gotoxy(21,9);cout<<"-----------------   ";

    gotoxy(41,1);cout<<"-----------------   ";
    gotoxy(41,2);cout<<"| "<<arrayr[0][0]<<" | "<<arrayr[0][1]<<" | "<<arrayr[0][2]<<" | "<<arrayr[0][3]<<" |";
    gotoxy(41,3);cout<<"-----------------   ";
    gotoxy(41,4);cout<<"| "<<arrayr[1][0]<<" | "<<arrayr[1][1]<<" | "<<arrayr[1][2]<<" | "<<arrayr[1][3]<<" |";
    gotoxy(41,5);cout<<"-----------------  ";
    gotoxy(41,6);cout<<"| "<<arrayr[2][0]<<" | "<<arrayr[2][1]<<" | "<<arrayr[2][2]<<" | "<<arrayr[2][3]<<" |";
    gotoxy(41,7);cout<<"-----------------   ";
    gotoxy(41,8);cout<<"| "<<arrayr[3][0]<<" | "<<arrayr[3][1]<<" | "<<arrayr[3][2]<<" | "<<arrayr[3][3]<<" |";
    gotoxy(41,9);cout<<"-----------------   ";

    cout<<"\nFIN DEL PROGRAMA.\n";
    system ("pause");
    return 0;
}
