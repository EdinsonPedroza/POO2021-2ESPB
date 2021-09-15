#ifndef DETALLEACTA_H
#define DETALLEACTA_H

#include <iostream>
#include <stdlib.h>
#include "Acta.h"
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
    int cantCriterios;
    Criterio criterios;
public:

    DetalleActa();
	DetalleActa(vector<Criterio>, float calificacionJurado1, float calificacionJurado2,string comentarios);
    void calificarCriterios();
    //Constructor
    // Gets y sets
    void setCalificacionJurado1 (float calificacionJurado1);
    void setCalificacionJurado2 (float calificacionJurado2);
    void setComentarios (string comentarios);
    void setListaCriterios(vector <Criterio>);

    float getCalificacionJurado1 ();
    float getCalificacionJurado2 ();
    void getComentarios ();


};

#endif // DETALLEACTA_H