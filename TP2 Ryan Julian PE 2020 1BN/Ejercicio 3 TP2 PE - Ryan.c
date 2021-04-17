/*
Realizar un programa que permita realizar y mostrar el resultado de
las operaciones de suma y multiplicación de 2 matrices 3 x 3 y la
función transpuesta de una matriz 4 x 4 (Los datos de todas las
matrices las ingresa el usuario).
*/

#include <stdio.h> 

#define fil 3
#define col 3
#define fila 4
#define colu 4

/*Funciones que no logro hacer que anden
void valoresMatrices (int matriz1 [] [col], int matriz2 [] [col]);
void sumaMatrices  (int matriz1 [] [col], int matriz2 [] [col], int matriz3 [] [col]);
void multiplicacionMatrices  (int matriz1 [] [col], int matriz2 [] [col], int matriz4 [] [col]);
void valorMatrizT ()
*/

int main () {
	//Declaración de variables
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int opcion = 0;
	int matriz1 [fil] [col];
	int matriz2 [fil] [col];
	int matriz3 [fil] [col];
	int matriz4 [fil] [col];
	int matriz5 [fila] [colu];
	int matriz6 [fila] [colu];
		
	//Menu Inicial - Solicitud de datos al usuario
	printf("Seleccione una de las siguientes opciones para operar con matrices: \n");
	printf("1: Suma de dos matrices 3x3 \n");
	printf("2: Multiplicacion de dos matrices 3x3 \n");
	printf("3: Funcion transpuesta de una matriz 4x4 \n");
	printf("0: Salir \n");
	scanf("%i", &opcion);
	
	//Switch segun opciones para operar con matricies 
	switch (opcion){
		
		case 1: printf("Ingrese los datos para la suma de dos matrices 3x3: \n");
			
			// Introducción de los valores de la primera matriz
		 	for(i=0; i<fil; i++){ // i corresponde a filas
		 	    printf("Coloque los datos de la fila numero %i: \n", i+1);
			 	for(j=0; j<col; j++){ // j corresponde a columnas
			 		scanf("%i", &matriz1[i][j]);
				}
			}
			//Impresion de los valores almacenados en la primera matriz
			printf("Primera matriz:\n");
			for(k=0; k<fil; k++ ){
				for( l=0; l<col; l++ ){
					printf( " %i ", matriz1[k][l]);
				}
				printf( "\n");
			} 
				 	 
		 	// Introducción de los valores de la segunda matriz
		 	for(i=0; i<fil; i++){ // i corresponde a filas
		 		printf("Coloque los datos de la fila numero %i: \n", i+1);
				for(j=0; j<col; j++){ // j corresponde a columnas
			 		scanf("%i", &matriz2[i][j]);
				}
			}
			//Impresion de los valores almacenados en la segunda matriz
			printf("Segunda matriz:\n");
				for(k=0; k<fil; k++ ){
				 	for( l=0; l<col; l++ ){
						printf( " %i ", matriz2[k][l] );
					}; 
					printf( "\n");
				}; 
			
			// Se calcula el resultado:
			for( i=0; i<fil; i++ ){
			 	for( j=0; j<col; j++ ){
					matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			 	}; 
			}; 
			 
		 
			//Se imprime la matriz resultante de la suma
			printf( "Matriz resultante de la suma: \n");
			for( i=0; i<fil; i++ ){
			 	for( j=0; j<col; j++ ){
			 		printf( " %i ", matriz3 [i][j] );
				}; 
			printf( "\n");
			}; 	
			
		break;	
		
		case 2: printf("Ingrese los datos para la multiplicacion de dos matrices 3x3 \n");
		
			// Introducción de los valores de la primera matriz
		 	for(i=0; i<fil; i++){ // i corresponde a filas
		 		printf("Coloque los datos de la fila numero %i: \n", i+1);
			 	for(j=0; j<col; j++){ // j corresponde a columnas
			 		scanf("%i", &matriz1[i][j]);
				}
			}
			//Impresion de los valores almacenados en la primera matriz
			printf("Primera matriz:\n");
			for(k=0; k<fil; k++ ){
				for( l=0; l<col; l++ ){
					printf( " %i ", matriz1[k][l]);
				}
				printf( "\n");
			} 
				 	 
		 	// Introducción de los valores de la segunda matriz
		 	for(i=0; i<fil; i++){ // i corresponde a filas
		 		printf("Coloque los datos de la fila numero %i: \n", i+1);
				for(j=0; j<col; j++){ // j corresponde a columnas
			 		scanf("%i", &matriz2[i][j]);
				}
			}
			//Impresion de los valores almacenados en la segunda matriz
			printf("Segunda matriz:\n");
				for(k=0; k<fil; k++ ){
				 	for( l=0; l<col; l++ ){
						printf( " %i ", matriz2[k][l] );
					}; 
					printf( "\n");
				}; 
			
			// Se calcula el resultado:
			for( i=0; i<fil; i++ ){
			 	for( j=0; j<col; j++ ){
					matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
			 	}; 
			}; 
			 
		 
			//Se imprime la matriz resultante de la multiplicacion
			printf( "Matriz resultante de la multiplicacion: \n");
			for( i=0; i<fil; i++ ){
			 	for( j=0; j<col; j++ ){
			 		printf( " %i ", matriz3 [i][j] );
				}; 
			printf( "\n");
			}; 	
			
		break;	
		
		case 3: printf("Ingrese los datos para la funcion transpuesta de una matriz 4x4 \n");
			int i,j,k,l;
			int matriz5 [fila] [colu];
			int matriz6 [fila] [colu];
			
			// Introducción de los valores de la matriz
			for (i=0; i<fila; i++){
				printf("Coloque los datos de la fila numero %i: \n", i+1);
				for(j=0; j<colu; j++){
					scanf("%d", &matriz5 [i] [j]); //Lectura de los valores iniciales
				}
				printf("\n");
			}
			
			//Impresion de los resultados
			printf( "Matriz original: \n");
			for (i=0; i<fila; i++){
				for(j=0; j<colu; j++){
					printf("%d", matriz5 [i] [j]); 
					printf(" ");
				}
			}
			
			//Proceso de transposicion de la matriz
			for (i=0; i<fila; i++){
				for(j=0; j<colu; j++){
					matriz6 [j] [i] = matriz5 [i] [j]; //Proceso de intercambio de los indices de lugar
				}
			}
			
			//Impresion de los resultados
			printf( "Matriz resultante de la transposicion: \n");
			for (i=0; i<fila; i++){
				for(j=0; j<colu; j++){
					printf("%d", matriz6 [i] [j]); 
					printf(" ");
				}
				printf("\n");
			}
		break;
		case 0: printf ("Usted a seleccionado salir del programa");
		return 0;
		break;
		default: printf("Ha ingresado una opcion invalida\n");
	}
	
	return 0;
}

