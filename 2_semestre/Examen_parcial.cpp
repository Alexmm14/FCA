#include<iostream>
#include<windows.h>
#include<conio.h>
#include<locale.h>
using namespace std;

int marca=0;//Variable global

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

struct direccion{//Estructura de datos de dirección
	string calle,colonia,municipio,cp;
    int numex,numin;
};

struct persona{//Estructura de datos generales
	string nombre,apellidopat,apellidomat,email,edad,telefono;
	struct direccion dir;
};
persona e[100];

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
            case 6:ordenes();break;
            case 0:gotoxy(7,18);cout<<"FIN DEL PROGRAMA\n"<<endl;break;
            default:gotoxy(7,18);cout<<"Opción incorrecta\n"<<endl;getch();break;
        }
    }while(opcion!=0);
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
        gotoxy(1,18);cout<<"Digite los datos: "<<endl;fflush(stdin);
        cout<<"Digite el nombre: ";cin>>e[marca].nombre;fflush(stdin);
        cout<<"Digite el apellido paterno: ";cin>>e[marca].apellidopat;fflush(stdin);
        cout<<"Digite el apellido materno: ";cin>>e[marca].apellidomat;fflush(stdin);
        cout<<"Digite el email: ";cin>>e[marca].email;fflush(stdin);
        cout<<"Digita la edad: ";cin>>e[marca].edad;fflush(stdin);
        cout<<"Digite la calle donde vive: ";cin>>e[marca].dir.calle;fflush(stdin);
        cout<<"Digite la colonia donde vive: ";cin>>e[marca].dir.colonia;fflush(stdin);
        cout<<"Digite el municipio donde vive: ";cin>>e[marca].dir.municipio;fflush(stdin);
        cout<<"Digite el número exterior de su vivienda: ";cin>>e[marca].dir.numex;fflush(stdin);
        cout<<"Digite el número interior de su vivienda: ";cin>>e[marca].dir.numin;fflush(stdin);
        cout<<"Digite el código postal: ";cin>>e[marca].dir.cp;fflush(stdin);
        cout<<"Digite el teléfono: ";cin>>e[marca].telefono;
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
        gotoxy(1,19);cout<<"Los datos de la posición "<<posicion<<" son: \n";
        cout<<"Nombre: "<<e[posicion].nombre<<endl;
        cout<<"Apellido paterno: "<<e[posicion].apellidopat<<endl;
        cout<<"Apellido materno: "<<e[posicion].apellidomat<<endl;
        cout<<"Email: "<<e[posicion].email<<endl;
        cout<<"Edad: "<<e[posicion].edad<<endl;
		cout<<"Calle: "<<e[posicion].dir.calle<<endl;
		cout<<"Colonia: "<<e[posicion].dir.colonia<<endl;
		cout<<"Municipio: "<<e[posicion].dir.municipio<<endl;
		cout<<"Número exterior: "<<e[posicion].dir.numex<<endl;
		cout<<"Número interior: "<<e[posicion].dir.numin<<endl;
		cout<<"Código postal: "<<e[posicion].dir.cp<<endl;
        cout<<"Teléfono: "<<e[posicion].telefono<<endl;
        cout<<"¿Desea dar de baja estos datos? s/n: ";cin>>decision;
        if(decision=='s'){
            if(posicion==99){
                struct persona e[posicion]={0};
                marca-=1;
                cout<<"Datos dados de baja.";
                getch();
            }else{
                for(int i=posicion;i<100;i++){
                    e[i]=e[i+1];
                }
                marca-=1;
                cout<<"Datos dados de baja";
                getch();
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
        gotoxy(1,19);cout<<"Los datos de la posición "<<posicion<<" son: \n";
        cout<<"Nombre: "<<e[posicion].nombre<<endl;
        cout<<"Apellido paterno: "<<e[posicion].apellidopat<<endl;
        cout<<"Apellido materno: "<<e[posicion].apellidomat<<endl;
        cout<<"Email: "<<e[posicion].email<<endl;
        cout<<"Edad: "<<e[posicion].edad<<endl;
		cout<<"Calle: "<<e[posicion].dir.calle<<endl;
		cout<<"Colonia: "<<e[posicion].dir.colonia<<endl;
		cout<<"Municipio: "<<e[posicion].dir.municipio<<endl;
		cout<<"Número exterior: "<<e[posicion].dir.numex<<endl;
		cout<<"Número interior: "<<e[posicion].dir.numin<<endl;
		cout<<"Código postal: "<<e[posicion].dir.cp<<endl;
        cout<<"Teléfono: "<<e[posicion].telefono<<endl;

        cout<<"\n\nDigite los nuevos datos"<<endl;fflush(stdin);
        cout<<"Digite el nombre: ";cin>>e[posicion].nombre;fflush(stdin);
        cout<<"Digite el apellido paterno: ";cin>>e[posicion].apellidopat;fflush(stdin);
        cout<<"Digite el apellido materno: ";cin>>e[posicion].apellidomat;fflush(stdin);
        cout<<"Digite el email: ";cin>>e[posicion].email;fflush(stdin);
        cout<<"Digite la edad: ";cin>>e[posicion].edad;fflush(stdin);
        cout<<"Digite la calle donde vive: ";cin>>e[posicion].dir.calle;fflush(stdin);
        cout<<"Digite la colonia donde vive: ";cin>>e[posicion].dir.colonia;fflush(stdin);
        cout<<"Digite el municipio donde vive: ";cin>>e[posicion].dir.colonia;fflush(stdin);
        cout<<"Digite el número exterior de su vivienda: ";cin>>e[posicion].dir.numex;fflush(stdin);
        cout<<"Digite el número interior de su vivienda: ";cin>>e[posicion].dir.numin;fflush(stdin);
        cout<<"Digite el código postal: ";cin>>e[posicion].dir.cp;fflush(stdin);
        cout<<"Digite el teléfono: ";cin>>e[posicion].telefono;
        marca++;
        cout<<"Datos cambiados.";
        getch();
    }
}

