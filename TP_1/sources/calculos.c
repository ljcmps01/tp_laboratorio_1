/*
 * calculos.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Administrador
 */
#include <stdlib.h>
#include <stdio.h>

float interes(float valor,float porcentaje ,int suba){
	if(suba){
		return valor*(1+porcentaje/100);
	}
	else{
		return valor*(1-porcentaje/100);
	}
}


float relacion(float numerador, float denominador){
	if(denominador){
		return numerador/denominador;
	}
	return 0;
}


