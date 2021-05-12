#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;

void escribir ();//Función para escribir en un block de notas

int main (){
    escribir ();
    getch();
    return 0;
}

void escribir (){
    ofstream archivo;
    archivo.open("Prueba.txt"),ios::out;//Creando el archivo el archivo
    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    archivo<<"Mi nombre es Martín";
    archivo.close();
}