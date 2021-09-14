#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>
#include "DetalleActa.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Criterio
{
private: //Atributos

	DetalleActa criterio;
	int identificador;
    string texto;
    float ponderacion;

public:				  //Metodos

	Criterio(); //Constructor
    void crearCriterios();
	void mostrarCriterio();

	// Gets and sets
	void setCriterio(DetalleActa criterios);
	void setIdentificador();
    void setTexto();
    void setPonderacion();

};


#endif // CRITERIO_H
