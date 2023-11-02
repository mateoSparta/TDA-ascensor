/*
 * Ascensor.cpp
 *
 *  Created on: 02/11/2023
 *      Author: algo2
 */

#include "Ascensor.h"
#include <string>

using namespace std;

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

unsigned int Ascensor::llamarAlPiso(unsigned int piso){

	unsigned int desplazamiento;

	if(piso > this->cantidadDePisos){
		throw string("El piso ingresado no existe");
	}

	if(piso < this->pisoActual){
		desplazamiento = this->pisoActual - piso;
	} else {
		desplazamiento = piso - this->pisoActual;
	}

	this->pisoActual = piso;

	return desplazamiento;
}

