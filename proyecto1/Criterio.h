#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>
#include <vector>
// Inclusion de librerias
using namespace std;

class Criterio
{
private: //Atributos

	int identificador;
    string texto;
    float ponderacion;

public:
    Criterio();
    Criterio(int identificador, string texto, float ponderacion);

	// Gets and sets

    void setTexto(string textoNuevo);
    void setPonderacion(float ponderacion);
    float getPonderacion();
    string getTextoCriterio();
};


#endif // CRITERIO_H
