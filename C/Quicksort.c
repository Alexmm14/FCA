//Esta función cambia los valores del arreglo
void cambia(int num1, int num2){
    int temp;
    temp=arreglo[num1];
    arreglo[num1]=arreglo[num2];
    arreglo[num2]=temp;
}

/*Esta función deja los valores menores al pivote del lado7
  izquierdo y los mayores del derecho*/
int partir(int izq, int der, int pivote){
    int izqapuntador=izq-1;
    int derapuntador=der;
    int nosalir=1;

    while(nosalir){
        while(arreglo[++izqapuntador]<pivote){
        //No se hace nada
        }
        while(derapuntador>0 && arreglo[--derapuntador]>pivote){
            //No se hace nada
        }
        if(izqapuntador >= derapuntador){
            nosalir=0;
        }else{
            //se cambian los elementos
            cambia(izqapuntador,derapuntaor);
        }
    }
    cambia(izqapuntador,der);
    return izqapuntador;
}
