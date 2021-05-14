#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<cstdlib>
#include <string>
using namespace std;

int marca=0;//Variable global

void gotoxy(int x,int y){//Declaración de funciones
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}
void vinnombre();
void vinapepat();
void vinapemat();
void vinemail();
void vinedad();
void vincalle();
void vincolonia();
void vinmunicipio();
void vinnumex();
void vinnumin();
void vincp();
void vintelefono();
void vinlinea();
void menu();
void altas();
void bajas();
void cambios();
void consultas();
void despliegues();
void ordenes();

struct direccion{//Estructura de datos de dirección
	string calle,colonia,municipio,numex,numin,cp;
};

struct persona{//Estructura de datos generales
	string nombre,apellidopat,apellidomat,email,edad,telefono,linea;
	struct direccion dir;
};
persona e[100];

int main(){//Función principal
    int opcion;
    do{
        vinnombre();
        vinapepat();
        vinapemat();
        vinemail();
        vinedad();
        vincalle();
        vincolonia();
        vinmunicipio();
        vinnumex();
        vinnumin();
        vincp();
        vintelefono();
        vinlinea();
        menu();
        gotoxy(27,15);cin>>opcion;
        switch (opcion){
            case 1:altas();break;
            case 2:bajas();break;
            case 3:cambios();break;
            case 4:consultas();break;
            case 5:despliegues();break;
            case 6:ordenes();break;
            case 0:gotoxy(10,18);cout<<"FIN DEL PROGRAMA\n"<<endl;break;
            default:gotoxy(10,18);cout<<"Opcion invalida\n"<<endl;getch();break;
        }
    }while(opcion!=0);
    return 0;
}

void vinnombre(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=0,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].nombre)){
                if(i==j){
                cout<<e[k].nombre<<endl;
                k++;     
                j+=13;
            }
            i++;
        }
    }
    marca=(i/13);
}

