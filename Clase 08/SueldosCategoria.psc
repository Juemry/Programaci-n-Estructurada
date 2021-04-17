Algoritmo EmpleadosSueldos
	// Empleados cobran sueldos segun categoria y son n empleados y 3 categorias
	// empleado = 0 Cortar el ciclo
	// Categoria 1=1500 pesos de sueldo, categoria 2=2000 y cateoriga 3=2500
	// Si se ingresa el nombre, categoria y antiguedad de cada empleado, calcular
	// Al sueldo se le suma $100 por cada año trabajado...
	// 1) Cuantos empleados hay por categoria
	// 2) Total sueldos pagados por categoria
	// 3) Sueldo promedio general
	// 4) Sueldo maximo y a quien pertenence
	// 5) Que porcentuel sobre el total de sueldos representa cada total de sueldos de las categorias
	
	//Datos de entrada...
	definir nombre como entero
	definir categoria como entero
	definir antiguedad como entero
	nombre <- 0
	categoria <- 0
	antiguedad <- 0
	definir sueldo Como Entero
	sueldo <- 0
	
	//Datos del proceso...
	//1)
	definir cantidadEmpleadosCategoria1 como entero
	definir cantidadEmpleadosCategoria2 como entero
	definir cantidadEmpleadosCategoria3 como entero
	cantidadEmpleadosCategoria1 <- 0
	cantidadEmpleadosCategoria2 <- 0
	cantidadEmpleadosCategoria3 <- 0
	//2)
	definir totalSueldosCategoria1 como entero
	definir totalSueldosCategoria2 como entero
	definir totalSueldosCategoria3 como entero
	totalSueldosCategoria1 <- 0
	totalSueldosCategoria2 <- 0
	totalSueldosCategoria3 <- 0
	//3)
	definir sueldoPromedio Como Entero
	sueldoPromedio <- 0
	//4)
	definir sueldoMaximo Como Entero
	definir sueldoMaximoEmpleado Como Entero
	sueldoMaximo <- 0
	sueldoMaximoEmpleado <- 0
	//5)
	definir totalSueldos como entero
	definir porcentajeSueldoCat1 Como Real
	definir porcentajeSueldoCat2 Como Real
	definir porcentajeSueldoCat3 Como Real
	totalSueldos <- 0
	porcentajeSueldoCat1 <- 0
	porcentajeSueldoCat2 <- 0
	porcentajeSueldoCat3 <- 0
	
	
//	Para contador <-1 Hasta 50 Con Paso 1 Hacer
//		Escribir "Ingrese el nombre del usuario. 0 para salir"
//		Leer nombre
//		Escribir "Ingrese la categoria del usuario."
//		Leer categoria
//		Escribir "Ingrese la antigudad del usuario."
//		Leer antiguedad		
//	Fin Para
	
	Escribir "Ingrese el nombre del usuario. 0 para salir"
	Leer nombre	
	
	Mientras nombre <> 0 Hacer
		
		Escribir "Ingrese la categoria del usuario."
		Leer categoria
		Escribir "Ingrese la antigudad del usuario."
		Leer antiguedad		
		
		Segun categoria Hacer
			1:
				sueldo <- 1500 + (antiguedad * 100)
				cantidadEmpleadosCategoria1 <- cantidadEmpleadosCategoria1 + 1
				totalSueldosCategoria1 <- totalSueldosCategoria1 + sueldo								
				
			2:
				sueldo <- 2000 + (antiguedad * 100)
				cantidadEmpleadosCategoria2 <- cantidadEmpleadosCategoria2 + 1
				totalSueldosCategoria2 <- totalSueldosCategoria2 + sueldo				
				
			3:
				sueldo <- 2500 + (antiguedad * 100)				
				cantidadEmpleadosCategoria3 <- cantidadEmpleadosCategoria3 + 1
				totalSueldosCategoria3 <- totalSueldosCategoria3 + sueldo				
				
			De Otro Modo:
				Escribir "Categoría inválida. Vuelva a ingresar"
		Fin Segun
		
		sueldoPromedio <- sueldoPromedio + sueldo
		
		Si sueldo > sueldoMaximo Entonces
			sueldoMaximo <- sueldo
			sueldoMaximoEmpleado <- nombre
		Fin Si
		
		Escribir "Ingrese el nombre del usuario. 0 para salir"
		Leer nombre		
		
	Fin Mientras
	
	totalSueldos <- sueldoPromedio
	sueldoPromedio <- sueldoPromedio / (cantidadEmpleadosCategoria1 + cantidadEmpleadosCategoria2 +cantidadEmpleadosCategoria3)
	
	porcentajeSueldoCat1 <- totalSueldosCategoria1 / totalSueldos * 100
	porcentajeSueldoCat2 <- totalSueldosCategoria2 / totalSueldos * 100
	porcentajeSueldoCat3 <- totalSueldosCategoria3 / totalSueldos * 100	
	
		
FinAlgoritmo
