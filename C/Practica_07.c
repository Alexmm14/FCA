//Directivas al preprocesador
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int MDT[3][3], MCT[3][3];//Declaración de matrices globales

int main (){//Función principal
    system("cls");
    llenado();
    puts("\nFIN DEL PROGRAMA...");
}

void llenado()//Función para capturar datos
{
    char id_jugador,id_receptor;//Se declaran las tres variables globales
    int monto;
    do
    {
        printf("\tMENU\nA)I\nB)II\nC)III\nD)Salir\nQue jugador eres? ");
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
                    case 'B': MDT[0][1]+=monto;printf("El jugador %c pago $%d al jugador B. ",id_jugador,monto);getch();break;
                    //Si el jugador I va a pagar al jugador III
                    case 'C': MDT[0][2]+=monto;printf("El jugador %c pago $%d al jugador C. ",id_jugador,monto);getch();break;
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
                    case 'A': MDT[1][0]+=monto;printf("El jugador %c pago $%d al jugador A. ",id_jugador,monto);getch();break;
                    //Si el jugador II va a pagar al jugador III
                    case 'C': MDT[1][2]+=monto;printf("El jugador %c pago $%d al jugador C. ",id_jugador,monto);getch();break;
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
                    case 'A': MDT[2][0]+=monto;printf("El jugador %c pago $%d al jugador A. ",id_jugador,monto);getch();break;
                    //Si el jugador III va a pagar al jugador II
                    case 'B': MDT[2][1]+=monto;printf("El jugador %c pago $%d al jugador B. ",id_jugador,monto);getch();break;
                    //Si el jugador III puso un jugador que no existe en el menu
                    default:puts("Dato invalido. ");getch();break;
                }fflush(stdin);system("cls");break;

            case 'D': break;//Si se quiere salir del algorítmo termina su ejecución

            default: puts("Dato invalido. ");getch();break;//Si el usuario ingresa un jugador que no existe
        }
    }while(id_jugador!='D');//Condición para repetir el algorítmo de captura de datos
}
