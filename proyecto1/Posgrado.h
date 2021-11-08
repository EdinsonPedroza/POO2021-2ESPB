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
	void crearActa();
	void calificarCriterios();
	void modificarCriterios();
	void verActa();
	void exportarActa();

};
#endif //POSGRADO_H
