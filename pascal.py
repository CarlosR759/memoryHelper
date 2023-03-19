	#Funciones#
def factorial(numero):
	numero = int(numero)
	salida = 1
	for i in range(1,(numero + 1)):
		salida *= i
	return salida


def imprimirPiso(n):
	factorialN = factorial(int(n))
	
	for k in range(0, n + 1):
		factorialK = factorial(int(k))
		factorialNMenosK = factorial(int(n - k))
		resultado = factorialN / (factorialK * factorialNMenosK)
		print(int(resultado), end = " ")
	return

def imprimirEspacios(entrada):
	for i in range(0, entrada):
		print(end = " ")
	return

	#Main#
n = 0
cantidadPisos = input("Ingrese total de pisos a imprimir: ")
cantidadPisos = int(cantidadPisos)

for i in range(1, (cantidadPisos + 1)):
	imprimirEspacios(cantidadPisos - n )
	imprimirPiso(n)
	print()	
	n+=1
