Algoritmo EmpleadosSueldoPorCategoria
	// Empleados cobran sueldos según categoria y son n empleados y 3 categorias
	// empleado = 0 Cortar el ciclo
	// Categoria 1=1500 pesos de sueldo, categoria 2=2000 y categoría 3=2500
	// Si se ingresa el A) nombre, B) categoria y C) antiguedad de cada empleado, calcular
	// Al sueldo se le suma $100 por cada año trabajado...
	
	// 1) Cuantos empleados hay por categoria
	// 2) Total sueldos pagados por categoria
	// 3) Sueldo promedio general
	// 4) Sueldo maximo y a quien pertenence
	// 5) Que porcentuel sobre el total de sueldos representa cada total de sueldos de las categorias
	
	//1) Definir las variables
	definir nombre Como Entero
	definir categoria como entero
	definir antiguedad como entero
	definir sueldo como entero
	nombre <- 0
	categoria <- 0
	antiguedad <- 0
	sueldo <- 0
	definir sueldoCategoria1 como entero
	sueldoCategoria1 <- 1500
	
	//2) Definir las variables de cálculo/salida
	//Para solución 1
	definir cantidadEmpleadosPorCategoria1 Como Entero
	definir cantidadEmpleadosPorCategoria2 Como Entero
	definir cantidadEmpleadosPorCategoria3 Como Entero
	cantidadEmpleadosPorCategoria1 <- 0
	cantidadEmpleadosPorCategoria2 <- 0
	cantidadEmpleadosPorCategoria3 <- 0
	//Para solución 2
	definir sueldosPorCategoria1 Como Entero
	definir sueldosPorCategoria2 Como Entero
	definir sueldosPorCategoria3 Como Entero
	sueldosPorCategoria1 <- 0
	sueldosPorCategoria2 <- 0
	sueldosPorCategoria3 <- 0
	//Para solución 3
	definir sueldoTotal Como Entero
	definir sueldoPromedio Como Entero
	definir cantidadEmpleadosIngresados Como Entero
	sueldoTotal <- 0
	sueldoPromedio <- 0
	cantidadEmpleadosIngresados <- 0 
	//Para solución 4
	definir sueldoMaximo Como Entero
	definir sueldoMaximoEmpleado Como Entero
	sueldoMaximo <- 0
	sueldoMaximoEmpleado <- 0
	//Para solución 5
	definir porcentajeSueldosPorCategoria1 Como Entero
	definir porcentajeSueldosPorCategoria2 Como Entero
	definir porcentajeSueldosPorCategoria3 Como Entero
	porcentajeSueldosPorCategoria1 <- 0
	porcentajeSueldosPorCategoria2 <- 0
	porcentajeSueldosPorCategoria3 <- 0
	
	//2) SOLICITUD DE DATOS Y PROCESO LA INFORMACIÓN...
	
	Escribir "Ingrese el nombre del empleado. 0 para salir"
	Leer nombre
	
	Mientras nombre > 0 Hacer
		
		Escribir "Ingrese la categoría del empleado"
		Leer categoria
		
		Escribir "Ingrese la antiguedad del empleado"
		Leer antiguedad
				
		Segun categoria Hacer
			1:
				sueldo <- sueldoCategoria1 + (antiguedad * 100)
				cantidadEmpleadosPorCategoria1 <- cantidadEmpleadosPorCategoria1 + 1				
				sueldosPorCategoria1 <- sueldosPorCategoria1 + sueldo
				
			2:
				sueldo <- 2000 + (antiguedad * 100) //Poner el valor del sueldo/categoria como variable sería lo mejor...
				cantidadEmpleadosPorCategoria2 <- cantidadEmpleadosPorCategoria2 + 1				
				sueldosPorCategoria2 <- sueldosPorCategoria2 + sueldo
			3:
				sueldo <- 2500 + (antiguedad * 100) //Poner el valor del sueldo/categoria como variable sería lo mejor...
				//1
				cantidadEmpleadosPorCategoria3 <- cantidadEmpleadosPorCategoria3 + 1
				//2
				sueldosPorCategoria3 <- sueldosPorCategoria3 + sueldo
				
			De Otro Modo:
				Escribir "Usted ingresó una categoría inválida"
		Fin Segun		
		
		//3
		sueldoTotal <- sueldoTotal + sueldo
		//4
		Si sueldo > sueldoMaximo Entonces
			sueldoMaximo <- sueldo
			sueldoMaximoEmpleado <- nombre
		Fin Si
		
		Escribir "Ingrese el nombre del empleado. 0 para salir"
		Leer nombre		
	Fin Mientras	
	
//  Para ejercicios con cantidad n conocida = Ejemplo 10/20/5 de solicitud de datos al usuario
//	
//	Para contador	<-1 Hasta 10 Con Paso 1 Hacer
//		Escribir "Ingrese el nombre del empleado. 0 para salir"
//		Leer nombre
//	Fin Para
	
	// 3) CÁLCULOS RESTANTES...
	//Punto 3 de solución (SUELDO PROMEDIO)
	cantidadEmpleadosIngresados <- cantidadEmpleadosPorCategoria1 + cantidadEmpleadosPorCategoria2 + cantidadEmpleadosPorCategoria3
	sueldoPromedio <- sueldoTotal / cantidadEmpleadosIngresados
	
	//Punto 5, calcular porcentajes por categoria en función del sueldo total...
	porcentajeSueldosPorCategoria1 <- sueldosPorCategoria1 / sueldoTotal * 100
	porcentajeSueldosPorCategoria2 <- sueldosPorCategoria2 / sueldoTotal * 100
	porcentajeSueldosPorCategoria3 <- sueldosPorCategoria3 / sueldoTotal * 100
	
	//4) MOSTRAR CÁLCULOS AL USUARIO....	
	
	
	
	
	
FinAlgoritmo
