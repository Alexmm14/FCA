#include<iostream>
#include<locale.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"spanish");
    float num1,num2,resultado;
    char operador;
    cout<<"\n\t\tCALCULADORA BÁSICA\n\t\tCuando digitas escribes 'f' la calculadora se reinicia.";
    cout<<"\n\t\tOPERADORES\n\t\t+\n\t\t-\n\t\t*\n\t\t/\n\t\t";
    cout<<"\n\t\tDigita un número: ";cin>>num1;fflush(stdin);
    cout<<"\t\tDigita un operador: ";cin>>operador;
    cout<<"\t\tDigita otro número: ";cin>>num2;cout<<"\n";
    switch(operador){
        case '+':resultado=num1+num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
        case '-':resultado=num1-num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
        case '*':resultado=num1*num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
        case '/':if(num2==0){
                    do{
                        cout<<"\n\t\tLa división entre 0 no está definida\n\t\tDigita otro número: ";cin>>num2;
                    }while(num2==0);
                    resultado=num1/num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
                }else{
                    resultado=num1/num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
                }
    }
    num1=resultado;
    cout<<"\n\n\t\tDigita un operador o 'f' para salir: ";cin>>operador;
    do{
        if(operador=='f'){
            system("cls");cout<<"\n\t\tFIN DE LA CALCULADORA\n\t\t";system("pause");
    }else{
        cout<<"\t\tDigita otro número: ";cin>>num2;cout<<"\n";
        switch(operador){
        case '+':resultado=num1+num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
        case '-':resultado=num1-num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
        case '*':resultado=num1*num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
        case '/':if(num2==0){
                    do{
                        cout<<"\t\tLa división entre 0 no está definida\n\t\tDigita otro número: ";cin>>num2;
                    }while(num2==0);
                    resultado=num1/num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
                }else{
                    resultado=num1/num2;cout<<"\t\t";cout<<num1;cout<<operador;cout<<num2;cout<<"=";cout<<resultado;break;
                }
    }
    num1=resultado;
    cout<<"\n\n\t\tDigita un operador o 'f' para salir: ";cin>>operador;
    }
    }while(operador!='f');
    system("cls");cout<<"\n\t\tFIN DE LA CALCULADORA\n\t\t";system("pause");
    return 0;
}