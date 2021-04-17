#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	//Declaro las variables tipo numéricos para...
	int nro1, nro2 = 0;		
	
	printf("Ingrese un nro\n");
	
	scanf("%d",&nro1); //Solo se utiliza & para el scanf
	
	printf("Ingrese otro nro\n");
	
	scanf("%d",&nro2);
		
	//Si tengo una sola instrucción puede evitar el uso de llaves. Sugerido usen siempre llaves!
	if (nro1 > nro2) //Evalúo si los nros son iguales... 
	{	
		printf("El %d es mayor a %d \n", nro1, nro2);
	}
	else if(nro1 < nro2)
	{
		printf("El %d es menor a %d \n", nro1, nro2);
	}	
	else
	{	
		printf("Los nros son iguales \n");
	}
		
	double total = pow(nro2,2);
	
	double raiz = sqrt(25);	
	
	float total2 = (float)4 / (float)3;
	
	printf("El valor total decimal es %5.2f ", total2);
	
	
	system("pause");
	return 0;	
}




