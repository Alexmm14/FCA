#Se utilizan para realizar una relación entre dos valores.
#Compara estos valores entre si para producir un resultado de verdadero o falso.
#Tienen el mismo nivel de prioridad en su evaluación (De izquierda a derecha)
#Los operadores relacionales tienen mayor prioridad que los operadores aritméticos

#Mayor que
resultado=10>20
print("10>20---",resultado,type(resultado))

#Menor que
resultado=10<20
print("10<20---",resultado,type(resultado))

#Mayor o igual que
resultado=10>=10
print("10>=20---",resultado,type(resultado))

#Menor o igual que
resultado=10<=20
print("10>20---",resultado,type(resultado))

#Diferente a
resultado=10!=20
print("10!=20---",resultado,type(resultado))

#Igual a
resultado=10==20
print("10==20---",resultado,type(resultado))

#Es posile combinar operadores aritméticos con relacionales
a=10
b=20
c=30
resultado=a+b==c
print(a,"+",b,"=",c,". Esto es",resultado,type(resultado))