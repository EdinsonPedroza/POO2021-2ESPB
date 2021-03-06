#include "Acta.h"
#include "Posgrado.h"

Acta::Acta() {
}


void Acta::mostrarActa() {
    Posgrado posgrado;
    cout << "Numero del acta: " << numeroActa << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Autor: " << autor << endl;
    cout << "Nombre del trabajo: " << nombreTrabajo << endl;
    if (estadoDeTrabajo == 0){
        cout << "Estado: Aprobado" << endl;
    }else{
        cout << "Estado: Reprobado" << endl;
    }
    cout << "Nota: " << notaFinal << endl;

    cout << "nombre de los jurados : " << jurado1 << " y " << jurado2 << endl;

    cout << "Director: " << director << endl;

    cout << "Coodirector: " << coodirector << endl;


}




void Acta::definirEstadoCalificacion() {
    if (this->notaFinal > 3.5){
        this->estadoDeTrabajo = aprobado;
    }else{
        this->estadoDeTrabajo = reprobado;
    }
}

void Acta::llamartexto() {
    detalles.modificarTextoCriterios();
}

void Acta::llamarPonderacion() {
    detalles.modificarPonderado();
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



string Acta::getJurado1() {
    return this->jurado1;
}

string Acta::getjurado2() {
    return this->jurado2;
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


void Acta::setJurado1(string jurado1) {
    this->jurado1 = jurado1;
}

void Acta::setjurado2(string jurado2) {
    this->jurado2 = jurado2;
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


float Acta::getnotaFinal() {
    return notaFinal;

}

estadoTrabajo Acta::getEstado() {
    return estadoDeTrabajo;

}

void Acta::setDetalleActa(DetalleActa detalles) {
    this->detalles=detalles;
}
