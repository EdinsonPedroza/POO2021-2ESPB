#ifndef DETALLEACTA_H
#define DETALLEACTA_H

#include <iostream>
#include <stdlib.h>
#include "Criterio.h"
#include <vector>


// Inclusion de librerias
using namespace std;

class DetalleActa
{
private: //Atributos
	string comentarios;
    float calificacionJurado1, calificacionJurado2;
    vector<Criterio> listaCriterios;
public:

    DetalleActa();

    float calificarCriterios();
    void  crearCriterios();
    void modificarTextoCriterios();
    void modificarPonderado();
    void imprimirCriterios();
};

#endif // DETALLEACTA_H