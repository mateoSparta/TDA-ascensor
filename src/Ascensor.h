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
};

#endif /* ASCENSOR_H_ */
