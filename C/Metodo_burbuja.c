/*La función recibe un arreglo con N elementos
  ya que ese es el tamaño del arreglo*/
int burbuja(int A[],int N){

    int i,j,AUX;
    /*El primer ciclo for dará N-1 repeticiones a todo el arreglo
      para asegurar que todo el arreglo esté ordenado*/
    for(i=0;i<(N-1);i++){

        /*El segundo ciclo for representa una repetición sobre
          el arreglo cambiando los primeron N-i-1 elementos
          esto es porque sabemos que los elementos del final
          están ordenados con cada recorrido*/
        for(j=0;j<(N-i-1);j++){
            if(A[j-1]>A[j-1]){//Si el elemento j-1>j se cambian
                AUX=A[j-1];
                A[j-1]=A[j];
                A[j]=AUX;
            }
        }
    }
    return 1;
}
