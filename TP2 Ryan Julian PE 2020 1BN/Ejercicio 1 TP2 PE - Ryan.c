/*
1. La empresa www.ejercicios.com.ar, de venta de productos por
Internet, comercializa 10 productos los cuales se identifican por nros.
correlativos a partir del 1. Se debe realizar la carga de los precios de
dichos artículos y una vez efectuada averiguar e imprimir:
a. Precio máximo y nro. de artículo al que corresponde.
b. Precio mínimo y nro. de artículo al que corresponde.
c. Cantidad de artículos con precio superior al precio promedio.
d. Cantidad de artículos con precio superior a $100.
e. Listar los artículos por precio en orden ascendente
*/

#include <stdio.h>

int main ()
{
//Declaración de variables 

int i =0;
int j =0;
int numeroAuxiliar1 =0; 
int numeroAuxiliar2 = 0;
int posicionProductoMayorPrecio =0;
int posicionProductoMenorPrecio =0;
int productoMayorPrecio = 0;
int productoMenorPrecio  = 0;
int productosSuperioresACien = 0;
int productosSuperioresAPromedio = 0;
int sumaDelPromedio = 0;
int vectorNumeroDeProducto[10];
int vectorPrecio[10];
float promedio = 0;

//Solicitud de datos al usuario

for(i=0; i<10; i++)
	{	
	printf("Por favor, ingrese el precio del articulo %i \n", i+1);
	scanf("%i", &vectorPrecio[i]);
	}
	
printf("\nLos precios de los articulos ingresados son: \n");	

//Impresión de los datos ingresados

for(i=0; i<10; i++)
	{
	printf("El precio del articulo %i es $ %i\n", i+1, vectorPrecio[i]);	
	}


//a. Precio máximo y nro. de artículo al que corresponde.
//Obtención del precio máximo y su ubicación

for (i=0; i<10; i++)
	{
	if(vectorPrecio[i]>productoMayorPrecio){
	productoMayorPrecio = vectorPrecio[i];
	posicionProductoMayorPrecio = i+1;
		}
	}
	
//Impresión del precio máximo

	printf("\n\nEl precio mayor es: $ %i y el numero de articulo es %i \n\n", productoMayorPrecio,posicionProductoMayorPrecio);
	

//b. Precio mínimo y nro. de artículo al que corresponde.
//Obtención del precio minimo e intento de su ubicación

	productoMenorPrecio  = productoMayorPrecio;
	
for (i=0; i<10; i++)
	{
	if(vectorPrecio[i]<productoMenorPrecio){
	productoMenorPrecio = vectorPrecio[i];
	posicionProductoMenorPrecio = i+1;
		} 
	}
	
//Impresión del precio minimo	

	printf("El precio menor es: $ %i y el numero de articulo es %i \n\n", productoMenorPrecio,posicionProductoMenorPrecio);


//c. Cantidad de artículos con precio superior al precio promedio.
//Obteción del promedio

for(i=0; i<10; i++)
	{
	sumaDelPromedio += vectorPrecio[i];	
	}

promedio = (sumaDelPromedio)/10;

//Impresión del promedio

printf("El promedio de los precios es de: $ %.2f \n\n" , promedio);

//Contador para los productos que superan al promedio

for(i=0; i<10; i++)
	{
	if(vectorPrecio[i]>promedio)
	productosSuperioresAPromedio++;
	}
	
//Impresión de la cantidad de productos que superan al promedio

printf ("La cantidad de articulos con precio superior al promedio es de: %i \n\n", productosSuperioresAPromedio);


//d. Cantidad de artículos con precio superior a $100
//Contador para los productos con precio superior a $100

for(i=0; i<10; i++)
	{
	if(vectorPrecio[i]>100)
	productosSuperioresACien++;	
	}

//Impresión de la cantidad de productos que superan a $100

printf ("La cantidad de articulos con precio superior a $100 es de: %i \n\n", productosSuperioresACien);
	

//e. Listar los artículos por precio en orden ascendente
//Generación de un vector con las posiciones del producto

for (i=0; i<10; i++)
	{
		vectorNumeroDeProducto[i]=i;	
	}

//Ordenamiento ascendente por sustitución con un auxiliar de los valores del vector

for (i=0; i<10; i++) 
	{
	for (j=i+1; j<10; j++) 
		{
		if(vectorPrecio[j]<vectorPrecio[i]) 
			{
                numeroAuxiliar1=vectorPrecio[i];
                vectorPrecio[i]=vectorPrecio[j];
                vectorPrecio[j]=numeroAuxiliar1;
                numeroAuxiliar2=vectorNumeroDeProducto[i];
                vectorNumeroDeProducto[i]=vectorNumeroDeProducto[j];
                vectorNumeroDeProducto[j]=numeroAuxiliar2; 
            }
        }
    }

 //Impresión de los resultados

printf("Los articulos ordenados de manera ascendente segun su precio son: \n\n");	
 
for (i=0; i<10; i++)
	{
	printf("El precio del articulo %i es $ %i \n", vectorNumeroDeProducto[i]+1, vectorPrecio[i]);	
	}	
	
return 0;
}
