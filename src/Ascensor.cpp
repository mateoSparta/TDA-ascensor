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
		throw string("La cantidad de pisos debe ser mayor a 1");
	}
	this->cantidadDePisos = pisos;
	this->pisoActual = 0;
	this->contadorDePisos = 0;
	this->llamadasDesdePiso = new unsigned int[this->cantidadDePisos + 1];

	this->llamadasDesdePiso[0] = 1;
	for (unsigned int i = 1; i <= this->cantidadDePisos; i++) {
		this->llamadasDesdePiso[i] = 0;
	}
}

unsigned int Ascensor::getCantidadDePisos(){
	return this->cantidadDePisos;
}

unsigned int Ascensor::getPisoActual(){
	return this->pisoActual;
}

unsigned int Ascensor::llamarAlPiso(unsigned int piso){

	unsigned int desplazamiento;

	this->validarPiso(piso);

	if(piso > this->cantidadDePisos){
		throw string("El piso ingresado no existe");
	}

	if(piso < this->pisoActual){
		desplazamiento = this->pisoActual - piso;
	} else {
		desplazamiento = piso - this->pisoActual;
	}

	this->pisoActual = piso;
	this->contadorDePisos += desplazamiento;
	this->llamadasDesdePiso[this->pisoActual]++;

	return desplazamiento;
}

unsigned int Ascensor::getPisosRecorridos(){

	return this->contadorDePisos;
}

unsigned int Ascensor::getLlamadasDesdePiso(unsigned int piso){

	return this->llamadasDesdePiso[piso];
}

void Ascensor::validarPiso(unsigned int piso){

    if (piso > this->cantidadDePisos) {
        throw string("Piso inexistente");
    } else if(piso == this->pisoActual){
    	throw string("Ya se encuentra en el piso");
    }
}

Ascensor::~Ascensor(){

    delete[] this->llamadasDesdePiso;
}
