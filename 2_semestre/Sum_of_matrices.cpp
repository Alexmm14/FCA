#include<iostream>
#include<windows.h>
#include<locale.h>
#include<cstdlib>
using namespace std;

void gotoxy(int x,int y){//Función para colocar el cursor en xy punto
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}

void matrizuno(int var){//Función que imprime la matriz
    int cont1,dibujos,lineas;
    for(lineas=0;lineas<17;lineas++){
            cout<<"-";
        }
        cout<<"\n";
    for(cont1=0;cont1<4;cont1++){
        for(dibujos=0;dibujos<4;dibujos++){
            cout<<"|";cout<<" ";cout<<var;cout<<" ";
            }
        cout<<"|\n";
        for(lineas=0;lineas<17;lineas++){
            cout<<"-";
        }
        cout<<"\n";
    }
}

int main (){
    int var=0;
    setlocale(LC_ALL,"spanish");
    int matriz [4][4];
    matrizuno(var);
    system ("pause");
    return 0;
}
