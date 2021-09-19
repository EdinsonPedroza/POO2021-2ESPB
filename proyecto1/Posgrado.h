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
	

    map<int, Acta> actas;

public:		  //Metodos
	Posgrado(); //Constructor
	Posgrado(string nombre);
	void crearActa();
	void calificarCriterios();
	void modificarCriterios();
	void verActa();
	void exportarActa();

	void mostrarCriterios();


	// Gets and sets;
    //	void mostrarActas();
	string getNombre();
    map<int, Acta> getActas();
};
#endif //POSGRADO_H
