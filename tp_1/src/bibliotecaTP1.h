/*
 * bibliotecaTP1.h
 *
 *  Created on: 16 abr 2022
 *      Author: Franc
 */

#ifndef BIBLIOTECATP1_H_
#define BIBLIOTECATP1_H_

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaOperaciones.h"

int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float min, float max, int reintentos);
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int min, int max, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char min, char max, int reintentos);
void DesplegarMenu(float debitoL, float creditoL, float btL, float precioUnitL, float debitoA, float creditoA, float btA, float precioUnitA, float diferenciaPrecio);




#endif /* BIBLIOTECATP1_H_ */
