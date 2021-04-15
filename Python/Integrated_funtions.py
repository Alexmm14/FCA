#int
numero=int("10")#Convierte la cadena de caracteres en un int, pero este debe ser entero
print(numero,type(numero))

#float
numero=float("10.5")#Convierte la cadena de caracteres en un float
print(numero,type(numero))

#str
numero=str(10.5)#Convierte un número en una cadena de caracteres
print(numero,type(numero))

#bin
numero=bin(10)#Reescribe un número en binario como tipo str
print(numero,type(numero))

#hex
numero=hex(10)#Reescribe un número en hexagesimal como tipo str
print(numero,type(numero))

#binario a entero
numero=int("0b1010",2)#Se pone como cadena, después una coma y la base en la que está
print(numero,type(numero))

#hexagesimal a entero
numero=int("0xa",16)#Se pone como cadena, después una coma y la base en la que está
print(numero,type(numero))

#abs
numero=abs(-10.5)#Escribe el valor absoluto de un número real
print(numero,type(numero))

#round
numero=round(9.5)#Redondea un número real al valor más próximo
print(numero,type(numero))

#len
numero=len("marvaz 10")#Imprime el número de caracteres de una cadena contando los espacios como tipo int
print(numero,type(numero))