void vinapepat(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=1,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].apellidopat)){
                if(i==j){
                cout<<e[k].apellidopat<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinapemat(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=2,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].apellidomat)){
                if(i==j){
                cout<<e[k].apellidomat<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinemail(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=3,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].email)){
                if(i==j){
                cout<<e[k].email<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinedad(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=4,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].edad)){
                if(i==j){
                cout<<e[k].edad<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vincalle(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=5,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].dir.calle)){
                if(i==j){
                cout<<e[k].dir.calle<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vincolonia(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=6,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].dir.colonia)){
                if(i==j){
                cout<<e[k].dir.colonia<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinmunicipio(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=7,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].dir.municipio)){
                if(i==j){
                cout<<e[k].dir.municipio<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinnumex(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=8,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].dir.numex)){
                if(i==j){
                cout<<e[k].dir.numex<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinnumin(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=9,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].dir.numin)){
                if(i==j){
                cout<<e[k].dir.numin<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vincp(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=10,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].dir.cp)){
                if(i==j){
                cout<<e[k].dir.cp<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vintelefono(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=11,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].telefono)){
                if(i==j){
                cout<<e[k].telefono<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void vinlinea(){//Función que vincula el arreglo con la base de datos
    ifstream archivo("archivo.txt");
    int i=0,j=12,k=0;
    for(int contador=0;contador<200;contador++){
        while(getline(archivo, e[k].linea)){
                if(i==j){
                cout<<e[k].linea<<endl;
                k++;
                j+=13;
            }
            i++;
        }
    }
}

void menu(){//Función para pintar el menú de opciones
    system("cls");
    gotoxy(1,1);cout<< "****************************************";
    gotoxy(1,2);cout<< "*                 MENU                 *";
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
    gotoxy(1,15);cout<<"*     Digite una opcion:               *";
    gotoxy(1,16);cout<<"****************************************";
}

void altas(){//Función para añadir una colección de datos
    ofstream archivo;
    string texto;

    gotoxy(0,18);cout<<"CAPTURA DE DATOS"<<endl;fflush(stdin);//Captura de datos
    cout<<"Digite el nombre: ";cin>>e[marca].nombre;fflush(stdin);
    cout<<"Digite el apellido paterno: ";cin>>e[marca].apellidopat;fflush(stdin);
    cout<<"Digite el apellido materno: ";cin>>e[marca].apellidomat;fflush(stdin);
    cout<<"Digite el email: ";cin>>e[marca].email;fflush(stdin);
    cout<<"Digita la edad: ";cin>>e[marca].edad;fflush(stdin);
    cout<<"Digite la calle donde vive: ";cin>>e[marca].dir.calle;fflush(stdin);
    cout<<"Digite la colonia donde vive: ";cin>>e[marca].dir.colonia;fflush(stdin);
    cout<<"Digite el municipio donde vive: ";cin>>e[marca].dir.municipio;fflush(stdin);
    cout<<"Digite el numero exterior de su vivienda: ";cin>>e[marca].dir.numex;fflush(stdin);
    cout<<"Digite el numero interior de su vivienda: ";cin>>e[marca].dir.numin;fflush(stdin);
    cout<<"Digite el codigo postal: ";cin>>e[marca].dir.cp;fflush(stdin);
    cout<<"Digite el telefono: ";cin>>e[marca].telefono;

    archivo.open("archivo.txt",ios::app);//Apertura de base de datos en forma de escritura
    if(archivo.fail()){
        cout<<"Error al guardar los datos.";
        exit(1);
    }

    archivo<<"Nombre: "<<e[marca].nombre<<endl;//Se guardan los nuevos datos
    archivo<<"Apellido paterno: "<<e[marca].apellidopat<<endl;
    archivo<<"Apellido materno: "<<e[marca].apellidomat<<endl;
    archivo<<"Email: "<<e[marca].email<<endl;
    archivo<<"Edad: "<<e[marca].edad<<endl;
    archivo<<"Calle: "<<e[marca].dir.calle<<endl;
    archivo<<"Colonia: "<<e[marca].dir.colonia<<endl;
    archivo<<"Municipio: "<<e[marca].dir.municipio<<endl;
    archivo<<"Numero exterior: "<<e[marca].dir.numex<<endl;
    archivo<<"Numero interior: "<<e[marca].dir.numin<<endl;
    archivo<<"Codigo postal: "<<e[marca].dir.cp<<endl;
    archivo<<"Telefono: "<<e[marca].telefono<<endl;
    archivo<<"------------------------------"<<endl;

    archivo.close();
    cout<<"\nDatos guardados."<<endl;
    cout<<"ENTER para volver al menu principal. ";
    getch();
}

void bajas(){//Función para eliminar una colección de datos
    int posicion,i;
    char decision;
    ofstream archivo;

    gotoxy(0,18);cout<<"Que posicion quiere dar de baja? ";cin>>posicion;
    if(posicion>99){
        cout<<"Posicion invalida, digite otra posicion. ";//Caso de excepción
        getch();
    }else{
        cout<<"Los datos de la posicion "<<posicion<<" son: \n";//Datos previamente guardados
        cout<<e[posicion].nombre<<endl;
        cout<<e[posicion].apellidopat<<endl;
        cout<<e[posicion].apellidomat<<endl;
        cout<<e[posicion].email<<endl;
        cout<<e[posicion].edad<<endl;
		cout<<e[posicion].dir.calle<<endl;
		cout<<e[posicion].dir.colonia<<endl;
		cout<<e[posicion].dir.municipio<<endl;
		cout<<e[posicion].dir.numex<<endl;
		cout<<e[posicion].dir.numin<<endl;
		cout<<e[posicion].dir.cp<<endl;
        cout<<e[posicion].telefono<<endl;
        cout<<e[posicion].linea<<endl;

        cout<<"\nSeguro que quiere eliminar estos datos s/n?: ";cin>>decision;//Captura de decision
        if(decision!='s'){
            cout<<"No se borraron los datos de la posicion "<<posicion<<" ";//Caso de negación
            getch();
        }else{
            for(posicion;posicion<101-posicion;posicion++){
                e[posicion].nombre=e[posicion+1].nombre;
                e[posicion].apellidopat=e[posicion+1].apellidopat;
                e[posicion].apellidomat=e[posicion+1].apellidomat;
                e[posicion].email=e[posicion+1].email;
                e[posicion].edad=e[posicion+1].edad;
                e[posicion].dir.calle=e[posicion+1].dir.calle;
                e[posicion].dir.colonia=e[posicion+1].dir.colonia;
                e[posicion].dir.municipio=e[posicion+1].dir.municipio;
                e[posicion].dir.numex=e[posicion+1].dir.numex;
                e[posicion].dir.numin=e[posicion+1].dir.numin;
                e[posicion].dir.cp=e[posicion+1].dir.cp;
                e[posicion].telefono=e[posicion+1].telefono;
                e[posicion].linea=e[posicion+1].linea;
            }

            archivo.open("archivo.txt",ios::out);//Apertura de base de datos en modo reescritura
            if(archivo.fail()){
                cout<<"Error al guardar los cambios.";
                exit(1);
            }

            for(i=0;i<marca-1;i++){//Se guardan los nuevos datros
                archivo<<e[i].nombre<<endl;
                archivo<<e[i].apellidopat<<endl;
                archivo<<e[i].apellidomat<<endl;
                archivo<<e[i].email<<endl;
                archivo<<e[i].edad<<endl;
                archivo<<e[i].dir.calle<<endl;
                archivo<<e[i].dir.colonia<<endl;
                archivo<<e[i].dir.municipio<<endl;
                archivo<<e[i].dir.numex<<endl;
                archivo<<e[i].dir.numin<<endl;
                archivo<<e[i].dir.cp<<endl;
                archivo<<e[i].telefono<<endl;
                archivo<<e[i].linea<<endl;
            }

            archivo.close();
            cout<<"\nDatos eliminados."<<endl;
            cout<<"ENTER para volver al menu principal. ";
            getch();
        }
    }
}

void cambios(){//Función para cambiar una coleccion de datos
    int posicion,decision_int;
    char decision_char;
    ofstream archivo;
    gotoxy(1,18);cout<<"Que posicion quiere cambiar? ";cin>>posicion;
    if(posicion>99){
        cout<<"Posicion invalida. ";
        getch();
    }else{
        cout<<"Quiere cambiar todos los datos de la posicion "<<posicion<<" s/n? ";cin>>decision_char;//Cambio de toda la colección
        if(decision_char== 's'){
            cout<<"Los datos de la posicion "<<posicion<<" son: \n";//Despliegue de datos previamente guardados
            cout<<e[posicion].nombre<<endl;
            cout<<e[posicion].apellidopat<<endl;
            cout<<e[posicion].apellidomat<<endl;
            cout<<e[posicion].email<<endl;
            cout<<e[posicion].edad<<endl;
		    cout<<e[posicion].dir.calle<<endl;
		    cout<<e[posicion].dir.colonia<<endl;
		    cout<<e[posicion].dir.municipio<<endl;
		    cout<<e[posicion].dir.numex<<endl;
		    cout<<e[posicion].dir.numin<<endl;
		    cout<<e[posicion].dir.cp<<endl;
            cout<<e[posicion].telefono<<endl;
            cout<<e[posicion].linea<<endl;

            cout<<"\nCAPTURA DE LOS NUEVOS DATOS"<<endl;fflush(stdin);//Captura de nuevos datos
            cout<<"Digite el nombre: ";cin>>e[posicion].nombre;fflush(stdin);
            cout<<"Digite el apellido paterno: ";cin>>e[posicion].apellidopat;fflush(stdin);
            cout<<"Digite el apellido materno: ";cin>>e[posicion].apellidomat;fflush(stdin);
            cout<<"Digite el email: ";cin>>e[posicion].email;fflush(stdin);
            cout<<"Digite la edad: ";cin>>e[posicion].edad;fflush(stdin);
            cout<<"Digite la calle donde vive: ";cin>>e[posicion].dir.calle;fflush(stdin);
            cout<<"Digite la colonia donde vive: ";cin>>e[posicion].dir.colonia;fflush(stdin);
            cout<<"Digite el municipio donde vive: ";cin>>e[posicion].dir.municipio;fflush(stdin);
            cout<<"Digite el numero exterior de su vivienda: ";cin>>e[posicion].dir.numex;fflush(stdin);
            cout<<"Digite el numero interior de su vivienda: ";cin>>e[posicion].dir.numin;fflush(stdin);
            cout<<"Digite el codigo postal: ";cin>>e[posicion].dir.cp;fflush(stdin);
            cout<<"Digite el telefono: ";cin>>e[posicion].telefono;

            archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
            if(archivo.fail()){
                cout<<"Error al guardar los cambios. ";
                exit(1);
            }

            for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                archivo<<e[i].nombre<<endl;
                archivo<<e[i].apellidopat<<endl;
                archivo<<e[i].apellidomat<<endl;
                archivo<<e[i].email<<endl;
                archivo<<e[i].edad<<endl;
                archivo<<e[i].dir.calle<<endl;
                archivo<<e[i].dir.colonia<<endl;
                archivo<<e[i].dir.municipio<<endl;
                archivo<<e[i].dir.numex<<endl;
                archivo<<e[i].dir.numin<<endl;
                archivo<<e[i].dir.cp<<endl;
                archivo<<e[i].telefono<<endl;
                archivo<<e[i].linea<<endl;
            }

            archivo<<"Nombre: "<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
            archivo<<"Apellido paterno: "<<e[posicion].apellidopat<<endl;
            archivo<<"Apellido materno: "<<e[posicion].apellidomat<<endl;
            archivo<<"Email: "<<e[posicion].email<<endl;
            archivo<<"Edad: "<<e[posicion].edad<<endl;
            archivo<<"Calle: "<<e[posicion].dir.calle<<endl;
            archivo<<"Colonia: "<<e[posicion].dir.colonia<<endl;
            archivo<<"Municipio: "<<e[posicion].dir.municipio<<endl;
            archivo<<"Numero exterior: "<<e[posicion].dir.numex<<endl;
            archivo<<"Numero interior: "<<e[posicion].dir.numin<<endl;
            archivo<<"Codigo postal: "<<e[posicion].dir.cp<<endl;
            archivo<<"Telefono: "<<e[posicion].telefono<<endl;
            archivo<<e[posicion].linea<<endl;
            
            for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                archivo<<e[i].nombre<<endl;
                archivo<<e[i].apellidopat<<endl;
                archivo<<e[i].apellidomat<<endl;
                archivo<<e[i].email<<endl;
                archivo<<e[i].edad<<endl;
                archivo<<e[i].dir.calle<<endl;
                archivo<<e[i].dir.colonia<<endl;
                archivo<<e[i].dir.municipio<<endl;
                archivo<<e[i].dir.numex<<endl;
                archivo<<e[i].dir.numin<<endl;
                archivo<<e[i].dir.cp<<endl;
                archivo<<e[i].telefono<<endl;
                archivo<<e[i].linea<<endl;
            }

            archivo.close();
            cout<<"\nDatos cambiados."<<endl;
            cout<<"ENTER para volver al menu principal. ";
            getch();
        }else{//Cambio de sólo un dato
            cout<<"\nMENU DE OPCIONES"<<endl;
            cout<<"1.- "<<e[posicion].nombre<<endl;
            cout<<"2.- "<<e[posicion].apellidopat<<endl;
            cout<<"3.- "<<e[posicion].apellidomat<<endl;
            cout<<"4.- "<<e[posicion].email<<endl;
            cout<<"5.- "<<e[posicion].edad<<endl;
		    cout<<"6.- "<<e[posicion].dir.calle<<endl;
		    cout<<"7.- "<<e[posicion].dir.colonia<<endl;
		    cout<<"8.- "<<e[posicion].dir.municipio<<endl;
		    cout<<"9.- "<<e[posicion].dir.numex<<endl;
		    cout<<"10.- "<<e[posicion].dir.numin<<endl;
		    cout<<"11.- "<<e[posicion].dir.cp<<endl;
            cout<<"12.- "<<e[posicion].telefono<<endl;
            cout<<"\nDigite una opcion: ";cin>>decision_int;

            switch (decision_int){//Captura del nuevo dato
                case 1:cout<<"Digite el nuevo nombre: ";cin>>e[posicion].nombre;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<"Nombre: "<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 2:cout<<"Digite el nuevo apellido paterno: ";cin>>e[posicion].apellidopat;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<"Apellido parerno: "<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 3:cout<<"Digite el nuevo apellido materno: ";cin>>e[posicion].apellidomat;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<"Apellido materno: "<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 4:cout<<"Digite el nuevo email: ";cin>>e[posicion].email;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<"Email: "<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado.";
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 5:cout<<"Digite la nueva edad: ";cin>>e[posicion].edad;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<"Edad: "<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 6:cout<<"Digite la nueva calle: ";cin>>e[posicion].dir.calle;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<"Calle: "<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 7:cout<<"Digite la nueva colonia: ";cin>>e[posicion].dir.colonia;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<"Colonia: "<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 8:cout<<"Digite el nuevo municipio: ";cin>>e[posicion].dir.municipio;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<"Municipio: "<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 9:cout<<"Digite el nuevo numero exterior: ";cin>>e[posicion].dir.numex;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<"Numero exterior: "<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 10:cout<<"Digite el nuevo numero interior: ";cin>>e[posicion].dir.numin;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<"Numero interior: "<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 11:cout<<"Digite el nuevo codigo postal: ";cin>>e[posicion].dir.cp;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<"Codigo postal: "<<e[posicion].dir.cp<<endl;
                archivo<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                case 12:cout<<"Digite el nuevo telefono: ";cin>>e[posicion].telefono;
                archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
                if(archivo.fail()){
                    cout<<"Error al guardar los cambios. ";
                }

                for(int i=0;i<posicion;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }

                archivo<<e[posicion].nombre<<endl;//Se guardan los nuevos datos
                archivo<<e[posicion].apellidopat<<endl;
                archivo<<e[posicion].apellidomat<<endl;
                archivo<<e[posicion].email<<endl;
                archivo<<e[posicion].edad<<endl;
                archivo<<e[posicion].dir.calle<<endl;
                archivo<<e[posicion].dir.colonia<<endl;
                archivo<<e[posicion].dir.municipio<<endl;
                archivo<<e[posicion].dir.numex<<endl;
                archivo<<e[posicion].dir.numin<<endl;
                archivo<<e[posicion].dir.cp<<endl;
                archivo<<"Telefono: "<<e[posicion].telefono<<endl;
                archivo<<e[posicion].linea<<endl;

                for(int i=posicion+1;i<marca;i++){//Se guardan los viejos datos
                    archivo<<e[i].nombre<<endl;
                    archivo<<e[i].apellidopat<<endl;
                    archivo<<e[i].apellidomat<<endl;
                    archivo<<e[i].email<<endl;
                    archivo<<e[i].edad<<endl;
                    archivo<<e[i].dir.calle<<endl;
                    archivo<<e[i].dir.colonia<<endl;
                    archivo<<e[i].dir.municipio<<endl;
                    archivo<<e[i].dir.numex<<endl;
                    archivo<<e[i].dir.numin<<endl;
                    archivo<<e[i].dir.cp<<endl;
                    archivo<<e[i].telefono<<endl;
                    archivo<<e[i].linea<<endl;
                }
            
                archivo.close();
                cout<<"Dato cambiado."<<endl;
                cout<<"ENTER para volver al menu principal. ";
                getch();
                break;

                default:cout<<"Opcion valida. ";exit(1);break;
            }
        }
    }
}

