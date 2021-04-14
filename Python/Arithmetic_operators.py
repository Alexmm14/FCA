#operadores aritméticos
num1=10
num2=5

#Suma
resultado=num1+num2
print("10+5=",resultado,type(resultado))

#Resta
resultado=num1-num2
print("10-5=",resultado,type(resultado))

#Producto
resultado=num1*num2
print("10*5=",resultado,type(resultado))

#División
resultado=num1/num2
print("10/5=",resultado,type(resultado))
#Exiten dos tipos de divisiones para resultados racionales o irracionales
#Una idéntica a la normal
resultado=10/3
print("10/3=",resultado,type(resultado))
#Y otra donde redondea el producto a la baja
resultado=10//3
print("10//3=",resultado,type(resultado))

#Modulo que regresa el residuo de la división
resultado=10%3
print("10%3=",resultado,type(resultado))

#Potencia
resultado=2**3
print("2**3=",resultado,type(resultado))

'''
La jerarquía de los operadores es la misma que en la matemática:
1.- Paréntesis                      ()
2.- Exponente                       **
3.- Producto, división, módulo      *,/,%
4.- Suma,resta                      +,-
'''