

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main (){

//datos previos
int preciolamp[4]={100,50,75,20};
int stock[4]={20,25,50,60};
int modeloLampara [4]={1,2,3,4};
int numEmpleado [4]={1,2,3,0};
//matrices resultantes
int matrizVentas [4][4]= {{0},{0}};
int matrizPedidos [4][4]= {{0},{0}};
//variables de datos ingresados por el usuario
int nPedido=0;
int nCliente=0;
int mLampara=0;
int cLampara=0;
int nEmpleado=0;
int vPedido=0;
//contadores
int pAtendido=0;
int lamparaMasVendida[4]={0};
int MasVendida=0;
int mayorVendedorModelo[4]={0};
int aux1=0;
int aux2=0;

 //variables de ciclos
 int i=0;
 int j=0;
 int k=0;
 int l=0;
    
 
 //inicio del programa mostrando el stock inicial y precios
 printf ("**Programa de facturacion**\n\n\n");
 printf ("Stock para modelos de lamparas:  ");
    for (i=0;i<4;i++){
    	printf ("%i)%i   ", i+1, stock[i]);
	}
 printf ("\nEl precio es de :                ");
 	for (i=0;i<4;i++){
    	printf ("$%i    ", preciolamp[i]);
	}
	
	
	//inicio del programa
    printf ("\n\nIngrese el numero de pedido. (0 para salir): \n");
        scanf("%i", &nPedido);
        
    while (nPedido!=0){
        printf ("Ingrese el numero de cliente:\n");
            scanf ("%i", &nCliente);
        printf ("Ingrese el numero del modelo de la lampara que desea comprar (1 a 4): \n ");
            scanf ("%i", &mLampara);
        printf ("Ingrese la cantidad pedida:\n");
            scanf ("%i", &cLampara);
            
            if (cLampara>stock[mLampara]){
            	printf ("La cantidad pedida es mayor al stock, quedara pendiente\n");
            	//stock[mLampara]=stock[mLampara]+cLampara;   	
			}else{
				printf ("Ingrese numero del empleado que atendio el pedido(1 a 3):\n");
            	scanf ("%i", &nEmpleado);
            	lamparaMasVendida[mLampara]++;
            	matrizVentas [mLampara][nEmpleado]= matrizVentas [mLampara][nEmpleado] + cLampara;
            	matrizPedidos [mLampara][nEmpleado]++;
            	//valor del pedido
            	vPedido= preciolamp[mLampara]*cLampara;
            	printf ("El monto a cobrar es %i:\n", vPedido);
			}     
		
		printf ("\n\nIngrese el numero de pedido. (0 para salir): \n");
        scanf("%i", &nPedido);   
        
    }
    
    //procesamiento de datos
    // lamparas mas vendidas en orden
	for (i=0; i<4; i++) 
	{
		for (j=i+1; j<4; j++) 
		{
			if(lamparaMasVendida[j]<lamparaMasVendida[i]) 
			{
                aux1=lamparaMasVendida[i];
                lamparaMasVendida[i]=lamparaMasVendida[j];
                lamparaMasVendida[j]=aux1;
            }
        }
    }
    
    // mayor venta por modelo de lampara por empleado
    
    	for (i=0; i<4; i++){  
    	for (j=0; j<4; j++){
    		
    		//Segundo ciclo
			for (k=0; k<4; k++){
				for (l=0; l<4; l++){
	              if (matrizVentas[k][l]<matrizVentas[i][j]) //superimportante el condicional --> &&(k!=i||l!=j))
	              {
	              mayorVendedorModelo[i]= l;
	                           
	              } 
         		}
        	}
      	}
	}
    
    printf( "Los modelos de las lamparas mas vendidas fueron: \n");
    for( i=0; i<4; i++ ){
			 		printf( "%i de lamparas para el modelo numero %i\n", lamparaMasVendida[i], i+1);
				}
    
    //impresión de datos finales
	//impresion de pedidos por tipo de lampara
	
		printf( "Candidad de pedidos atendidos para cada tipo de lampara: \n");
		printf( "Numero de empleado:    1     2     3\n");
			for( i=0; i<4; i++ ){
				printf( "Modelo de lampara %i: \n", i+1);
			 	for( j=0; j<3; j++ ){
			 		printf( "%i     ", matrizPedidos[i][j] );
				}
				printf( "\n");
			}
    
    //impresion de   mayor venta por modelo de lampara por empleado

    printf( "Los modelos de las lamparas por empleados mas vendidas fueron: \n");
    for( i=0; i<4; i++ ){
			 		printf( "El empleado numero %i para la lampara modelo  %i\n", mayorVendedorModelo[i], i+1);
				}
    
    
    //stock final
	printf ("Stock final para modelos de lamparas: \n");
    for (i=0;i<4;i++){
    	printf ("%i)%i   ", i+1, stock[i]);
	}
    
    return 0;
}
