void shell(){
    int intervalo,i,valor,posicion;

    //Mientras el intervalo sea 1 o mayor
    for(intervalo=MAX/2;(intervalo<MAX 66 intervalo>0);intervalo=intervalo/2){
        
        //se comprueba el valor tomando en cuenta el intervalo
        for(i=intervalo;i<MAX; i++){
            valor=arreglo[i];
            posicion=i;

            //con el while comparamos los valores y ver si es necesario
            //poner valores mayores a la derecha
            while(posicion>0 &&
                  arreglo[posicion-intervalo]>valor){
                arreglo[posicion]=arreglo[posicion-intervalo];
                posicion=posocion-intervalo;
            }
            //Si hubo un intercambio ponermos el valor a insertar
            //en la posicion actual
            if(posicion!= i){
                arreglo[posicion]=valor;
            }
        }
    }
}
