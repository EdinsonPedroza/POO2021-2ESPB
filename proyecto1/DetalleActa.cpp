
#include "DetalleActa.h"

DetalleActa::DetalleActa(vector<Criterio> listaCriterios, float calificacionJurado1, float calificacionJurado2,string comentarios){
    this->listaCriterios = listaCriterios;
}

void DetalleActa::setCalificacionJurado1(float calificacionJurado1) {
    this-> calificacionJurado1 = calificacionJurado1;
}

void DetalleActa::setCalificacionJurado2(float calificacionJurado2) {
    this-> calificacionJurado2 = calificacionJurado2;
}

void DetalleActa::setComentarios(string comentarios) {

}

float DetalleActa::getCalificacionJurado1() {
    return calificacionJurado1;
}

float DetalleActa::getCalificacionJurado2() {
    return calificacionJurado2;
}

void DetalleActa::getComentarios() {

}

vector<Criterio> DetalleActa::getListaCriterios() {
    return this->listaCriterios;
}

void DetalleActa::setListaCriterios(vector<Criterio> listaCriterios) {
    this->listaCriterios = listaCriterios;
}

DetalleActa::DetalleActa() {

}
