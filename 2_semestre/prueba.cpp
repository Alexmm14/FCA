#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream archivo("archivo.txt");
    string nombre;
    int contador = 0,i;

    for(i=0;i<200;i++){
        while(getline(archivo, nombre)) {
            cout << nombre << endl;
        }
    }

    return 0;
}

/*while(getline(archivo,e[i].apellidopat)){
            if(posicion==i){
                cout<<e[i].apellidopat<<endl;
            }
            i++;
        }*/