void consultas(){//Función para consultar una posición
    int posicion;
    gotoxy(1,18);cout<<"¿Qué posición quiere consultar? ";cin>>posicion;
    if(posicion>99){
        gotoxy(1,19);cout<<"Posición inválida, digite otra posición.";
        getch();
    }else{
        gotoxy(1,19);cout<<"Los datos de la posición "<<posicion<<" son: \n";
        cout<<"Nombre: "<<e[posicion].nombre<<endl;
        cout<<"Apellido paterno: "<<e[posicion].apellidopat<<endl;
        cout<<"Apellido materno: "<<e[posicion].apellidomat<<endl;
        cout<<"Email: "<<e[posicion].email<<endl;
        cout<<"Edad: "<<e[posicion].edad<<endl;
		cout<<"Calle: "<<e[posicion].dir.calle<<endl;
		cout<<"Colonia: "<<e[posicion].dir.colonia<<endl;
		cout<<"Municipio: "<<e[posicion].dir.municipio<<endl;
		cout<<"Número exterior: "<<e[posicion].dir.numex<<endl;
		cout<<"Número interior: "<<e[posicion].dir.numin<<endl;
		cout<<"Código postal: "<<e[posicion].dir.cp<<endl;
        cout<<"Teléfono: "<<e[posicion].telefono<<endl;
        getch();
    }
}

void despliegues(){//PREGUNTAR POR EL LÍMITE DE IMPRESIÓN
    int contador=100;
    gotoxy(1,18);cout<<"Datos de pila:\n";
    for(int i=99;i>=0;i--){
        cout<<contador<<".- Nombre: "<<e[i].nombre<<endl;
        cout<<"    Apellido paterno: "<<e[i].apellidopat<<endl;
        cout<<"    Apellido materno: "<<e[i].apellidomat<<endl;
        cout<<"    Email: "<<e[i].email<<endl;
        cout<<"    Edad: "<<e[i].edad<<endl;
        cout<<"    Calle: "<<e[i].dir.calle<<endl;
        cout<<"    Colonia: "<<e[i].dir.colonia<<endl;
        cout<<"    Municipio: "<<e[i].dir.municipio<<endl;
        cout<<"    Numero exterior: "<<e[i].dir.numex<<endl;
        cout<<"    Numero interior: "<<e[i].dir.numin<<endl;
        cout<<"    Código postal: "<<e[i].dir.cp<<endl;
        cout<<"    Teléfono: "<<e[i].telefono<<endl;
        contador-=1;
        cout<<"\n";
    } 
    getch();
}

void ordenes(){//PREGUNTAR SI ESTÁ BIEN EL ORDEN Y EL LÍMITE
    int i,j,contador=100;
    persona tempo;
    cout<<"\n\n";
    for(i=0;i<100;i++){
        for(j=0;j<99;j++){
            if(e[j].apellidopat > e[j+1].apellidopat){
                tempo=e[j];
                e[j]=e[j+1];
                e[j+1]=tempo;
            }
        }
    }

    for(i=0;i<100;i++){
        cout<<contador<<".- Nombre: "<<e[i].nombre<<endl;
        cout<<"    Apellido paterno: "<<e[i].apellidopat<<endl;
        cout<<"    Apellido materno: "<<e[i].apellidomat<<endl;
        cout<<"    Email: "<<e[i].email<<endl;
        cout<<"    Edad: "<<e[i].edad<<endl;
        cout<<"    Calle: "<<e[i].dir.calle<<endl;
        cout<<"    Colonia: "<<e[i].dir.colonia<<endl;
        cout<<"    Municipio: "<<e[i].dir.municipio<<endl;
        cout<<"    Numero exterior: "<<e[i].dir.numex<<endl;
        cout<<"    Numero interior: "<<e[i].dir.numin<<endl;
        cout<<"    Código postal: "<<e[i].dir.cp<<endl;
        cout<<"    Teléfono: "<<e[i].telefono<<endl;
        contador-=1;
        cout<<"\n";
    }
    getch();
}
