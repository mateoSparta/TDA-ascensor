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
	unsigned int contadorDePisos;
	unsigned int* llamadasDesdePiso;

	/*
	 * pre:  -
	 * post: lanza una excepción si 'piso' no está entre 0 y cantidadDePisos
	 */
	void validarPiso(unsigned int piso);

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
	 * post: 'piso' indica el piso al que se quiere llegar, 'piso' està entre 0
	 * y CantidadDePisos
	 */
	unsigned int llamarAlPiso(unsigned int piso);

	/*
	 * pre:  -
	 * post: devuelve la cantidad de pisos por los que pasò el ascensor hasta el
	 * 		 momento
	 */
	unsigned int getPisosRecorridos();

	/*
	 * pre:  'piso' està entre 0 y CantidadDePisos
	 * post: devuelve la cantidad de veces que el ascensor parò en ese piso
	 */
	unsigned int getLlamadasDesdePiso(unsigned int piso);

    /*
     * pre:  -
     * post: libera los recursos asociados.
     */
	~Ascensor();
};

#endif /* ASCENSOR_H_ */
