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

struct info_direccion{//Estructura de datos de dirección
	char calle[30];
	char colonia[30];
	char municipio[30];
	char numex[30];
	char numin[30];
	char cp[30];
};

struct empleado{//Estructura de datos generales
	char nombre[30];
    char apellidopat[30];
    char apellidomat[30];
    char email[30];
    char edad[30];
	struct info_direccion dir_empleado;
    char telefono[30];
}empleados[100];

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
            case 0:gotoxy(1,18);cout<<"FIN DEL PROGRAMA";break;
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
        gotoxy(1,18);cout<<"Digite los datos: "<<endl;
        fflush(stdin);
        cout<<"Digite el nombre: ";cin.getline(empleados[marca].nombre,30,'\n');
        fflush(stdin);
        cout<<"Digite el apellido paterno: ";cin.getline(empleados[marca].apellidopat,30,'\n');
        fflush(stdin);
        cout<<"Digite el apellido materno: ";cin.getline(empleados[marca].apellidomat,30,'\n');
        fflush(stdin);
        cout<<"Digite el email: ";cin.getline(empleados[marca].email,30,'\n');
        fflush(stdin);
        cout<<"Digita la edad: ";cin.getline(empleados[marca].edad,30,'\n');
        fflush(stdin);
        cout<<"Digite la calle donde vive: ";cin.getline(empleados[marca].dir_empleado.calle,30,'\n');
        fflush(stdin);
        cout<<"Digite la colonia donde vive: ";cin.getline(empleados[marca].dir_empleado.colonia,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el municipio donde vive: ";cin.getline(empleados[marca].dir_empleado.municipio,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el número exterior de su vivienda: ";cin.getline(empleados[marca].dir_empleado.numex,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el número interior de su vivienda: ";cin.getline(empleados[marca].dir_empleado.numin,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el código postal: ";cin.getline(empleados[marca].dir_empleado.cp,30,'\n');
        fflush(stdin);
        cout<<"Digite el teléfono: ";cin.getline(empleados[marca].telefono,30,'\n');
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
        cout<<"Nombre: "<<empleados[posicion].nombre<<endl;
        cout<<"Apellido paterno: "<<empleados[posicion].apellidopat<<endl;
        cout<<"Apellido materno: "<<empleados[posicion].apellidomat<<endl;
        cout<<"Email: "<<empleados[posicion].email<<endl;
        cout<<"Edad: "<<empleados[posicion].edad<<endl;
		cout<<"Calle: "<<empleados[posicion].dir_empleado.calle<<endl;
		cout<<"Colonia: "<<empleados[posicion].dir_empleado.colonia<<endl;
		cout<<"Municipio: "<<empleados[posicion].dir_empleado.municipio<<endl;
		cout<<"Número exterior: "<<empleados[posicion].dir_empleado.numex<<endl;
		cout<<"Número interior: "<<empleados[posicion].dir_empleado.numin<<endl;
		cout<<"Código postal: "<<empleados[posicion].dir_empleado.cp<<endl;
        cout<<"Teléfono: "<<empleados[posicion].telefono<<endl;
        cout<<"¿Desea dar de baja estos datos? s/n: ";cin>>decision;
        if(decision=='s'){
            if(posicion==99){
                struct empleado empleados [posicion]={0};
                marca-=1;
                cout<<"Datos dados de baja.";
                getch();
            }else{
                for(int i=posicion;i<100;i++){
                    empleados[i]=empleados[i+1];
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
        cout<<"Nombre: "<<empleados[posicion].nombre<<endl;
        cout<<"Apellido paterno: "<<empleados[posicion].apellidopat<<endl;
        cout<<"Apellido materno: "<<empleados[posicion].apellidomat<<endl;
        cout<<"Email: "<<empleados[posicion].email<<endl;
        cout<<"Edad: "<<empleados[posicion].edad<<endl;
		cout<<"Calle: "<<empleados[posicion].dir_empleado.calle<<endl;
		cout<<"Colonia: "<<empleados[posicion].dir_empleado.colonia<<endl;
		cout<<"Municipio: "<<empleados[posicion].dir_empleado.municipio<<endl;
		cout<<"Número exterior: "<<empleados[posicion].dir_empleado.numex<<endl;
		cout<<"Número interior: "<<empleados[posicion].dir_empleado.numin<<endl;
		cout<<"Código postal: "<<empleados[posicion].dir_empleado.cp<<endl;
        cout<<"Teléfono: "<<empleados[posicion].telefono<<endl;                                            
        cout<<"\n\nDigite los nuevos datos"<<endl;
        fflush(stdin);
        cout<<"Digite el nombre: ";cin.getline(empleados[posicion].nombre,30,'\n');
        fflush(stdin);
        cout<<"Digite el apellido paterno: ";cin.getline(empleados[posicion].apellidopat,30,'\n');
        fflush(stdin);
        cout<<"Digite el apellido materno: ";cin.getline(empleados[posicion].apellidomat,30,'\n');
        fflush(stdin);
        cout<<"Digite el email: ";cin.getline(empleados[posicion].email,30,'\n');
        fflush(stdin);
        cout<<"Digite la edad: ";cin.getline(empleados[posicion].edad,30,'\n');
        fflush(stdin);
        cout<<"Digite la calle donde vive: ";cin.getline(empleados[posicion].dir_empleado.calle,30,'\n');
        fflush(stdin);
        cout<<"Digite la colonia donde vive: ";cin.getline(empleados[posicion].dir_empleado.colonia,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el municipio donde vive: ";cin.getline(empleados[posicion].dir_empleado.colonia,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el número exterior de su vivienda: ";cin.getline(empleados[posicion].dir_empleado.numex,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el número interior de su vivienda: ";cin.getline(empleados[posicion].dir_empleado.numin,30,'\n'); 
        fflush(stdin);
        cout<<"Digite el código postal: ";cin.getline(empleados[posicion].dir_empleado.cp,30,'\n');
        fflush(stdin);
        cout<<"Digite el teléfono: ";cin.getline(empleados[posicion].telefono,30,'\n');
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
        cout<<"Nombre: "<<empleados[posicion].nombre<<endl;
        cout<<"Apellido paterno: "<<empleados[posicion].apellidopat<<endl;
        cout<<"Apellido materno: "<<empleados[posicion].apellidomat<<endl;
        cout<<"Email: "<<empleados[posicion].email<<endl;
        cout<<"Edad: "<<empleados[posicion].edad<<endl;
		cout<<"Calle: "<<empleados[posicion].dir_empleado.calle<<endl;
		cout<<"Colonia: "<<empleados[posicion].dir_empleado.colonia<<endl;
		cout<<"Municipio: "<<empleados[posicion].dir_empleado.municipio<<endl;
		cout<<"Número exterior: "<<empleados[posicion].dir_empleado.numex<<endl;
		cout<<"Número interior: "<<empleados[posicion].dir_empleado.numin<<endl;
		cout<<"Código postal: "<<empleados[posicion].dir_empleado.cp<<endl;
        cout<<"Teléfono: "<<empleados[posicion].telefono<<endl;
        getch();
    }
}

void despliegues(){//PREGUNTAR EL ORDEN DE DESPLIEGUE
    gotoxy(1,18);cout<<"Datos de pila:\n";
    for(int i=0;i<99;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Apellido paterno: "<<empleados[i].apellidopat<<endl;
        cout<<"Apellido materno: "<<empleados[i].apellidomat<<endl;
        cout<<"Email: "<<empleados[i].email<<endl;
        cout<<"Edad: "<<empleados[i].edad<<endl;
		cout<<"Calle: "<<empleados[i].dir_empleado.calle<<endl;
		cout<<"Colonia: "<<empleados[i].dir_empleado.colonia<<endl;
		cout<<"Municipio: "<<empleados[i].dir_empleado.municipio<<endl;
		cout<<"Número exterior: "<<empleados[i].dir_empleado.numex<<endl;
		cout<<"Número interior: "<<empleados[i].dir_empleado.numin<<endl;
		cout<<"Código postal: "<<empleados[i].dir_empleado.cp<<endl;
        cout<<"Teléfono: "<<empleados[i].telefono<<endl;
        cout<<"\n\n\n";
		fflush(stdin);
    } 
    getch();
}

void ordenes(){
    
}