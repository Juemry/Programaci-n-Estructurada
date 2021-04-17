#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
int main(int argc, char *argv[]) {

	int antiguedad = 0;
	int cantidadempleadosingresados;
	int cantidadempleadosporcategoria1, cantidadempleadosporcategoria2,cantidadempleadosporcategoria3;
	int categoria;
	int nombre;
	int porcentajesueldosporcategoria1,porcentajesueldosporcategoria2,porcentajesueldosporcategoria3;
	int sueldo;
	int sueldocategoria1,sueldocategoria2, sueldocategoria3;
	int sueldomaximo;
	int sueldomaximoempleado;
	int sueldopromedio;
	int sueldosporcategoria1,sueldosporcategoria2,sueldosporcategoria3;
	int sueldototal;
	
	nombre = 0;
	categoria = 0;
	sueldo = 0;
	sueldocategoria1 = 1500;
	sueldocategoria2 = 2000;
	sueldocategoria3 = 2500;
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
	
	printf("Por favor ingrese el nombre del empleado. 0 para salir \n");
	scanf("%d",&nombre);

	while(nombre > 0) {
		
		printf("Por favor ingrese la categoria del empleado. \n");
		scanf("%d",&categoria);
		printf("Por favor ingrese la antiguedad del empleado. \n");
		scanf("%d",&antiguedad);
		
		switch(categoria){
			
			case 1:
				sueldo = sueldocategoria1 + (antiguedad * 100);
				cantidadempleadosporcategoria1++;
				sueldosporcategoria1 += sueldo;
				
				break;
				
			case 2:
				sueldo = sueldocategoria2 + (antiguedad * 100);
				cantidadempleadosporcategoria2++;
				sueldosporcategoria2 += sueldo;
				
				break;
				
			case 3:
				sueldo = sueldocategoria3 + (antiguedad * 100);
				cantidadempleadosporcategoria3++;
				sueldosporcategoria3 += sueldo;
				
				break;
			
			default:
				printf("Usted ingresó una categoría inválida\n");			
		}	
		
		
		sueldototal += sueldo;
		
		if (sueldo > sueldomaximo)
		{
			sueldomaximo = sueldo;
			sueldomaximoempleado = nombre;
		}
		
		printf("Por favor ingrese el nombre del empleado. 0 para salir \n");
		scanf("%d",&nombre);
	}
	
	
	//Calculos restantes...
	cantidadempleadosingresados = cantidadempleadosporcategoria1 + cantidadempleadosporcategoria2 + cantidadempleadosporcategoria3;
	sueldopromedio = sueldototal / cantidadempleadosingresados;
		
	porcentajesueldosporcategoria1 = sueldosporcategoria1 / sueldototal * 100;
	porcentajesueldosporcategoria2 = sueldosporcategoria2 / sueldototal * 100;
	porcentajesueldosporcategoria3 = sueldosporcategoria3 / sueldototal * 100;

	
	//Mostrar resultados...
	//PUNTO 1
	printf("La cantidad de empleados para la categoria 1 es de %d \n", cantidadempleadosporcategoria1);
	printf("La cantidad de empleados para la categoria 2 es de %d \n", cantidadempleadosporcategoria2);
	printf("La cantidad de empleados para la categoria 3 es de %d \n", cantidadempleadosporcategoria3);
	
	
	//PUNTO 2
	printf("El sueldo total para la categoria 1 es de %d \n", sueldosporcategoria1);
	printf("El sueldo total para la categoria 2 es de %d \n", sueldosporcategoria2);
	printf("El sueldo total para la categoria 3 es de %d \n", sueldosporcategoria3);
	
	//PUNTO 3
	printf("El promedio es de %d \n",  sueldopromedio);
	
	//PUNTO 4
	printf("El sueldo maximo es de $ %d y pertenece a %d \n",  sueldomaximo, sueldomaximoempleado);
	
	//PUNTO 5
	printf("El porcentaje perteneciente a la categoria 1 sobre el total es de %d % \n", porcentajesueldosporcategoria1);
	printf("El porcentaje perteneciente a la categoria 1 sobre el total es de %d % \n", porcentajesueldosporcategoria2);
	printf("El porcentaje perteneciente a la categoria 1 sobre el total es de %d % \n", porcentajesueldosporcategoria3);
	
	
	return 0;
}




