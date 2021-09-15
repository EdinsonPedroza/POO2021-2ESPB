
#include "DetalleActa.h"

DetalleActa::DetalleActa(vector<Criterio> listaCriterios, float calificacionJurado1, float calificacionJurado2,string comentarios){
    this->listaCriterios = listaCriterios;
    this-> calificacionJurado1 = calificacionJurado1;
    this-> calificacionJurado1 = calificacionJurado1;
    this-> comentarios = comentarios;

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

void DetalleActa::setListaCriterios(vector<Criterio> listaCriterios) {
    this->listaCriterios = listaCriterios;
}

DetalleActa::DetalleActa() {

}

void DetalleActa::calificarCriterios() {
    float calificacionj1, calificacionj2, notaFinal=0, notaCriterio;
    string comentario;
    DetalleActa detalle;
    Criterio criterio;

    for (int i=1; i<=8; i++){
        cout<<"Jurado 1. Ingrese la calificacion del criterio "<<i<<": "<<endl;
        cin>>calificacionj1;
        detalle.setCalificacionJurado1(calificacionj1);

        cout<<"Jurado 2. Ingrese la calificacion del criterio "<<i<<": "<<endl;
        cin>>calificacionj2;
        detalle.setCalificacionJurado2(calificacionj2);

        cout<<"Ingrese los comentarios del criterio "<<i<<": "<<endl;
        getline(cin, comentario);
        detalle.setComentarios(comentario);
        cin.ignore();

        notaFinal += (calificacionj1 + calificacionj2) * (criterio.getPonderacion()/100);
    }
    notaFinal/= 2;
    Acta acta;
    if (notaFinal >=3.5){
        acta.setEstado(aprobado);
    }else{
        acta.setEstado(reprobado);
    }

}
