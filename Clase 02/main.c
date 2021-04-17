#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Parámetros de inicio de programa...

int main(int argc, char *argv[]) {
	
	/*Recuerden siempre inicializar sus variables...
	int num1 = 0;
	int num2 = 0;*/	
		
	printf("BIENVENIDOS AL PRIMER PROGRAMA...\n");	
	int num1, num2 = 0;
	int total = 0;
		
	printf("Ingrese el primer nro\n");
	scanf("%d", &num1); //Guardar en la posición donde está num1 el valor leido por el scanf...
		
	printf("Ingrese el segundo nro\n");
	scanf("%d", &num2);
	
	system("cls"); //Limpia la pantalla...
	
	total = num1 + num2;
	
	printf("El total de la suma es %d teniendo como sumandos %d, %d \n", total, num1, num2);	
	
	system("pause");//Para cortar la ejecución natural. Espera una tecla...
	
	double potencia = pow(4,2);
	
	double raiz = sqrt(25);
	
	printf("%5.2f \n", potencia);
	printf("%5.2f \n", raiz);
	
	double aux = pow(5,2) + pow(8,2);
	double hipotenusa = sqrt(aux);
	
	return 0;
}
