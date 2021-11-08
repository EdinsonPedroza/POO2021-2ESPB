#ifndef ACTA_H
//Guardas
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Criterio.h"
#include "DetalleActa.h"
#include <string>

// Inclusion de librerias
using namespace std;

enum tipoTrabajo { investigacion , Aplicado };
enum estadoTrabajo {aprobado, reprobado};
class Acta
{
private: //Atributos

	string nombreTrabajo, autor, director, jurado1, jurado2, fecha, coodirector;
	int numeroActa;
	float notaFinal;
    tipoTrabajo tipoDeTrabajo;
    estadoTrabajo estadoDeTrabajo;
    DetalleActa detalles;

public:		   //Metodos
	Acta(); //Constructor

	void mostrarActa();
    void definirEstadoCalificacion();
    void llamarPonderacion();
    void llamartexto();

    //Sets and gets
    void setNombreTrabajo(string nombreTrabajo);
    void setAutor(string autor);
    void setDirector(string director);
    void setJurado1(string jurado1);
    void setjurado2(string jurado2);
    void setFecha(string fecha);
    void setCoodirector(string coodirector);
    void setNumeroActa(int numeroActa);
    void setnotaFinal(float notaFinal);
    void setTipotrabajo(tipoTrabajo tipo);
    void setDetalleActa(DetalleActa detalles);

    string getNombreTrabajo();
    string getAutor();
    string getDirector();
    string getJurado1();
    string getjurado2();
    string getFecha();
    string getCoodirector();
    float getnotaFinal();
    estadoTrabajo getEstado();
    int getNumeroActa();
};
#endif //ACTA_H