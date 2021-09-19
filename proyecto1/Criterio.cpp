
#include "Criterio.h"

void Criterio::mostrarCriterio() {
    for(vector<Criterio>::iterator it = listaCriterios.begin(); it != listaCriterios.end(); it++){
    }
}



Criterio::Criterio(int identificador, string texto, float ponderacion)
{
    this->identificador = identificador;
    this->texto = texto;
    this->ponderacion = ponderacion;
}


void Criterio::setIdentificador(int id) {
    this->identificador=id;
}

void Criterio::setTexto(string textoNuevo) {
    this->texto=textoNuevo;
}

void Criterio::setPonderacion(float ponderacion) {
    this->ponderacion = ponderacion;
}

Criterio::Criterio() {

}

vector<Criterio> Criterio::getCriterios() {
}

void Criterio::setlistaCriterios(vector<Criterio> listaCriterios) {
    this->listaCriterios = listaCriterios;
}

float Criterio::getPonderacion() {
    return this->ponderacion;
}

string Criterio::getTextoCriterio() {
    return texto;
}

