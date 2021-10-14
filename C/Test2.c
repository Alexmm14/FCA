// Se implementa una Tabla Hash en C

#include <stdio.h>
#include <stdlib.h>

struct set
{
int key;
int data;
};
struct set *array;
int capacity = 10;
int size = 0;

int hashFunction(int key)
{
return (key % capacity);
}
int checkPrime(int n)
{
int i;
if (n == 1 || n == 0)
{
return 0;
}
for (i = 2; i < n / 2; i++)
{
if (n % i == 0)
{
return 0;
}
}
return 1;
} 
int getPrime(int n)
{
if (n % 2 == 0)
{
n++;
}
while (!checkPrime(n))
{
n += 2;
}
return n;
}
void init_array()
{
capacity = getPrime(capacity);
array = (struct set *)malloc(capacity * sizeof(struct set));
for (int i = 0; i < capacity; i++)
{
array[i].key = 0;
array[i].data = 0;
}
} 
void insert(int key, int data)
{
int index = hashFunction(key);
if (array[index].data == 0)
{
array[index].key = key;
array[index].data = data;
size++;
printf("\n La clave (%d) ha sido insertada \n", key);
}
else if (array[index].key == key)
{
array[index].data = data;
}
else
{
printf("\n Se ha presentado una colisión \n");
}
} 
void remove_element(int key)
{
int index = hashFunction(key);
if (array[index].data == 0)
{
printf("\n Esta clave no existe \n");
}
else
{
array[index].key = 0;
array[index].data = 0;
size--;
printf("\n La clave (%d) ha sido borrada \n", key);
}
} 
void display()
{
int i;
for (i = 0; i < capacity; i++)
{
if (array[i].data == 0)
{
printf("\n arreglo[%d]: / ", i);
}
else
{
printf("\n clave: %d array[%d]: %d \t", array[i].key, i, array[i].data);
}
}
} 
int size_of_hashtable()
{
return size;
} 
int main()
{
int choice, key, data, n;
int c = 0;
init_array();

do
{
printf("1.Insertar un elemento a la Tabla Hash"
"\n2.Eliminar un elemento de la Tabla Hash"
"\n3.Verificar el tamaño de la Tabla Hash"
"\n4.Mostrar la Tabla Hash"
"\n\n Por favor, capture una opción: ");

scanf("%d", &choice);
switch (choice)
{
case 1:

printf("Capturar la clave -:\t");
scanf("%d", &key);
printf("Capturar el dato -:\t");
scanf("%d", &data);
insert(key, data);

break;

case 2:

printf("Capturar la clave a ser borrada-:");
scanf("%d", &key);
remove_element(key);

break;

case 3:

n = size_of_hashtable();
printf("El tamaño de la Tabla Hash es-:%d\n", n);

break;

case 4:

display();

break;

default:

printf("Entrada Invalida\n");
}

printf("\nCapture 1 para continuar, otro caracter para salir: ");
scanf("%d", &c);

} while (c == 1);
} 
