
#include "Criterio.h"


Criterio::Criterio(int identificador, string texto, float ponderacion)
{
    this->identificador = identificador;
    this->texto = texto;
    this->ponderacion = ponderacion;
}


void Criterio::setTexto(string textoNuevo) {
    this->texto=textoNuevo;
}

void Criterio::setPonderacion(float ponderacion) {
    this->ponderacion = ponderacion;
}

Criterio::Criterio() {

}

float Criterio::getPonderacion() {
    return this->ponderacion;
}

string Criterio::getTextoCriterio() {
    return texto;
}

