/*
 * main.cpp
 *
 *  Created on: 02/11/2023
 *      Author: algo2
 */

/*
 * Diseñar la especificación e implementar el TDA Ascensor.
 *
 *	El Ascensor debe proveer operaciones para:
 *
 *	1. 	Inicializarlo recibiendo como parámetro la cantidad de pisos por los que
 *	 	se mueve (sin considerar la planta baja).
 *
 *	2. 	Devolver el número de piso en el que se encuentra, considerando 0 como
 *		la planta baja.
 *
 *	3.	Llamar desde un piso: debe moverlo y devolver la cantidad de pisos que el
 *		ascensor se movió para llegar al piso indicado.
 *
 *	4. 	Devolver la cantidad total de pisos que el ascensor subió y bajó.
 *
 *	5.	Devolver la cantidad de veces que fue a un piso.
 */

#include <string>
#include <iostream>
#include "Ascensor.h"

using namespace std;

int main() {

    cout << ".:: Ascensor ::." << endl;

    Ascensor ascensor(10);

    cout << "El ascensor se mueve entre PB y el piso "
    	 << ascensor.getCantidadDePisos() << endl;

    return 0;
}
