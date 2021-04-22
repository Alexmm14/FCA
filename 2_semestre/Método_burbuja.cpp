#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"spanish");
    int contador=0,auxiliar,opcion,i,j;
    int array[20];

    for(i=0;i<20;i++){//Pide valores para el arreglo
        contador+=1;
        system("cls");
        cout<<"Este programa ordena 20 números de mayor a menor."<<endl;
        cout<<"Digita el valor "<<contador<<": ";cin>>array[i];
    }

    for(i=0;i<20;i++){//Ordena todos los valores de forma ascendente
        for(j=0;j<20;j++){
            if(array[j]>array[j+1]){
                auxiliar=array[j];
                array[j]=array[j+1];
                array[j+1]=auxiliar;
            }
        }
    }

    cout<<"\n¿En qué orden quiere que se despliegen los números?"<<endl;
    cout<<"Menor a mayor (Ascendente):  0"<<endl;
    cout<<"Mayor a menor (Descendente): 1"<<endl;
    cout<<"\nDigite una opción: ";cin>>opcion;
    contador=1;

    if(opcion==0){//Imprime valores de forma ascendente
        for(i=0;i<20;i++){
            cout<<contador<<".- "<<array[i]<<endl;
            contador+=1;
        }
    }else{//Imprime valores de forma descendente
        for(i=19;i>=0;i--){
            cout<<contador<<".- "<<array[i]<<endl;
            contador+=1;
        }
    }

    system("pause");
    return 0;
}
