/*
 ============================================================================
 Name        : TP_1.c
 Author      : Franco R. - div H
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar Kil�metros: ( km=x)

2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:

3. Calcular todos los costos:

a) Tarjeta de d�bito (descuento 10%)
b) Tarjeta de cr�dito (inter�s 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)

4. Informar Resultados
�Latam:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerol�neas:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r

La diferencia de precio es : r �

5. Carga forzada de datos

6. Salir
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaTP1.h"

#define PORCENTAJE_DESCUENTO 10
#define PORCENTAJE_INTERES 25
#define PRECIO_BITCOIN 4606954.55
#define KILOMETROS_FORZADOS	7090
#define PRECIO_A 1335000.66
#define PRECIO_L 1350000.76



int main(void) {
	setbuf(stdout, NULL);

	int respuesta;
	int respuestaKm;
	int respuestaAerolineas;
	int respuestaLatam;

	float kilometrosIngresados;
	float precioAerolineasIngresado;
	float precioLatamIngresado;

	int opcion;

	float costoConDescuentoA;
	float costoConInteresA;
	float costoEnBitcoinA;
	float costoPrecioUnitarioA;

	float costoConDescuentoL;
	float costoConInteresL;
	float costoEnBitcoinL;
	float costoPrecioUnitarioL;
	float diferenciaCostos;

	do
	{
		//DesplegarMenu();

		respuesta = utn_getNumero(&opcion,"\n1.Ingresar Km.\n2.Ingresar Precio de Vuelos\n3.Calcular todos los costos\n4.Informar Resultados\n5.Carga forzada de datos\n6.SALIR", "ERROR, no es una selecci�n v�lida", 1, 6,2);

		if(respuesta==0)
		{
			switch(opcion)
			{
			case 1:

				respuestaKm=utn_getFloat(&kilometrosIngresados, "ingrese los kil�metros", "�ERROR! los kil�metros no pueden cero/negativos ni mayores a 100000", 1, 100000, 2);
				if(respuestaKm!=0)
				{
					printf("Algo sali� mal en la carga de kil�metros.");
				}
				break;
			case 2:
				respuestaAerolineas= utn_getFloat(&precioAerolineasIngresado, "ingrese el precio de Aerolineas", "�ERROR! re ingrese un precio correcto", 1, 999999, 2);
				if(respuestaAerolineas!=0)
				{
					printf("Algo sali� mal en la carga del precio A.");
				}
				//printf("\nPrecio Aerolineas: %.2f", precioAerolineasIngresado);

				respuestaLatam = utn_getFloat(&precioLatamIngresado, "ingrese el precio de Latam", "�ERROR! re ingrese un precio correcto", 1, 999999, 2);
				if(respuestaLatam!=0)
				{
					printf("Algo sali� mal en la carga del precio L.");
				}


				break;
			case 3:
				if(kilometrosIngresados!=0 && precioAerolineasIngresado!=0 && precioLatamIngresado !=0)
				{
					//Aerolineas
					costoConDescuentoA=CalcularCostoDebito(precioAerolineasIngresado, PORCENTAJE_DESCUENTO);
					costoConInteresA=CalcularCostoTarjeta(precioAerolineasIngresado, PORCENTAJE_INTERES);
					costoEnBitcoinA=CalcularPagoBitcoin(precioAerolineasIngresado, PRECIO_BITCOIN);
					costoPrecioUnitarioA=CalcularPrecioUnitario(precioAerolineasIngresado, kilometrosIngresados);

					//Latam

					costoConDescuentoL=CalcularCostoDebito(precioLatamIngresado, PORCENTAJE_DESCUENTO);
					costoConInteresL=CalcularCostoTarjeta(precioLatamIngresado, PORCENTAJE_INTERES);
					costoEnBitcoinL=CalcularPagoBitcoin(precioLatamIngresado, PRECIO_BITCOIN);
					costoPrecioUnitarioL=CalcularPrecioUnitario(precioLatamIngresado, kilometrosIngresados);
					diferenciaCostos= CalcularDiferenciaDeCostos(precioAerolineasIngresado, precioLatamIngresado);

					puts("\n �Calculos de costos realizados!\n");
				}

				break;
			case 4:
				DesplegarMenu(costoConDescuentoL, costoConInteresL, costoEnBitcoinL, costoPrecioUnitarioL,costoConDescuentoA, costoConInteresA, costoEnBitcoinA, costoPrecioUnitarioA, diferenciaCostos);
				break;
			case 5:
				kilometrosIngresados=KILOMETROS_FORZADOS;
				precioAerolineasIngresado=PRECIO_A;
				precioLatamIngresado=PRECIO_L;

				//Aerolineas
				costoConDescuentoA=CalcularCostoDebito(precioAerolineasIngresado, PORCENTAJE_DESCUENTO);
				costoConInteresA=CalcularCostoTarjeta(precioAerolineasIngresado, PORCENTAJE_INTERES);
				costoEnBitcoinA=CalcularPagoBitcoin(precioAerolineasIngresado, PRECIO_BITCOIN);
				costoPrecioUnitarioA=CalcularPrecioUnitario(precioAerolineasIngresado, kilometrosIngresados);
				//Latam

				costoConDescuentoL=CalcularCostoDebito(precioLatamIngresado, PORCENTAJE_DESCUENTO);
				costoConInteresL=CalcularCostoTarjeta(precioLatamIngresado, PORCENTAJE_INTERES);
				costoEnBitcoinL=CalcularPagoBitcoin(precioLatamIngresado, PRECIO_BITCOIN);
				costoPrecioUnitarioL=CalcularPrecioUnitario(precioLatamIngresado, kilometrosIngresados);
				diferenciaCostos= CalcularDiferenciaDeCostos(precioAerolineasIngresado, precioLatamIngresado);
				puts("\n �Carga forzada realizada realizados!\n");
				DesplegarMenu(costoConDescuentoL, costoConInteresL, costoEnBitcoinL, costoPrecioUnitarioL,costoConDescuentoA, costoConInteresA, costoEnBitcoinA, costoPrecioUnitarioA, diferenciaCostos);
				break;
			case 6:

				break;
			}
		}
	}while(opcion!=6);

	puts("\n---Finalizaci�n de aplicaci�n---");


	return EXIT_SUCCESS;
}
