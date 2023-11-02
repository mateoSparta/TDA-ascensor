/*
 * Ascensor.h
 *
 *  Created on: 02/11/2023
 *      Author: algo2
 */

#ifndef ASCENSOR_H_
#define ASCENSOR_H_

class Ascensor {

private:

	unsigned int cantidadDePisos;
	unsigned int pisoActual;

public:

	/*
	 * pre:  'pisos' indica la cantidad de pisos que el ascensor puede recorrer
	 * 		 (sin contar PB), 'pisos' debe ser mayor a 0
	 * post: se crea el ascensor en PB con la opsibilidad de moverse entre 1-'pisos'
	 */
	Ascensor(unsigned int pisos);

	/*
	 * pre:	 -
	 * post: devuelve la cantidad de pisos a los que puede acceder el ascensor
	 */
	unsigned int getCantidadDePisos();

	/*
	 * pre: -
	 * post: devuelve el piso en el que se encuentra el ascensor, si està en PB
	 * 		 devuelve 0
	 */
	unsigned int getPisoActual();

	/*
	 * pre:  -
	 * post: 'piso' indica el piso al que se quiere llegar, 'piso' debe ser mayor o
	 * 		 igual a 0 y menor o igual a CantidadDePisos
	 */
	unsigned int llamarAlPiso(unsigned int piso);
};

#endif /* ASCENSOR_H_ */
