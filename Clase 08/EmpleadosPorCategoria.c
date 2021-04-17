/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int antiguedad;
	int cantidadempleadosingresados;
	int cantidadempleadosporcategoria1;
	int cantidadempleadosporcategoria2;
	int cantidadempleadosporcategoria3;
	int categoria;
	int nombre;
	int porcentajesueldosporcategoria1;
	int porcentajesueldosporcategoria2;
	int porcentajesueldosporcategoria3;
	int sueldo;
	int sueldocategoria1;
	int sueldomaximo;
	int sueldomaximoempleado;
	int sueldopromedio;
	int sueldosporcategoria1;
	int sueldosporcategoria2;
	int sueldosporcategoria3;
	int sueldototal;
	/* Empleados cobran sueldos según categoria y son n empleados y 3 categorias */
	/* empleado = 0 Cortar el ciclo */
	/* Categoria 1=1500 pesos de sueldo, categoria 2=2000 y categoría 3=2500 */
	/* Si se ingresa el A) nombre, B) categoria y C) antiguedad de cada empleado, calcular */
	/* Al sueldo se le suma $100 por cada año trabajado... */
	/* 1) Cuantos empleados hay por categoria */
	/* 2) Total sueldos pagados por categoria */
	/* 3) Sueldo promedio general */
	/* 4) Sueldo maximo y a quien pertenence */
	/* 5) Que porcentuel sobre el total de sueldos representa cada total de sueldos de las categorias */
	/* 1) Definir las variables */
	nombre = 0;
	categoria = 0;
	antiguedad = 0;
	sueldo = 0;
	sueldocategoria1 = 1500;
	/* 2) Definir las variables de cálculo/salida */
	/* Para solución 1 */
	cantidadempleadosporcategoria1 = 0;
	cantidadempleadosporcategoria2 = 0;
	cantidadempleadosporcategoria3 = 0;
	/* Para solución 2 */
	sueldosporcategoria1 = 0;
	sueldosporcategoria2 = 0;
	sueldosporcategoria3 = 0;
	/* Para solución 3 */
	sueldototal = 0;
	sueldopromedio = 0;
	cantidadempleadosingresados = 0;
	/* Para solución 4 */
	sueldomaximo = 0;
	sueldomaximoempleado = 0;
	/* Para solución 5 */
	porcentajesueldosporcategoria1 = 0;
	porcentajesueldosporcategoria2 = 0;
	porcentajesueldosporcategoria3 = 0;
	/* 2) SOLICITUD DE DATOS Y PROCESO LA INFORMACIÓN... */
	printf("Ingrese el nombre del empleado. 0 para salir\n");
	scanf("%i",&nombre);
	while (nombre>0) {
		printf("Ingrese la categoría del empleado\n");
		scanf("%i",&categoria);
		printf("Ingrese la antiguedad del empleado\n");
		scanf("%i",&antiguedad);
		switch (categoria) {
		case 1:
			sueldo = sueldocategoria1+(antiguedad*100);
			cantidadempleadosporcategoria1 = cantidadempleadosporcategoria1+1;
			sueldosporcategoria1 = sueldosporcategoria1+sueldo;
			break;
		case 2:
			/* Poner el valor del sueldo/categoria como variable sería lo mejor... */
			sueldo = 2000+(antiguedad*100);
			cantidadempleadosporcategoria2 = cantidadempleadosporcategoria2+1;
			sueldosporcategoria2 = sueldosporcategoria2+sueldo;
			break;
		case 3:
			/* Poner el valor del sueldo/categoria como variable sería lo mejor... */
			sueldo = 2500+(antiguedad*100);
			/* 1 */
			cantidadempleadosporcategoria3 = cantidadempleadosporcategoria3+1;
			/* 2 */
			sueldosporcategoria3 = sueldosporcategoria3+sueldo;
			break;
		default:
			printf("Usted ingresó una categoría inválida\n");
		}
		/* 3 */
		sueldototal = sueldototal+sueldo;
		/* 4 */
		if (sueldo>sueldomaximo) {
			sueldomaximo = sueldo;
			sueldomaximoempleado = nombre;
		}
		printf("Ingrese el nombre del empleado. 0 para salir\n");
		scanf("%i",&nombre);
	}
	/* Para ejercicios con cantidad n conocida = Ejemplo 10/20/5 de solicitud de datos al usuario */
	/* Para contador <-1 Hasta 10 Con Paso 1 Hacer */
	/* Escribir "Ingrese el nombre del empleado. 0 para salir" */
	/* Leer nombre */
	/* Fin Para */
	/* 3) CÁLCULOS RESTANTES... */
	/* Punto 3 de solución (SUELDO PROMEDIO) */
	cantidadempleadosingresados = cantidadempleadosporcategoria1+cantidadempleadosporcategoria2+cantidadempleadosporcategoria3;
	sueldopromedio = sueldototal/cantidadempleadosingresados;
	/* Punto 5, calcular porcentajes por categoria en función del sueldo total... */
	porcentajesueldosporcategoria1 = sueldosporcategoria1/sueldototal*100;
	porcentajesueldosporcategoria2 = sueldosporcategoria2/sueldototal*100;
	porcentajesueldosporcategoria3 = sueldosporcategoria3/sueldototal*100;
	/* 4) MOSTRAR CÁLCULOS AL USUARIO....  */
	return 0;
}

