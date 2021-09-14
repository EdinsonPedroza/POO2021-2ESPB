
#include "Acta.h"

Acta::Acta() {

}

void Acta::agregarDetalle(Criterio detalle) {

}

void Acta::mostrarActa() {
    cout<<"Numero del acta: "<< numeroActa <<endl;
    cout<<"Fecha: "<< fecha <<endl;
    cout<<"Autor: "<< autor <<endl;
   /* cout<<"Estado: "<< <<endl;
    cout<<"Nota: "<< <<endl;
    cout<<"nombre de los jurados : "<< <<" y "<< <<endl;
    cout<<"Director: "<< <<endl;*/
}






//sets y gets



string Acta::getNombreTrabajo() {
    return this->nombreTrabajo;
}

string Acta::getDirector() {
    return this->director;
}

string Acta::getAutor() {
    return autor;
}

string Acta::getEnfasis() {
    return this->enfasis;
}

string Acta::getJurado1() {
    return this->jurado1;
}

string Acta::getjurado2() {
    return this->jurado2;
}

string Acta::getPeriodo() {
    return this->periodo;
}

string Acta::getFecha() {
    return this->fecha;
}

string Acta::getCoodirector() {
    return this->coodirector;
}

void Acta::setNombreTrabajo(string nombreTrabajo) {
    this->nombreTrabajo = nombreTrabajo;
}

void Acta::setAutor(string autor) {
    this->autor = autor;
}

void Acta::setDirector(string director) {
    this->director = director;
}

void Acta::setEnfasis(string enfasis) {
    this->enfasis = enfasis;
}

void Acta::setJurado1(string jurado1) {
    this->jurado1 = jurado1;
}

void Acta::setjurado2(string jurado2) {
    this->jurado2 = jurado2;
}

void Acta::setPeriodo(string periodo) {
    this->periodo = periodo;
}

void Acta::setFecha(string fecha) {
    this->fecha = fecha;
}

void Acta::setCoodirector(string coodirector) {
    this->coodirector = coodirector;
}

void Acta::setNumeroActa(int numeroActa) {
    this->numeroActa = numeroActa;
}

void Acta::setnotaFinal(float notaFinal) {
    this->notaFinal = notaFinal;
}

void Acta::setTipotrabajo(tipoTrabajo tipo) {
    this->tipoDeTrabajo = tipo;
}

int Acta::getNumeroActa() {
    return this->numeroActa;
}
