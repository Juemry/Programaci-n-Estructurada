/*
PARTE PRACTICA
1. Realice de la forma mas detallada posible el diagrama de flujo estructurado para la resolucion del siguiente problema.
En el caso del uso de switch o comparaciones multiples solo grafique la primera y ultima opcion del mismo.
Se recuerda que aun no se deben utilizar vectores ni matrices en la resolucion.
Un sanatorio posee la atencion de 20 obras sociales o prepagas en sus 50 consultorios externos de cada servicio.
Cuando un paciente se acerca a atenderse se registran los siguientes datos que finalizan con numero de atencion = 0
A) Numero de atencion (NA)
B) Apellido y nombre del paciente (apynom)
C) Servicio en el que se atendera (serv)
D) Obra social que presenta (os)
E) Valor de la consulta (VC)
Se desea saber:
	1. Monto total a cobrar a cada OS
	2. Valor promedio total de las consultas realizadas
	3. Que porcentaje resulta de la atencion de cada servicio sobre el total
	4. De cual OS se atendio mas pacientes en total
	5. Cuantas OS deben pagar mas de $100000.Å] al sanatorio en total
2. Codifique en DEV C++ la rutina punto 1 y 2 reduciendo las OS a 4 dentro del switch

*/
#include<stdio.h>
	
