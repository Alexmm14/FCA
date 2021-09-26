//Directivas al preprocesador
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Declaración e inicialización de matrices globales
int MDT[3][3]={0,0,0,0,0,0,0,0,0},MCT[3][3]={0,0,0,0,0,0,0,0,0},MTB[3][3];

int main (){//Función principal
    system("cls");
    facturacion_de_debito();
    facturacion_de_credito();
    balance_de_prueba();
    puts("\n\tFIN DEL PROGRAMA");
}

void facturacion_de_debito()//Función para capturar datos
{
    char id_jugador,id_receptor;//Se declaran las tres variables globales
    int monto;
    do
    {
        printf("\tMENU\nA)I\nB)II\nC)III\nD)Calcular balance\nQue jugador eres? ");
        scanf("%c",&id_jugador);//Se pide y captura el id del jugador
        fflush(stdin);
        switch(id_jugador)
        {
            case 'A'://Si se trata del jugador I
                printf("\n\tPago\nB)II\nC)III\nA que jugador le vas a pagar? ");
                scanf("%c", &id_receptor);//Se pide y captura el receptor del monto
                fflush(stdin);
                printf("\n\tMonto\nDigite el monto a pagar: $");
                scanf("%d", &monto);//Se pide y captura el monto a pagar
                switch (id_receptor)
                {
                    //Si el jugador I va a pagar al jugador II
                    case 'B': MDT[1][0]+=monto;printf("El jugador I pago $%d al jugador II. ",monto);getch();break;
                    //Si el jugador I va a pagar al jugador III
                    case 'C': MDT[2][0]+=monto;printf("El jugador I pago $%d al jugador III. ",monto);getch();break;
                    //Si el jugador I puso un jugador que no existe en el menu
                    default: puts("Dato invalido. ");getch();break;
                }fflush(stdin);system("cls");break;

            case 'B'://Si se trata del jugador II
                printf("\n\tPago\nA)I\nC)III\nA que jugador le vas a pagar? ");
                scanf("%c", &id_receptor);//Se pide y captura el receptor del monto
                fflush(stdin);
                printf("\n\tMonto\nDigite el monto a pagar: $");
                scanf("%d", &monto);//Se pide y captura el monto a pagar
                switch (id_receptor)
                {
                    //Si el jugador II va a pagar al jugador I
                    case 'A': MDT[0][1]+=monto;printf("El jugador II pago $%d al jugador I. ",monto);getch();break;
                    //Si el jugador II va a pagar al jugador III
                    case 'C': MDT[2][1]+=monto;printf("El jugador II pago $%d al jugador II. ",monto);getch();break;
                    //Si el jugador II puso un jugador que no existe en el menu
                    default:puts("Dato invalido. ");getch();break;
                }fflush(stdin);system("cls");break;

            case 'C'://Si se trata del jugador III
                printf("\n\tPago\nA)I\nB)II\nA que jugador le vas a pagar? ");
                scanf("%c", &id_receptor);//Se pide y captura el receptor del monto
                fflush(stdin);
                printf("\n\tMonto\nDigite el monto a pagar: $");
                scanf("%d", &monto);//Se pide y captura el monto a pagar
                switch (id_receptor)
                {
                    //Si el jugador III va a pagar al jugador I
                    case 'A': MDT[0][2]+=monto;printf("El jugador III pago $%d al jugador I. ",monto);getch();break;
                    //Si el jugador III va a pagar al jugador II
                    case 'B': MDT[1][2]+=monto;printf("El jugador III pago $%d al jugador II. ",monto);getch();break;
                    //Si el jugador III puso un jugador que no existe en el menu
                    default:puts("Dato invalido. ");getch();break;
                }fflush(stdin);system("cls");break;

            case 'D': break;//Si se quiere salir del algorítmo termina su ejecución

            default: puts("Dato invalido. ");getch();break;//Si el usuario ingresa un jugador que no existe
        }
    }while(id_jugador!='D');//Condición para repetir el algorítmo de captura de datos
}

void facturacion_de_credito()//Función que llena la matriz transpuesta
{
    for (int i=0; i<=2; i++)
    {
        for (int j=0; j<=2; j++)
        {
            MCT[i][j]=MDT[j][i];
        }
    }
}

void balance_de_prueba()
{
    int balance_I=0,balance_II=0,balance_III=0;//Declaración e inicialización de variables globales

    /*A la matriz de debito se le resta la matriz de crédito
    y sus valores se guardan en la matriz de balance*/
    for (int i=0; i<=2; i++)
    {
        for (int j=0; j<=2; j++)
        {
            MTB[i][j]=MDT[i][j]-MCT[i][j];
        }
    }

    //Se suman las filas de la matriz para obtener el balance de prueba
    for (int i = 0; i<=2; i++)
    {
        balance_I+=MTB[0][i];
        balance_II+=MTB[1][i];
        balance_III+=MTB[2][i];
    }

    //Se imprimen los valores de los balances de prueba
    printf("El balance de prueba del jugador I es: %d\n",balance_I);
    printf("El balance de prueba del jugador II es: %d\n",balance_II);
    printf("El balance de prueba del jugador III es: %d\n",balance_III);
    printf("ENTER para continuar...");
    getch();
}
