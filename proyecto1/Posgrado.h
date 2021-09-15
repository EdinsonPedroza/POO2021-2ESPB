#ifndef POSGRADO_H
//Guardas
#define POSGRADO_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iterator>
#include "DetalleActa.h"
#include "Acta.h"
#include <list>

// Inclusion de librerias
using namespace std;

Acta acta1;

class Posgrado
{
private: //Atributos
	
	list<DetalleActa> criterios;
    map<int, Acta> actas;


public:		  //Metodos
	Posgrado(); //Constructor
	Posgrado(string nombre);
	void crearActa();
	void calificarCriterios();
	void modificarCriterios();
	void verActa();
	void exportarActa();

	void agregarCriterio();
	void mostrarCriterios();

	// Gets and sets;
    //	void mostrarActas();
	string getNombre();
};
#endif /* !TIENDA_H */