void consultas(){//Función para consultar una posición específica
    int posicion;
    gotoxy(1,18);cout<<"Que posicion quiere consultar? ";cin>>posicion;
    if(posicion>99){
        cout<<"Posicion invalida, digite otra posicion.";
        getch();
    }else{
        cout<<"Los datos de la posicion "<<posicion<<" son: \n";
        cout<<e[posicion].nombre<<endl;
        cout<<e[posicion].apellidopat<<endl;
        cout<<e[posicion].apellidomat<<endl;
        cout<<e[posicion].email<<endl;
        cout<<e[posicion].edad<<endl;
		cout<<e[posicion].dir.calle<<endl;
		cout<<e[posicion].dir.colonia<<endl;
		cout<<e[posicion].dir.municipio<<endl;
		cout<<e[posicion].dir.numex<<endl;
		cout<<e[posicion].dir.numin<<endl;
		cout<<e[posicion].dir.cp<<endl;
        cout<<e[posicion].telefono<<endl;
        cout<<e[posicion].linea<<endl;
        cout<<endl;
        cout<<"\nENTER para volver al menu principal. ";
        getch();
    }
}

void despliegues(){//Función para desplegar la base de datos
    int contador=0;
    gotoxy(0,18);cout<<"\nRegistros de la base de datos"<<endl;
    if(marca==0){
        cout<<"La base de datos esta vacia. ";getch();
    }else{
        for(int i=0;i<marca;i++){
            cout<<contador<<".- "<<e[i].nombre<<endl;
            cout<<"    "<<e[i].apellidopat<<endl;
            cout<<"    "<<e[i].apellidomat<<endl;
            cout<<"    "<<e[i].email<<endl;
            cout<<"    "<<e[i].edad<<endl;
            cout<<"    "<<e[i].dir.calle<<endl;
            cout<<"    "<<e[i].dir.colonia<<endl;
            cout<<"    "<<e[i].dir.municipio<<endl;
            cout<<"    "<<e[i].dir.numex<<endl;
            cout<<"    "<<e[i].dir.numin<<endl;
            cout<<"    "<<e[i].dir.cp<<endl;
            cout<<"    "<<e[i].telefono<<endl;
            cout<<e[i].linea<<endl;
            contador++;
        } 
        cout<<"\nENTER para volver al menu principal. ";
        getch();
    }
}