int main() {
	//Variables de entrada
	int numerodeatencion;
	double dni; //en vez de nombre y apellido
	int servicio;
	int obrasocial;
	int valordeconsulta;
	//Variables de proceso/salida
	// 1. Monto total a cobrar a cada OS
	int montototal;
	int montototalos1;
	int montototalos2;
	int montototalos3;
	int montototalos20;
	// 2. Valor promedio total de las consultas realizadas
	int cantidadconsultas;
	int promedioconsultas;
	// 3. QuÈ porcentaje resulta de la atenciÛn de cada servicio sobre el total
	int consultasservicio1;
	int consultasservicio2;
	int consultasservicio3;
	int consultasservicio50;
	int porcentajeservicio1;
	int porcentajeservicio2;
	int porcentajeservicio3;
	int porcentajeservicio50;
	// 4. De cual OS se atendiÛ m·s pacientes en total
	int os1;
	int os2;
	int os3;
	int os20;
	int osmaspacientes;
	int cantidadpacientesos1;
	int cantidadpacientesos2;
	int cantidadpacientesos3;
	int cantidadpacientesos20;
	// 5. Cuantas OS deben pagar m·s de $100000.- al sanatorio en total 
	//Definicion de valores iniciales
	dni = 0;
	servicio = 0;
	obrasocial = 0;
	valordeconsulta = 0;
	montototal = 0;
	montototalos1 = 0;
	montototalos2 = 0;
	montototalos3 = 0;
	montototalos20 = 0;
	cantidadconsultas = 0;
	promedioconsultas = 0;
	consultasservicio1 = 0;
	consultasservicio2 = 0;
	consultasservicio3 = 0;
	consultasservicio50 = 0;
	porcentajeservicio1 = 0;
	porcentajeservicio2 = 0;
	porcentajeservicio3 = 0;
	porcentajeservicio50 = 0;
	cantidadpacientesos1 = 0;
	cantidadpacientesos2 = 0;
	cantidadpacientesos3 = 0;
	cantidadpacientesos20 = 0;
	osmaspacientes = 0;
	os1 = 1;
	os2 = 2;
	os3 = 3;
	os20 = 20;
	
	/* Solicitud de datos y procesamiento de la informacion */
	/* A) */
	printf("Ingrese Numero de Atencion del paciente. (0 para salir)\n");
	scanf("%i",&numerodeatencion);
	while (numerodeatencion>0) {
		/* B */
		printf("Ingrese el Numero de DNI del paciente. (ingresar DNI)\n"); /* en vez de nombre y apellido */
		scanf("%d",&dni);
		/* C */
		printf("Ingrese el Servicio en el que se atendera el paciente.(1,2,3 o 50)\n");
		scanf("%i",&servicio);
		switch (servicio) {
		case 1:
			consultasservicio1 = consultasservicio1+1;
			break;
		case 2:
			consultasservicio2 = consultasservicio2+1;
			break;
		case 3:
			consultasservicio3 = consultasservicio3+1;
			break;
		case 50:
			consultasservicio50 = consultasservicio50+1;
			break;
		default:
			printf("Numero de servicio incorrecto\n");
		}
		
		/* E */
		printf("Ingrese el Valor de la Consulta del servicio que utilizar· el paciente\n");
		scanf("%i",&valordeconsulta);
		montototal = montototal+valordeconsulta;
		
		/* D */
		printf("Ingrese la Obra Social del paciente.(1,2,3 o 20)\n");
		scanf("%i",&obrasocial);
		switch (obrasocial) {
		case 1:
			montototalos1 = montototalos1+valordeconsulta;
			cantidadpacientesos1 = cantidadpacientesos1+1;
			break;
		case 2:
			montototalos2 = montototalos2+valordeconsulta;
			cantidadpacientesos2 = cantidadpacientesos2+1;
			break;
		case 3:
			montototalos3 = montototalos3+valordeconsulta;
			cantidadpacientesos3 = cantidadpacientesos3+1;
			break;
		case 20:
			montototalos20 = montototalos20+valordeconsulta;
			cantidadpacientesos20 = cantidadpacientesos20+1;
			break;
		default:
			printf("Numero de obra social incorrecto\n");
		}
		cantidadconsultas = cantidadconsultas+1;
		printf("Ingrese el Numero de Atencion del paciente. (0 para salir)\n");
		scanf("%i",&numerodeatencion);
	}
	/* Calculos restantes */
	/* 2) Calculo para el valor promedio de las consultas realizadas */
	promedioconsultas = montototal/cantidadconsultas;
	/* 3) QuÈ porcentaje resulta de la atenciÛn de cada servicio sobre el total */
	porcentajeservicio1 = (consultasservicio1*100)/cantidadconsultas;
	porcentajeservicio2 = (consultasservicio2*100)/cantidadconsultas;
	porcentajeservicio3 = (consultasservicio3*100)/cantidadconsultas;
	porcentajeservicio50 = (consultasservicio50*100)/cantidadconsultas;
	/* 4) De cual OS se atendiÛ m·s pacientes en total */
	if ((cantidadpacientesos1>cantidadpacientesos2) && (cantidadpacientesos1>cantidadpacientesos3) && (cantidadpacientesos1>cantidadpacientesos20)) {
		osmaspacientes = os1;
	}
	if ((cantidadpacientesos2>cantidadpacientesos1) && (cantidadpacientesos2>cantidadpacientesos3) && (cantidadpacientesos2>cantidadpacientesos20)) {
		osmaspacientes = os2;
	}
	if ((cantidadpacientesos3>cantidadpacientesos1) && (cantidadpacientesos3>cantidadpacientesos2) && (cantidadpacientesos3>cantidadpacientesos20)) {
		osmaspacientes = os3;
	}
	if ((cantidadpacientesos20>cantidadpacientesos1) && (cantidadpacientesos20>cantidadpacientesos2) && (cantidadpacientesos20>cantidadpacientesos3)) {
		osmaspacientes = os20;
	}
	/* Presentacion de calculos al usuario */
	/* 1) */
	printf("La OS 1 debe pagar un monto total de %i\n",montototalos1);
	printf("La OS 2 debe pagar un monto total de $ %i\n",montototalos2);
	printf("La OS 3 debe pagar un monto total de $ %i\n",montototalos3);
	printf("La OS 20 debe pagar un monto total de $ %i\n",montototalos20);
	/* 2) */
	printf("El promedio de las consultas fue de $ %i\n",promedioconsultas);
	/* 3) */
	printf("El procentaje de consultas del servicio 1 fue de %i % \n",porcentajeservicio1);
	printf("El procentaje de consultas del servicio 2 fue de %i % \n",porcentajeservicio2);
	printf("El procentaje de consultas del servicio 3 fue de %i % \n",porcentajeservicio3);
	printf("El procentaje de consultas del servicio 50 fue de %i % \n",porcentajeservicio50);
	/* 4) */
	printf("La mayoria de pacientes los tuvo la obra social numero %i\n",osmaspacientes);
	/* 5) */
	if (montototalos1>100000) {
		printf("La obra social 1 debe pagar mas de $100.000 al sanatorio en total\n");
	}
	if (montototalos2>100000) {
		printf("La obra social 2 debe pagar mas de $100.000 al sanatorio en total\n");
	}
	if (montototalos3>100000) {
		printf("La obra social 3 debe pagar mas de $100.000 al sanatorio en total\n");
	}
	if (montototalos20>100000) {
		printf("La obra social 20 debe pagar mas de $100.000 al sanatorio en total\n");
	}
	return 0;
}

