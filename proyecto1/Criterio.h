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

	void mostrarCriterio();

	// Gets and sets

	void setIdentificador(int id);
    void setTexto(string textoNuevo);
    void setPonderacion(float ponderacion);

    vector<Criterio> getCriterios();
    void setlistaCriterios(vector<Criterio>);
    float getPonderacion();
    string getTextoCriterio();
};


#endif // CRITERIO_H
