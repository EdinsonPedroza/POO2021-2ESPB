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

	string nombreTrabajo, autor, director, enfasis, jurado1, jurado2, periodo, fecha, coodirector;
	int numeroActa;
	float notaFinal;
    tipoTrabajo tipoDeTrabajo;
    estadoTrabajo estadoDeTrabajo;
	vector<Criterio> criterios;
    DetalleActa detalles;

public:		   //Metodos
	Acta(); //Constructor

	// Adiciona información que detalla un producto vendido, su cantidad y valor a pagar
	void agregarDetalle(Criterio detalle);

	/* Presenta toda la información de la factura de forma grafica */
	void mostrarActa();

    //Sets and gets
    void setNombreTrabajo(string nombreTrabajo);
    void setAutor(string autor);
    void setDirector(string director);
    void setEnfasis(string enfasis);
    void setJurado1(string jurado1);
    void setjurado2(string jurado2);
    void setPeriodo(string periodo);
    void setFecha(string fecha);
    void setCoodirector(string coodirector);
    void setNumeroActa(int numeroActa);
    void setnotaFinal(float notaFinal);
    void setTipotrabajo(tipoTrabajo tipo);
    void setDetalleActa(DetalleActa detalles);

    string getNombreTrabajo();
    string getAutor();
    string getDirector();
    string getEnfasis();
    string getJurado1();
    string getjurado2();
    string getPeriodo();
    string getFecha();
    string getCoodirector();
    tipoTrabajo getTipotrabajo();
    float getnotaFinal();
    estadoTrabajo getEstado();
    int getNumeroActa();
    vector<Criterio> getListaDetalles();
    void definirEstadoCalificacion();
    void llamarPonderacion();
    void llamartexto();
};
#endif //ACTA_H