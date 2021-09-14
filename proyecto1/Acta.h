#ifndef ACTA_H
//Guardas
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Criterio.h"
#include <string>

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

enum tipoTrabajo { investigacion , Aplicado };

class Acta
{
private: //Atributos

	string nombreTrabajo, autor, director, enfasis, jurado1, jurado2, periodo, fecha, coodirector;
	int numeroActa;
	float notaFinal;
    tipoTrabajo tipoDeTrabajo;
	vector<Criterio> detalles;

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

    string getNombreTrabajo();
    string getAutor();
    string getDirector();
    string getEnfasis();
    string getJurado1();
    string getjurado2();
    string getPeriodo();
    string getFecha();
    string getCoodirector();
    int getNumeroActa();

	vector<Criterio> getDetalles() const { return detalles; }
};
#endif /* !FACTURA_H */