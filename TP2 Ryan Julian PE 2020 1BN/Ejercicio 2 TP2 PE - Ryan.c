/*
2) Escribir un programa que permita ingresar una cadena de hasta diez
caracteres que representa un n�mero en numeraci�n romana, y por
medio de una funci�n romanoadecimal () imprima el n�mero y su
equivalente en numeraci�n ar�biga. Anexar el pseudoc�digo y el
diagrama de flujo correspondiente solo para este ejercicio.
*/

#include <stdio.h> 
#include <string.h>

//Declaracion de funci�n
void romanoADecimal (int n,char romano[], int valor []);

int main () {
	//Declaraci�n de variables
	char romano [10];
	int valor [100];
	int n=0;
	
	//Solicitud de datos al usuario
	printf("Ingrese el numero romano que desea transformar a decimal: \n");
	gets (romano);
	n=strlen (romano);
	
	//funci�n de romanos a decimal
	romanoADecimal (n,romano,valor);
	
	return 0;
}

void romanoADecimal (int n,char romano[], int valor []){
		//Declaraci�n de variables internas a la funci�n
		int i;
		int numero;
		//Transformaci�n de caracteres romanos a numeros decimales
		for(i=0;i<n;i++){
		if (romano [i] == 'I' || romano [i] =='i')
			valor[i]=1;
		if (romano [i] == 'V' || romano [i] =='v')
			valor[i]=5;
		if (romano [i] == 'X' || romano [i] =='x')
			valor[i]=10;
		if (romano [i] == 'L' || romano [i] =='l')
			valor[i]=50;
		if (romano [i] == 'C' || romano [i] =='c')
			valor[i]=100;
		if (romano [i] == 'D' || romano [i] =='d')
			valor[i]=500;
		if (romano [i] == 'M' || romano [i] =='m')
			valor[i]=1000;
	}
	//Transformaci�n de los valores negativos 
	for(i=0;i<n;i++){
		if(i==n-1){
			numero+=valor[i];
		}
		else
			if(valor[i]>=valor [i+1]){
				numero+=valor[i];
			}
			else{
				numero-=valor[i];
			}
	}
	//Impresi�n del resultado
	printf ("El numero es: %i", numero);	
}