void ordenes(){//Función para ordenar colecciones alfabeticamente
    int i,j,contador=0;
    persona tempo;
    ofstream archivo;
    for(i=0;i<100;i++){//Se ordenan los datos
        for(j=0;j<99;j++){
            if(e[j].apellidopat < e[j+1].apellidopat){
                tempo=e[j];
                e[j]=e[j+1];
                e[j+1]=tempo;
            }
        }
    }

    archivo.open("archivo.txt",ios::out);//Apertura de la base de datos en modo reescritura
    if(archivo.fail()){
        cout<<"Error al guardar los cambios. ";
        exit(1);
    }
    for(i=marca-1;i>=0;i--){//Se guardan los datos ordenados
        archivo<<e[i].nombre<<endl;
        archivo<<e[i].apellidopat<<endl;
        archivo<<e[i].apellidomat<<endl;
        archivo<<e[i].email<<endl;
        archivo<<e[i].edad<<endl;
        archivo<<e[i].dir.calle<<endl;
        archivo<<e[i].dir.colonia<<endl;
        archivo<<e[i].dir.municipio<<endl;
        archivo<<e[i].dir.numex<<endl;
        archivo<<e[i].dir.numin<<endl;
        archivo<<e[i].dir.cp<<endl;
        archivo<<e[i].telefono<<endl;
        archivo<<e[i].linea<<endl;
    }
    archivo.close();

    if(marca==0){
        gotoxy(0,18);cout<<"La base de datos esta vacia. ";getch();
    }else{
        gotoxy(0,18);cout<<"Registros de la base de datos"<<endl;//Se muestran los datos ordenados
        for(i=marca-1;i>=0;i--){
            cout<<contador<<".- "<<e[i].nombre<<endl;
            cout<<"    "<<e[i].apellidopat<<endl;
            cout<<"    "<<e[i].apellidomat<<endl;
            cout<<"    "<<e[i].email<<endl;
            cout<<"    "<<e[i].edad<<endl;
            cout<<"    "<<e[i].dir.calle<<endl;
            cout<<"    "<<e[i].dir.colonia<<endl;
            cout<<"    "<<e[i].dir.municipio<<endl;
            cout<<"    "<<e[i].dir.numex<<endl;
            cout<<"    "<<e[i].dir.numin<<endl;
            cout<<"    "<<e[i].dir.cp<<endl;
            cout<<"    "<<e[i].telefono<<endl;
            cout<<e[i].linea<<endl;
            contador++;
        }
        cout<<"\nENTER para volver al menu principal. ";
        getch();
    }
}
