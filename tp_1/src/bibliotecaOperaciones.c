/*
 * bibliotecaOperaciones.c
 *
 *  Created on: 16 abr 2022
 *      Author: Franc
 */

#include "bibliotecaOperaciones.h"

float Sumar(float primerNumero, float segundoNumero)
{
	float resultado;
	resultado = primerNumero+segundoNumero;

	return resultado;
}

float Restar(float primerNumero, float segundoNumero)
{
	float resultado;
	resultado = primerNumero-segundoNumero;

	return resultado;
}

float Multiplicar(float primerNumero, float segundoNumero)
{
	float resultado;
	resultado = primerNumero*segundoNumero;

	return resultado;
}

float Dividir(float primerNumero, float segundoNumero)
{
	float resultado;
	resultado = primerNumero/segundoNumero;

	return resultado;
}

float CalcularCostoDebito(float precio, int descuento)
{
	float ret;
	ret = Multiplicar(precio, descuento);
	ret = ret/100;
	ret = precio - ret;

	return ret;
}

float CalcularCostoTarjeta(float precio, int interes)
{
	float ret;
	ret = Multiplicar(precio, interes);
	ret = ret/100;
	ret = precio + ret;

	return ret;
}

float CalcularPagoBitcoin(float precioPesos, float precioBc)
{
	float ret;
	ret = Dividir(precioPesos, precioBc);
	return ret;
}

float CalcularPrecioUnitario(float precio, float kilometros)
{
	float ret;
	ret = Dividir(precio, kilometros);
	return ret;
}

float CalcularDiferenciaDeCostos(float precioAerolineas, float precioLatam)
{
	float ret;
	ret = Restar(precioAerolineas, precioLatam);
	if(ret<0)
	{
		ret= ret * -1; //Contempla los numeros negativos
	}

	return ret;
}

