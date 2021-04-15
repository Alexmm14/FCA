#Permiten construir expresiones lógicas, se obtienen como resultados booleanos
#True tiene el valor de 1
#False tiene el valor de 0

#Prioridad de los operadores lógicos
'''
1.- not
2.- and
3.- or
'''
var0=False
var1=True


#and---Conjunción/multiplicación lógica
'''
----------------------------------------
|operando1|operador|operando2|resultado|
----------------------------------------
|True     |and     |True     |True     |
|True     |and     |False    |False    |
|False    |and     |True     |False    |
|False    |and     |False    |False    |
----------------------------------------
'''
print("and")
resultado=((var1)and(var1))
print("(T)and(T)=",resultado)
resultado=((var1)and(var0))
print("(T)and(F)=",resultado)
resultado=((var0)and(var1))
print("(F)and(T)=",resultado)
resultado=((var0)and(var0))
print("(F)and(F)=",resultado)


#or----Disyunción/suma lógica
'''
----------------------------------------
|operando1|operador|operando2|resultado|
----------------------------------------
|True     |or      |True     |True     |
|True     |or      |False    |True     |
|False    |or      |True     |True     |
|False    |or      |False    |False    |
----------------------------------------
'''
print("or")
resultado=((var1)or(var1))
print("(T)or(T)=",resultado)
resultado=((var1)or(var0))
print("(T)or(F)=",resultado)
resultado=((var0)or(var1))
print("(F)or(T)=",resultado)
resultado=((var0)or(var0))
print("(F)or(F)=",resultado)


#not---Negación
'''
------------------------
|operando1  |resultado |
------------------------
|not(True)  |False     |
|not(False) |True      |
------------------------
'''
print("not")
resultado=(not(var0))
print("not(F)=",resultado)
resultado=(not(var1))
print("nor(T)=",resultado)