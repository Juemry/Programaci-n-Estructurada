#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int matrizDatos [][5]= {{0},{0}};
	
	//int numservicio[3]={0}, numedificio[3]={0}, numbarrio[3]={0}, vecvalor [10] = {0};
	int servicio, edificio, barrio, trabajo, valor, suma, litros;
	//float promediovalortrabajo; 
	//int aux, i; 
	
	int litrosPorBarrio[]={0};
	int trabajosPorEdificio[3]={0};
	//int trabajosPorEdificio[9]={0};
	float promedio=0;
	int edificioMenosTrabajos=0;
	int totalValor=0;
	int menorCantidad=0;
	int cantidadServicios=0;

	int aux1=0;
	int aux2=0;
	
	//variables de ciclos
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	
	printf("Bienvenido!  \n");

	printf(" Ingrese num de trabajo:\n ");
	scanf("%d", &trabajo);
	while(trabajo!=0){
		printf("Tipo de servicio: ");
		printf("\n Desinfeccion de hormigas \n Desinfeccion de cucarachas \n Desinfeccion de ratas \n Su numero es: ");
		scanf("%d", &servicio);
		while((servicio<1)||(servicio>3)){
		printf("\n Ingrese un servicio correcto: ");
		scanf("%d", &servicio);
		}
		matrizDatos[i][0]=matrizDatos[i][0]+servicio;
		
		
		printf("Numero de barrio: ");
		printf("\n Almagro \n Parque Patricios \n Belgrano \n Su numero es: ");
		scanf("%d", &barrio);
		while((barrio<1)||(barrio>3)){
		printf("\n Ingrese un barrio correcto: ");
		scanf("%d", &barrio);
		}
		matrizDatos[i][1]=matrizDatos[i][1]+barrio;
		
		printf("Numero de edificio: ");
		/*if(barrio==1){
		printf("\n Edificio 1 \n Edificio 2 \n Edificio 3 \n Su numero es: ");
		}
		if(barrio==2){
		printf("\n Edificio 4 \n Edificio 5 \n Edificio 6 \n Su numero es: ");
		}
		if(barrio==3){
		printf("\n Edificio 7 \n Edificio 8 \n Edificio 9 \n Su numero es: ");
		}*/
		scanf("%d", &edificio);
		while((edificio<1)||(edificio>9)){
		printf("\n Ingrese un numero de edificio correcto: ");
		scanf("%d", &edificio);
		}
		matrizDatos[i][2]=matrizDatos[i][2]+edificio;
		trabajosPorEdificio[edificio-1]++;

		
		
		printf("\n Ingrese la cantidad de Litros necesarios para realizar el trabajo : ");
		scanf("%d", &litros);
		matrizDatos[i][3]=matrizDatos[i][3]+litros;
		litrosPorBarrio[barrio-1]=litrosPorBarrio[barrio-1]+litros;
		
		printf("\n Ingrese el valor del trabajo : ");
		scanf("%d", &valor);
		matrizDatos [i][4]=matrizDatos [i][4]+valor;
		totalValor=totalValor+valor;
		cantidadServicios++;
				
		i++;
	
	printf(" Ingrese num de trabajo: \n ");
	scanf("%d", &trabajo);
	}


/*printf("Registro de datos: \n");
printf("servicio       barrio         edificio       litros         valor\n");    
	
for(j=0;j<=cantidadServicios;j++){	
	for(k=0;k<5;k++){
		printf(" %i             ", matrizDatos[k][j] );
	}	
}

printf("Registro de datos: \n");
printf("servicio       barrio         edificio       litros         valor\n");    
	
//Impresión de la matriz resultante

 for(j=0;j=cantidadServicios;j++){
	
	
	for(k=0;k=5;k++){
		printf(" %i             ", matrizDatos[j][k] );
	}	
}
*/


// valor promedio 
promedio=totalValor/cantidadServicios;
printf("El valor promedio de los trabajos es de: $%.2f  \n", promedio);

//cantidad de litros por barrio 
printf("La cantidad de litros por barrio fue de :\n");
for(k=0;k<3;k++){
printf("%d de litros en el barrio %d \n", litrosPorBarrio[k], k+1);	
}

//Menor cantidad de trabajos por edificio
for(j=0;j<3;j++){
	for (k=0; k<3; k++)
		{
		if(trabajosPorEdificio[k]>trabajosPorEdificio[j]){
		menorCantidad = trabajosPorEdificio[k];
		edificioMenosTrabajos = k;
			}
		}
}

printf("La menor cantidad de trabajos por edificio fue de %d trabajos en el edificio %d \n",edificioMenosTrabajos, menorCantidad);



return 0;

}
