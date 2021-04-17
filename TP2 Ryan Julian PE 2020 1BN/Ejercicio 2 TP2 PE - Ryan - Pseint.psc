SubProceso romanoADecimal ()
//Declaración de variables internas a la función
	Definir i Como Entero
	Definir num Como Entero
	Dimension nRomano[10]
	Dimension valorNumerico[100]
//Transformación de caracteres romanos a numeros decimales
	Para i<-0 Hasta n Con Paso 1
		Si  (nRomano[i] == I | nRomano[i] ==i)
			valorNumerico[i] = 1
		FinSi
		Si  (nRomano[i] == V | nRomano[i] ==v)
			valorNumerico[i] <- 5
		FinSi
		Si  (nRomano[i] == X | nRomano[i] ==x)
			valorNumerico[i] <- 10
		FinSi
		Si  (nRomano[i] == L | nRomano[i] ==l)
			valorNumerico[i] <- 50
		FinSi
		Si  (nRomano[i] == C | nRomano[i] ==c)
			valorNumerico[i] <- 100
		FinSi
		Si  (nRomano[i] == D | nRomano[i] ==d)
			valorNumerico[i] <- 500
		FinSi
		Si  (nRomano[i] == M | nRomano[i] ==m)
			valorNumerico[i] <- 1000
		FinSi
	Fin Para

//Transformación de los valores negativos
	Para i<-0 Hasta n Con Paso 1
		Si (i==n-1)
			num<- num + valorNumerico[i]
		SiNo
			Si (valorNumerico[i] >= valorNumerico[i+1])
				num<- num + valorNumerico[i]
					SiNo
						num<- num - valorNumerico[i]
					FinSi
				FinSi
	FinPara
	
//Impresión del resultado
	Escribir  'El numero es: ', num 
FinSubProceso

Algoritmo Ejercicio2
//Declaración de variables
	Definir nRomano como Cadena
	Definir n Como Entero
	Dimension nRomano[10]
//Solicitud de datos al usuario
	Escribir "Ingrese la cantidad de caracteres que tiene el numero romano que desea transformar a decimal: "
	Leer n
	Escribir "Ingrese el numero romano que desea transformar a decimal: "
	Leer nRomano[10]
//función de romanos a decimal
	ROMANOADECIMAL()
FinAlgoritmo


