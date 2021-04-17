Algoritmo main
	// Variables de entrada
	Definir numeroDeAtencion Como Entero
	Definir DNI Como Entero // en vez de nombre y apellido
	Definir servicio Como Entero
	Definir obraSocial Como Entero
	Definir valorDeConsulta Como Entero
	numeroDeAtencion <- 0
	DNI <- 0 // en vez de nombre y apellido
	servicio <- 0
	obraSocial <- 0
	valorDeConsulta <- 0
	// Varibles de proceso/salida
	// 1. Monto total a cobrar a cada OS
	Definir montoTotal Como Entero
	Definir montoTotalOS1 Como Entero
	Definir montoTotalOS2 Como Entero
	Definir montoTotalOS3 Como Entero
	Definir montoTotalOS20 Como Entero
	montoTotal <- 0
	montoTotalOS1 <- 0
	montoTotalOS2 <- 0
	montoTotalOS3 <- 0
	montoTotalOS20 <- 0
	// 2. Valor promedio total de las consultas realizadas
	Definir cantidadConsultas Como Entero
	cantidadConsultas <- 0
	Definir promedioConsultas Como Entero
	promedioConsultas <- 0
	// 3. Qué porcentaje resulta de la atención de cada servicio sobre el total
	Definir consultasServicio1 Como Entero
	Definir consultasServicio2 Como Entero
	Definir consultasServicio3 Como Entero
	Definir consultasServicio50 Como Entero
	consultasServicio1 <- 0
	consultasServicio2 <- 0
	consultasServicio3 <- 0
	consultasServicio50 <- 0
	Definir porcentajeServicio1 Como Entero
	Definir porcentajeServicio2 Como Entero
	Definir porcentajeServicio3 Como Entero
	Definir porcentajeServicio50 Como Entero
	porcentajeServicio1 <- 0
	porcentajeServicio2 <- 0
	porcentajeServicio3 <- 0
	porcentajeServicio50 <- 0
	// 4. De cual OS se atendió más pacientes en total
	Definir cantidadPacientesOS1 Como Entero
	Definir cantidadPacientesOS2 Como Entero
	Definir cantidadPacientesOS3 Como Entero
	Definir cantidadPacientesOS20 Como Entero
	cantidadPacientesOS1 <- 0
	cantidadPacientesOS2 <- 0
	cantidadPacientesOS3 <- 0
	cantidadPacientesOS20 <- 0
	Definir OSMasPacientes Como Entero
	OSMasPacientes <- 0
	Definir OS1 Como Entero
	Definir OS2 Como Entero
	Definir OS3 Como Entero
	Definir OS20 Como Entero
	OS1 <- 1
	OS2 <- 2
	OS3 <- 3
	OS20 <- 20
	// 5. Cuantas OS deben pagar más de $100000.- al sanatorio en total
	// Solicitud de datos y procesamiento de la informacion
	// A)
	Escribir 'Ingrese Numero de Atencion del paciente. (0 para salir)'
	Leer numeroDeAtencion
	Mientras numeroDeAtencion>0 Hacer
		// B
		Escribir 'Ingrese el Numero de DNI del paciente. (ingresar DNI)' // en vez de nombre y apellido
		Leer DNI
		// C
		Escribir 'Ingrese el Servicio en el que se atendera el paciente.(1,2,3 o 50)'
		Leer servicio
		Segun servicio  Hacer
			1:
				consultasServicio1 <- consultasServicio1+1
			2:
				consultasServicio2 <- consultasServicio2+1
			3:
				consultasServicio3 <- consultasServicio3+1
			50:
				consultasServicio50 <- consultasServicio50+1
			De Otro Modo:
				Escribir 'Numero de servicio incorrecto'
		FinSegun
		Escribir 'Ingrese el Valor de la Consulta del servicio que utilizará el paciente'
		// E
		Leer valorDeConsulta
		montoTotal <- montoTotal+valorDeConsulta
		// D
		Escribir 'Ingrese la Obra Social del paciente.(1,2,3 o 20)'
		Leer obraSocial
		Segun obraSocial  Hacer
			1:
				montoTotalOS1 <- montoTotalOS1+valorDeConsulta
				cantidadPacientesOS1 <- cantidadPacientesOS1+1
			2:
				montoTotalOS2 <- montoTotalOS2+valorDeConsulta
				cantidadPacientesOS2 <- cantidadPacientesOS2+1
			3:
				montoTotalOS3 <- montoTotalOS3+valorDeConsulta
				cantidadPacientesOS3 <- cantidadPacientesOS3+1
			20:
				montoTotalOS20 <- montoTotalOS20+valorDeConsulta
				cantidadPacientesOS20 <- cantidadPacientesOS20+1
			De Otro Modo:
				Escribir 'Numero de obra social incorrecto'
		FinSegun
		cantidadConsultas <- cantidadConsultas+1
		Escribir 'Ingrese el Numero de Atencion del paciente. (0 para salir)'
		Leer numeroDeAtencion
	FinMientras
	// Calculos restantes
	// 2) Calculo para el valor promedio de las consultas realizadas
	promedioConsultas <- montoTotal/cantidadConsultas
	// 3) Qué porcentaje resulta de la atención de cada servicio sobre el total
	porcentajeServicio1 <- (consultasServicio1*100)/cantidadConsultas
	porcentajeServicio2 <- (consultasServicio2*100)/cantidadConsultas
	porcentajeServicio3 <- (consultasServicio3*100)/cantidadConsultas
	porcentajeServicio50 <- (consultasServicio50*100)/cantidadConsultas
	// 4) De cual OS se atendió más pacientes en total
	Si (cantidadPacientesOS1>cantidadPacientesOS2) Y (cantidadPacientesOS1>cantidadPacientesOS3) Y (cantidadPacientesOS1>cantidadPacientesOS20) Entonces
		OSMasPacientes <- OS1
	FinSi
	Si (cantidadPacientesOS2>cantidadPacientesOS1) Y (cantidadPacientesOS2>cantidadPacientesOS3) Y (cantidadPacientesOS2>cantidadPacientesOS20) Entonces
		OSMasPacientes <- OS2
	FinSi
	Si (cantidadPacientesOS3>cantidadPacientesOS1) Y (cantidadPacientesOS3>cantidadPacientesOS2) Y (cantidadPacientesOS3>cantidadPacientesOS20) Entonces
		OSMasPacientes <- OS3
	FinSi
	Si (cantidadPacientesOS20>cantidadPacientesOS1) Y (cantidadPacientesOS20>cantidadPacientesOS2) Y (cantidadPacientesOS20>cantidadPacientesOS3) Entonces
		OSMasPacientes <- OS2
	FinSi
	// Presentacion de calculos al usuario
	// 1)
	Escribir 'La OS 1 debe pagar un monto total de ',montoTotalOS1
	Escribir 'La OS 2 debe pagar un monto total de ',montoTotalOS2
	Escribir 'La OS 3 debe pagar un monto total de ',montoTotalOS3
	Escribir 'La OS 20 debe pagar un monto total de ',montoTotalOS20
	// 2)
	Escribir 'El promedio de las consultas fue de ',promedioConsultas
	// 3)
	Escribir 'El procentaje de consultas del servicio 1 fue de ',porcentajeServicio1,'%'
	Escribir 'El procentaje de consultas del servicio 2 fue de ',porcentajeServicio2,'%'
	Escribir 'El procentaje de consultas del servicio 3 fue de ',porcentajeServicio3,'%'
	Escribir 'El procentaje de consultas del servicio 50 fue de ',porcentajeServicio50,'%'
	// 4)
	Escribir 'La mayoria de pacientes los tuvo la obra social n° ',OSMasPacientes
	// 5)
	Si montoTotalOS1>100000 Entonces
		Escribir 'La obra social 1 debe pagar mas de $100.000 al sanatorio en total'
	FinSi
	Si montoTotalOS2>100000 Entonces
		Escribir 'La obra social 2 debe pagar mas de $100.000 al sanatorio en total'
	FinSi
	Si montoTotalOS3>100000 Entonces
		Escribir 'La obra social 3 debe pagar mas de $100.000 al sanatorio en total'
	FinSi
	Si montoTotalOS20>100000 Entonces
		Escribir 'La obra social 20 debe pagar mas de $100.000 al sanatorio en total'
	FinSi
FinAlgoritmo
