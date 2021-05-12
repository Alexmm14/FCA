#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<fstream>
using namespace std;

void escribir();//Declaración de funciones
void leer();
void aniadir();

int main (){//Función principal
    setlocale(LC_ALL,"spanish");
    int opcion;
    do{
        system("cls");
        cout<<"Opciones"<<endl;
        cout<<"1.- Escribir"<<endl;
        cout<<"2.- Leer"<<endl;
        cout<<"3.- Añadir"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Digite una opción: ";cin>>opcion;
    
        switch (opcion){
            case 1:escribir();break;
            case 2:leer();break;
            case 3:aniadir();break;
            case 0:cout<<"Fin del programa. ";break;
            default:cout<<"Opción inválida. ";getch();break;
        }
    }while(opcion!=0);
    return 0;
}

void escribir(){//Función para escribir
    ofstream archivo;
    string texto;

    archivo.open("archivo.txt",ios::out);//Abriendo el archivo el archivo modo escritura
    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    archivo<<"Hola mundo"<<endl;
    archivo.close();
}

void leer(){//Función para leer
    ifstream archivo;
    string texto;

    archivo.open("archivo.txt",ios::in);//Abriendo el archivo modo lectura
    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    archivo.close();
}

void aniadir(){//Función para añadir
    ofstream archivo;
    string texto;

    archivo.open("archivo.txt",ios::app);//Abriendo el archivo en modo añadir
    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }
    cout<<"Digite el texto que dese añadir: ";getline(cin,texto);
    archivo<<texto<<endl;
    archivo.close();
}