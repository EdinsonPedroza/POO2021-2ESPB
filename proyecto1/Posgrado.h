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
#include<fstream>
#include <list>
#include <stdlib.h>

// Inclusion de librerias
using namespace std;



class Posgrado
{
private: //Atributos
	
	list<DetalleActa> criterios;
    map<int, Acta> actas;
    Acta acta1;

public:		  //Metodos
	Posgrado(); //Constructor
	Posgrado(string nombre);
	void crearActa();
	void calificarCriterios();
	void modificarCriterios();
	void verActa();
	void exportarActa();

	void mostrarCriterios();
    Acta getActa1();

	// Gets and sets;
    //	void mostrarActas();
	string getNombre();
};
#endif /* !TIENDA_H */
