#include<stdio.h>

typedef struct Nodo{
    int dato;
    struct Nodo *izq;
    struct Nodo *der;
}Arbol;

Arbol *raiz=NULL;

void inserta(int entero){
    Arbol *hoja;
    Arbol *ptr=NULL;
    int bandera=1;

    hoja=(Arbol *)malloc(sizeof(Arbol));
    hoja->izq=NULL;
    hoja->der=NULL;
    hoja->dato=entero;

    if(!isEmpty()){
        ptr=raiz;
        while(bandera){
            if(ptr->dato>=entero){
                ptr->izq=hoja;
                bandera=0;
            }else{ ptr=ptr->izq;
        }else{
            if(ptr->der==NULL){
                ptr->der=hoja;
                bandera=0;
                }else{ptr=ptr->der;}
            }
        }
    }
}

int isEmpty(){
    if(raiz==NULL)return 1;
    else return 0;
}
