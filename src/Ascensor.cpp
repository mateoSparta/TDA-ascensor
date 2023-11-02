/*
 * Ascensor.cpp
 *
 *  Created on: 02/11/2023
 *      Author: algo2
 */

#include "Ascensor.h"
#include <string>

Ascensor::Ascensor(unsigned int pisos){

	if(pisos < 1){
		throw ("La cantidad de pisos debe ser mayor a 1");
	}
	this->cantidadDePisos = pisos;
	this->pisoActual = 0;
}

unsigned int Ascensor::getCantidadDePisos(){
	return this->cantidadDePisos;
}

unsigned int Ascensor::getPisoActual(){
	return this->pisoActual;
}


