#include <iostream>
#include<locale.h>
using namespace std;
int main (){
    setlocale(LC_ALL, "spanish");
    int alto,largo,dibujos,espacios,relleno;
    cout<<"Este programa imprime un marco en forma de paralelogramo cuya unidad de medida es *.\n";
    cout<<"Digite el largo del paralelogramo: ";cin>>largo;
    cout<<"Digite el alto del paralelogramo: ";cin>>alto;alto=alto-2;
    for(dibujos=1;dibujos<=largo;dibujos++){
        cout<<"*";
    }
    relleno=largo-2;
    cout<<"\n";
    for(dibujos=1;dibujos<=alto;dibujos++){
        cout<<"*";
        for(espacios=1;espacios<=relleno;espacios++){
            cout<<" ";
        }
        cout<<"*\n";
    }

    for(dibujos=1;dibujos<=largo;dibujos++){
        cout<<"*";
    }
}