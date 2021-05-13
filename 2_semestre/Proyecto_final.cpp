#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream>
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
void menu();
void altas();
void bajas();
void cambios();
void consultas();
void despliegues();
void ordenes();

struct direccion{//Estructura de datos de dirección
	string calle,colonia,municipio,cp,numex,numin;
};

struct persona{//Estructura de datos generales
	string nombre,apellidopat,apellidomat,email,edad,telefono;
	struct direccion dir;
};
persona e[101];

int main(){//Función principal
    int opcion;
    do{
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

void altas(){//Función para añadir datos
    ofstream archivo;
    string texto;

    gotoxy(0,18);cout<<"Digite los datos"<<endl;fflush(stdin);//Captura de datos
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
        cout<<"Error al guardar los datos."<<endl;
    }

    archivo<<"Nombre: "<<e[marca].nombre<<endl;//Se guardan los nuevos datos
    archivo<<"Apellido paterno: "<<e[marca].apellidopat<<endl;
    archivo<<"Apellido materno: : "<<e[marca].apellidomat<<endl;
    archivo<<"Email: "<<e[marca].email<<endl;
    archivo<<"Edad: "<<e[marca].edad<<endl;
    archivo<<"Calle: "<<e[marca].dir.calle<<endl;
    archivo<<"Colonia: "<<e[marca].dir.colonia<<endl;
    archivo<<"Municipio: "<<e[marca].dir.municipio<<endl;
    archivo<<"Numero exterior: "<<e[marca].dir.numex<<endl;
    archivo<<"Numero interior: "<<e[marca].dir.numin<<endl;
    archivo<<"Codigo postal: "<<e[marca].dir.cp<<endl;
    archivo<<"Telefono: "<<e[marca].telefono<<endl;
    archivo<<" "<<endl;
    archivo.close();
    marca+=1;
}

void bajas(){//Pendiente
    int posicion,i;
    char decision;
    ifstream fin("archivo.txt"),archivo;
    string auxiliar1,auxiliar2,dato;

    gotoxy(0,18);cout<<"Que posicion quiere dar de baja? ";cin>>posicion;
    if(posicion>99){
        cout<<"Posicion invalida, digite otra posicion.";//Caso de excepción
        getch();
    }else{
        cout<<"Los datos de la posicion "<<posicion<<" son: \n";//Datos previamente guardados
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;
        fin>>auxiliar1>>auxiliar2>>dato;
        cout<<auxiliar1<<auxiliar2<<" "<<dato<<endl;
        fin>>auxiliar1>>auxiliar2>>dato;
        cout<<auxiliar1<<auxiliar2<<" "<<dato<<endl;
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;
        fin>>auxiliar1>>auxiliar2>>dato;
        cout<<auxiliar1<<auxiliar2<<" "<<dato<<endl;
        fin>>auxiliar1>>auxiliar2>>dato;
        cout<<auxiliar1<<auxiliar2<<" "<<dato<<endl;
        fin>>auxiliar1>>auxiliar2>>dato;
        cout<<auxiliar1<<auxiliar2<<" "<<dato<<endl;
        fin>>auxiliar1>>dato;
        cout<<auxiliar1<<" "<<dato<<endl;

        cout<<"\nSeguro que quiere eliminar estos datos s/n?: ";cin>>decision;//Captura de decision
        if(decision!='s'){
            cout<<"No se borraron los datos de la posicion "<<posicion<<" ";//Caso de negación
            getch();
        }else{
            for(posicion;posicion<100-posicion;posicion++){//Eliminación de datos de la posición
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
            }
            marca-=1;
            archivo.close();
            cout<<"Datos dados de baja";
            getch();
        }
    }
}

void cambios(){//Función para cambiar datos
    int posicion,decision_int;
    char decision_char;
    gotoxy(1,18);cout<<"¿Qué posición quiere cambiar? ";cin>>posicion;
    if(posicion>99){
        gotoxy(1,19);cout<<"Posición inválida, digite otra posición.";
        getch();
    }else{
        cout<<"¿Quiere cambiar todos los datos de la posición "<<posicion<<" s/n? ";cin>>decision_char;
        if(decision_char== 's'){
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
        }else{
            gotoxy(1,20);cout<<" Menú de opciones"<<endl;
            cout<<"1.- Nombre: "<<e[posicion].nombre<<endl;
            cout<<"2.- Apellido paterno: "<<e[posicion].apellidopat<<endl;
            cout<<"3.- Apellido materno: "<<e[posicion].apellidomat<<endl;
            cout<<"4.- Email: "<<e[posicion].email<<endl;
            cout<<"5.- Edad: "<<e[posicion].edad<<endl;
		    cout<<"6.- Calle: "<<e[posicion].dir.calle<<endl;
		    cout<<"7.- Colonia: "<<e[posicion].dir.colonia<<endl;
		    cout<<"8.- Municipio: "<<e[posicion].dir.municipio<<endl;
		    cout<<"9.- Número exterior: "<<e[posicion].dir.numex<<endl;
		    cout<<"10.- Número interior: "<<e[posicion].dir.numin<<endl;
		    cout<<"11.- Código postal: "<<e[posicion].dir.cp<<endl;
            cout<<"12.- Teléfono: "<<e[posicion].telefono<<endl;
            cout<<"13.- Regresar al menú principal"<<endl;
            cout<<"\n\nDigite una opción: ";cin>>decision_int;
            switch (decision_int){
                case 1:cout<<"Digite el nuevo nombre: ";cin>>e[posicion].nombre;cout<<"Dato cambiado.";marca++;break;
                case 2:cout<<"Digite el nuevo apellido paterno: ";cin>>e[posicion].apellidopat;cout<<"Dato cambiado.";marca++;break;
                case 3:cout<<"Digite el nuevo apellido materno: ";cin>>e[posicion].apellidomat;cout<<"Dato cambiado.";marca++;break;
                case 4:cout<<"Digite el nuevo email: ";cin>>e[posicion].email;cout<<"Dato cambiado.";marca++;break;
                case 5:cout<<"Digite la nueva edad: ";cin>>e[posicion].edad;cout<<"Dato cambiado.";marca++;break;
                case 6:cout<<"Digite la nueva calle: ";cin>>e[posicion].dir.calle;cout<<"Dato cambiado.";marca++;break;
                case 7:cout<<"Digite la nueva colonia: ";cin>>e[posicion].dir.colonia;cout<<"Dato cambiado.";marca++;break;
                case 8:cout<<"Digite el nuevo municipio: ";cin>>e[posicion].dir.municipio;cout<<"Dato cambiado.";marca++;break;
                case 9:cout<<"Digite el nuevo número exterior: ";cin>>e[posicion].dir.numex;cout<<"Dato cambiado.";marca++;break;
                case 10:cout<<"Digite el nuevo número interior: ";cin>>e[posicion].dir.numin;cout<<"Dato cambiado.";marca++;break;
                case 11:cout<<"Digite el nuevo código postal: ";cin>>e[posicion].dir.cp;cout<<"Dato cambiado.";marca++;break;
                case 12:cout<<"Digite el nuevo teléfono: ";cin>>e[posicion].telefono;cout<<"Dato cambiado.";marca++;break;
                case 13:cout<<"Presione ENTER para volver al menú principal. ";break;
                default:cout<<"ERROR\nDigite una opción válida. ";break;
            }
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

void despliegues(){//Función para desplegar toda la pila
    int contador=marca;
    gotoxy(1,18);cout<<"Datos de la pila:"<<endl;
    if(marca==0){
        cout<<"La pila está vacía. ";getch();
    }else{
        for(int i=marca-1;i>=0;i--){
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
            contador--;
            cout<<"\n";
        } 
        getch();
    }
}

void ordenes(){//Función para ordenar por apellidos
    int i,j,contador=marca;
    persona tempo;
    cout<<"\n\n";
    for(i=0;i<100;i++){
        for(j=0;j<99;j++){
            if(e[j].apellidopat < e[j+1].apellidopat){
                tempo=e[j];
                e[j]=e[j+1];
                e[j+1]=tempo;
            }
        }
    }

    if(marca==0){
        cout<<"La pila está vacía. ";getch();
    }else{
        for(i=marca-1;i>=0;i--){
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
            contador--;
            cout<<"\n";
        }
        getch();
    }
}
