void insercion(){
    int valor,posicion,i;
    
    //Este ciclo opera sobre todo el arreglo
    for(i=1;i<MAX;i++){
        
        //Se asigna el valor a comparar y a insertar
        valor=Arreglo[i];
        posicion=i;
        
        //Con while movemos el valor a ordenar
        while (posicion>0 && Arreglo[posicion-1]>valor){
            Arreglo[posicion]=Arreglo[posicion-1];
            posicion--;
        }
        
        //Si cambiamos elementos lo dejamos en la posición actual
        if(posicion !=i){
            Arreglo[posicion]=valor;
        }
        printf("Insercion %d#: ",i);
    }
}
