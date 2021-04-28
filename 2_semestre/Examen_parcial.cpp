#include<iostream>
#include<windows.h>
#include<conio.h>
#include<locale.h>
using namespace std;

int array[100],marca=0;//Arreglo y variable global

void gotoxy(int x,int y){//Función para usar gotoxy
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}

void menu();//Declaración de funciones
void altas();
void bajas();
void cambios();
void consultas();
void despliegues();
void ordenes();

int main(){//Función principal
    setlocale(LC_ALL,"spanish");
    int opcion;
    do{
        menu();
        gotoxy(26,15);cin>>opcion;
        switch (opcion){
            case 1:altas();break;
            case 2:bajas();break;
            case 3:cambios();break;
            case 4:consultas();break;
            case 5:despliegues();break;
            //case 6:ordenes();break;
            case 0:break;
            default:gotoxy(1,18);cout<<"Opción incorrecta";break;
        }
    }while(opcion>0);
    return 0;
}

void menu(){//Función para pintar el menú de opciones
    system("cls");
    gotoxy(1,1);cout<< "****************************************";
    gotoxy(1,2);cout<< "*                 MENÚ                 *";
    gotoxy(1,3);cout<< "****************************************";
    gotoxy(1,4);cout<< "*     OPCIONES                         *";
    gotoxy(1,5);cout<< "*                                      *";
    gotoxy(1,6);cout<< "*     1.- Dar de alta                  *";
    gotoxy(1,7);cout<< "*     2.- Dar de baja                  *";
    gotoxy(1,8);cout<< "*     3.- Cambiar                      *";
    gotoxy(1,9);cout<< "*     4.- Consultar                    *";
    gotoxy(1,10);cout<<"*     5.- Desplegar                    *";
    gotoxy(1,11);cout<<"*     6.- Ordenar                      *";
    gotoxy(1,12);cout<<"*     0.- Salir                        *";
    gotoxy(1,13);cout<<"*                                      *";
    gotoxy(1,14);cout<<"****************************************";
    gotoxy(1,15);cout<<"*     Digite una opción:               *";
    gotoxy(1,16);cout<<"****************************************";
}

void altas(){//Función para crear datos
    if(marca>99){
        gotoxy(1,18);cout<<"La pila está llena."<<endl;cout<<"Intente otra opción."<<endl;
        getch();
    }else{
        gotoxy(1,18);cout<<"Digite el valor: ";cin>>array[marca];
        marca++;
    }
}

void bajas(){//Función para eliminar datos
    int posicion;
    char decision;
    gotoxy(1,18);cout<<"¿Qué posición quiere dar de baja? ";cin>>posicion;
    if(posicion>99){
        gotoxy(1,19);cout<<"Posición inválida, digite otra posición.";
        getch();
    }else{
        if(array[posicion]==0){
            gotoxy(1,19);cout<<"Esta posición no tiene datos.";
            getch();
        }else{
            gotoxy(1,19);cout<<"Los datos de la posición "<<posicion<<" son: "<<array[posicion];
            gotoxy(1,20);cout<<"Desea dar de baja estos datos s/n: ";cin>>decision;
            if(decision=='s'){
                if(posicion==99){
                    array[99]=0;
                    marca-=1;
                    gotoxy(1,21);cout<<"Datos dados de baja.";
                    getch();
                }else{
                    for(int i=posicion;i<10;i++){
                        array[i]=array[i+1];
                    }
                    array[99]=0;
                    marca-=1;
                    gotoxy(1,21);cout<<"Datos dados de baja";
                    getch();
                }
            }
        }
    }
}

void cambios(){//Función para cambiar datos
    int posicion;
    gotoxy(1,18);cout<<"¿Qué posición quiere cambiar? ";cin>>posicion;
    if(posicion>99){
        gotoxy(1,19);cout<<"Posición inválida, digite otra posición.";
        getch();
    }else{
        if(array[posicion]==0){
            gotoxy(1,18);cout<<"Esta posición no tiene datos";
            getch();
        }else{
            gotoxy(1,19);cout<<"Los datos de la posición "<<posicion<<" son: "<<array[posicion];
            gotoxy(1,20);cout<<"Digite los nuevos datos: ";cin>>array[posicion];
            gotoxy(1,21);cout<<"Datos cambiados.";
            getch();
        }
    }
}

void consultas(){//Función para consultar una posición
    int posicion;
    gotoxy(1,18);cout<<"¿Qué posición quiere consultar? ";cin>>posicion;
    if(posicion>99){
        gotoxy(1,19);cout<<"Posición inválida, digite otra posición.";
        getch();
    }else{
        if(array[posicion]==0){
            gotoxy(1,19);cout<<"Esta posición no tiene datos.";
            getch();
        }else{
            gotoxy(1,19);cout<<"Los datos de la posición "<<posicion<<" son: "<<array[posicion];
            getch();
        }
    }
}

void despliegues(){//Función para desplegar toda la pila
    gotoxy(1,18);cout<<"Datos de pila:\n";
    for(int i=0;i<100;i++){
        gotoxy(1,140-i);cout<<array[i]<<"\n";
    }
    getch();
}