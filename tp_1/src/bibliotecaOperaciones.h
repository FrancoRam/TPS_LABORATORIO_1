/*
 * bibliotecaOperaciones.h
 *
 *  Created on: 16 abr 2022
 *      Author: Franc
 */

#ifndef BIBLIOTECAOPERACIONES_H_
#define BIBLIOTECAOPERACIONES_H_

#include <stdio.h>
#include <stdlib.h>

float Sumar(float numeroUno, float numeroDos);
float Restar(float numeroUno, float numeroDos);
float Dividir(float numeroUno, float numeroDos);
float Multiplicar(float numeroUno, float numeroDos);

float CalcularCostoDebito(float precio, int descuento);
float CalcularCostoTarjeta(float precio, int interes);
float CalcularPagoBitcoin(float precioPesos, float precioBc);
float CalcularPrecioUnitario(float precio, float kilometros);
float CalcularDiferenciaDeCostos(float precioAerolineasIngresado, float precioLatamIngresado);


#endif /* BIBLIOTECAOPERACIONES_H_ */