/*
void valoresMatrices (int matriz1 [] [col], int matriz2 [] [col]) {
			int i,j,k,l;
			// Introducción de los valores de la primera matriz
		 	for(i=0; i<f; i++){ // i corresponde a filas
			 	for(j=0; j<c; j++){ // j corresponde a columnas
			 		scanf("%i", &matriz1[i][j]);
				}
			}
			//Impresion de los valores almacenados en la primera matriz
			printf("Primera matriz:\n");
			for(k=0; k<f; k++ ){
				for( l=0; l<c; l++ ){
					printf( " %i ", matriz1[k][l]);
				}
				printf( "\n");
			} 
				 	 
		 	// Introducción de los valores de la segunda matriz
		 	for(i=0; i<f; i++){ // i corresponde a filas
				for(j=0; j<c; j++){ // j corresponde a columnas
			 		scanf("%i", &matriz2[i][j]);
				}
			}
			//Impresion de los valores almacenados en la segunda matriz
			printf("Segunda matriz:\n");
				for(k=0; k<f; k++ ){
				 	for( l=0; l<c; l++ ){
						printf( " %i ", matriz2[k][l] );
					}; 
					printf( "\n");	
}
void sumaMatrices (int matriz1 [] [col], int matriz2 [] [col], int matriz3 [] [col]){
			int i,j,k,l;
			// Se calcula el resultado:
			for( i=0; i<f; i++ ){
			 	for( j=0; j<c; j++ ){
					matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			 	}; 
			}; 
			//Se imprime la matriz resultante de la suma
			printf( "Matriz resultante: \n");
			for( i=0; i<f; i++ ){
			 	for( j=0; j<c; j++ ){
			 		printf( " %i ", matriz3 [i][j] );
				}; 
			printf( "\n");
			}
	}
}


void multiplicacionMatrices (int matriz1 [fil] [col], int matriz2 [fil] [col], int matriz4 [fil] [col]){
			int i,j,k,l;
			// Se calcula el resultado:
			for( i=0; i<fil; i++ ){
			 	for( j=0; j<col; j++ ){
					matriz4[i][j] = matriz1[i][j] * matriz2[i][j];
			 	}; 
			}; 
			//Se imprime la matriz resultante de la multiplicacion
			printf( "Matriz resultante: \n");
			for( i=0; i<fil; i++ ){
			 	for( j=0; j<col; j++ ){
			 		printf( " %i ", matriz4 [i][j] );
				}; 
			printf( "\n");
			};
}

void valorMatrizT () {
			int i,j,k,l;
			int matriz5 [fila] [colu]
			int matriz6 [fila] [colu];
			
			// Introducción de los valores de la matriz
			for (i=0; i<fila; i++){
				for(j=0; j<colu; j++){
					scanf("%d", &matriz5 [i] [j]); //Lectura de los valores iniciales
				}
				printf("\n");
			}
			
			//Proceso de transposicion de la matriz
			for (i=0; i<fila; i++){
				for(j=0; j<colu; j++){
					matriz6 [j] [i] = matriz5 [i] [j]; //Proceso de intercambio de los indices de lugar
				}
			}
			
			//Impresion de los resultados
			for (i=0; i<fila; i++){
				for(j=0; j<colu; j++){
					printf("%d", matriz6 [i] [j]); 
					printf(" ");
				}
				printf("\n");
			}
			
} 
*/
