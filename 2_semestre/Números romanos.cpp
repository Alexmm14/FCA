#include<iostream>
#include<locale.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"spanish");
    int x,uni,dec,cen,mil,dimil;
    cout<<"Este programa convierte un número arábigo de 5 dígitos en un número romano.";
    cout<<"\nDigita un número de 5 dígitos: ";cin>>x;
    uni=x%10;x/=10;
    dec=x%10;x/=10;
    cen=x%10;x/=10;
    mil=x%10;x/=10;
    dimil=x%10;x/=10;
    switch (mil){
    case 1: printf("M");break;
    case 2: printf("MM");break;
    case 3: printf("MMM");break;
    case 4: printf("");break;
    case 5: printf("");break;
    case 6: printf("");break;
    case 7: printf("");break;
    case 8: printf("");break;
    case 9: printf("");break;
    }
    switch (cen){
    case 1: printf("C");break;
    case 2: printf("CC");break;
    case 3: printf("CCC");break;
    case 4: printf("CD");break;
    case 5: printf("D");break;
    case 6: printf("DC");break;
    case 7: printf("DCC");break;
    case 8: printf("DCCC");break;
    case 9: printf("CM");break;
    }
    switch (dec){
    case 1: printf("X");break;
    case 2: printf("XX");break;
    case 3: printf("XXX");break;
    case 4: printf("XL");break;
    case 5: printf("L");break;
    case 6: printf("LX");break;
    case 7: printf("LXX");break;
    case 8: printf("LXXX");break;
    case 9: printf("XC");break;
    }
    switch (uni){
    case 1: printf("I");break;
    case 2: printf("II");break;
    case 3: printf("III");break;
    case 4: printf("IV");break;
    case 5: printf("V");break;
    case 6: printf("VI");break;
    case 7: printf("VII");break;
    case 8: printf("VIII");break;
    case 9: printf("X");break;
    }
    return 0;
}