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
    vector<Criterio> listaCriterios;

public:
    Criterio();
    Criterio(int identificador, string texto, float ponderacion);

    void crearCriterios();
	void mostrarCriterio();

	// Gets and sets

	void setIdentificador();
    void setTexto();
    void setPonderacion();

    vector<Criterio> getCriterios();
    void setlistaCriterios(vector<Criterio>);
    float getPonderacion();
};


#endif // CRITERIO_H
