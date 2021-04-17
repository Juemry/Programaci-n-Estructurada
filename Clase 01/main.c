#include <stdio.h>
#include <string.h>

int main()
{


	system("cls");
	int i,nota,vn[2];
	
	char alumno[50],va[3][50]; //Porque usás índice a partir de 1 en lugar de 0, por eso declaro 3 en lugar de 2
	
	for (i=1;i<=2;i++) //->Convendría empezar desde 0 hasta i < 2
	{
		printf("Ingrese Nombre de alumno \n");
		scanf("%s",&alumno); 
		printf("Ingrese Nota \n");
		scanf("%d",&nota);
		
		strcpy(va[i], alumno); //Copio el contenido de alumno a la matriz en la posición determinada por i
		
		vn[i]=nota;
	}
	
	i=0;
	for (i=1;i<=2;i++)
	{
		if (vn[i]<4)
		{
			printf("El Alumno %s desaprobo con nota %d \n",va[i],vn[i]);
		}
	}
	system("pause");	
	
	return 0;
}

	/*int num1 = 10;
	int num2 = 10;
	int resultado; 
	printf("Ingresar primer valor:\n");
	scanf("%d", &num1);
	printf("Ingresar segundo valor:\n");
	scanf("%d", &num2);
	resultado = num1 + num2; 
	printf("El resultado de num1 + num2 es: %d \n ", resultado);*/
	
