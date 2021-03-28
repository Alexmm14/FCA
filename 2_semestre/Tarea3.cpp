#include<iostream> 
#include<conio.h>
#include<string.h>
#include<locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "spanish");
    int precio1,precio2;
    char producto[30];
    char caducidad[10],proveedor[30];
    printf("Digite los siguientes datos:\n");
    printf("Nombre del producto: ");scanf("%s",&producto);fflush(stdin);
    printf("Precio de compra: $");scanf("%i",&precio1);fflush(stdin);
    printf("Precio de venta: $");scanf("%i",&precio2);fflush(stdin);
    cout<<"Caducidad (dd/mm/aaaa): ";gets(caducidad);
    printf("Digite el nombre del proveedor: ");scanf("%s",proveedor);
    system("cls");
    printf("El producto es %s",producto);
    printf("\nSe compró por $%i\nSe vendió por $%i\n",precio1,precio2);
    printf("Caduca el ");cout<<caducidad<<endl;
    printf("El proveedor es %s",proveedor);
    return 0;
}