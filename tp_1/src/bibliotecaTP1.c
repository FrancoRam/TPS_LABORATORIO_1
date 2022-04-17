/*
 * bibliotecaTP1.c
 *
 *  Created on: 16 abr 2022
 *      Author: Franc
 */

#include "bibliotecaTP1.h"

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int min, int max, int reintentos)
{
	int ret;
	ret= -1; //-1 es un indicador num�rico de que algo fall�.
	int bufferInt; //variable transitoria o auxiliar que utilizarmos hasta el momento de verificar que el valor ingresado por el usuario es un valor "correcto".

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && min<max && reintentos > -1)
	{
		do
		{
			printf("%s \n", mensaje); // ej: solicita un n�mero al usuario;
			scanf("%d", &bufferInt); // guarda el dato entero en la variable auxiliar

			if(bufferInt >= min && bufferInt <= max)
			{

				*pResultado = bufferInt; // ac� una vez verificado que el valor ingresado x usuario est� dentro del rango preestablecido se asigna la var Auxiliar a la var que llamar� al arguemento pResultado.
				ret=0;
				break;
			}
			else
			{
				printf("%s \n", mensajeError);
				reintentos--;
			}
		}while(reintentos > -1);

	}

	return ret;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char min, char max, int reintentos)
{
	int ret;
	ret= -1; //-1 es un indicador num�rico de que algo fall�.
	char bufferChar; //variable transitoria o auxiliar que utilizarmos hasta el momento de verificar que el valor ingresado por el usuario es un valor "correcto".

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && min<max && reintentos > -1)
	{
		do
		{
			printf("%s \n", mensaje); // ej: solicita un n�mero al usuario;
			fflush(stdin);
			scanf("%c", &bufferChar); // guarda el dato entero en la variable auxiliar

			if(bufferChar >= min && bufferChar <= max)
			{

				*pResultado = bufferChar; // ac� una vez verificado que el valor ingresado x usuario est� dentro del rango preestablecido se asigna la var Auxiliar a la var que llamar� al arguemento pResultado.
				ret=0;
				break;
			}
			else
			{
				printf("%s \n", mensajeError);
				reintentos--;
			}
		}while(reintentos > -1);

	}

	return ret;
}

int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float min, float max, int reintentos)
{
	int ret;
	ret= -1; //-1 es un indicador num�rico de que algo fall�.
	float bufferFloat; //variable transitoria o auxiliar que utilizarmos hasta el momento de verificar que el valor ingresado por el usuario es un valor "correcto".

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && min<max && reintentos > -1)
	{
		do
		{
			printf("%s \n", mensaje); // ej: solicita un n�mero flotante al usuario;
			scanf("%f", &bufferFloat); // guarda el dato entero en la variable auxiliar

			if(bufferFloat >= min && bufferFloat <= max)
			{

				*pResultado = bufferFloat; // ac� una vez verificado que el valor ingresado x usuario est� dentro del rango preestablecido se asigna la var Auxiliar a la var que llamar� al arguemento pResultado.
				ret=0;
				break;
			}
			else
			{
				printf("%s \n", mensajeError);
				reintentos--;
			}
		}while(reintentos > -1);

	}

	return ret;
}

void DesplegarMenu(float debitoL, float creditoL, float btL, float precioUnitL, float debitoA, float creditoA, float btA, float precioUnitA, float diferenciaPrecio)
{

	printf("INFORMACI�N DE VUELOS\n");
	printf("\n----------\n");

	printf("4. Informar Resultados \n");
		printf("Aerol�neas: \n");
		printf("a) Precio con tarjeta de d�bito:$ %.2f \n",debitoA);
		printf("b) Precio con tarjeta de cr�dito:$ %.2f \n",creditoA);
		printf("c) Precio pagando con bitcoin :$ %.4f \n",btA);
		printf("d) Precio unitario:$ %.2f \n\n",precioUnitA);

		printf("Latam: \n");
		printf("a) Precio con tarjeta de d�bito:$ %.2f \n", debitoL);
		printf("b) Precio con tarjeta de cr�dito:$ %.2f\n",creditoL);
		printf("c) Precio pagando con bitcoin :$ %.4f \n",btL);
		printf("d) Precio unitario:$ %.2f \n\n",precioUnitL);

		printf("La diferencia de precio es :$ %.2f \n",diferenciaPrecio);
		printf(" \n");

}

