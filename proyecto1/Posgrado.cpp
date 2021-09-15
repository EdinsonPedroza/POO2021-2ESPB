#include <iostream>
#include "Posgrado.h"
#include "Acta.h"

using namespace std;

Posgrado::Posgrado()
{   
}

void Posgrado::crearActa(){
    string nombreTrabajo, autor, director, enfasis, jurado1, jurado2, periodo, fecha, coodirector;
    int numeroActa, trabajo;



    cin.ignore();
    cout <<"Ingrese la fecha: dd/mm/aa: ";
    getline(cin,fecha);
    acta1.setFecha(fecha);

    cout <<"Ingrese el numero del acta: ";
    cin>>numeroActa;
    acta1.setNumeroActa(numeroActa);

    cin.ignore();
    cout <<"Ingrese el nombre del autor: ";
    getline(cin,autor);
    acta1.setAutor(autor);

    cin.ignore();
    cout <<"Ingrese el nombre del trabajo: ";
    getline(cin,nombreTrabajo);
    acta1.setNombreTrabajo(nombreTrabajo);

    cin.ignore();
    cout <<"Ingrese el nombre del director: ";
    getline(cin,director);
    acta1.setDirector(director);


    cout <<"Ingrese el tipo de trabajo 1.Aplicado 2.Investigacion: ";
    cin>>trabajo;
    if (trabajo == 1){
        acta1.setTipotrabajo(Aplicado);
    }else{
        acta1.setTipotrabajo(investigacion);
    }

    // Adición al mapa de Actas
    actas.insert(std::pair<int, Acta>(numeroActa, acta1));
    Criterio criterio;
    criterio.crearCriterios();

}

void Posgrado::calificarCriterios(){
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

    if (notaFinal >=3.5){
        acta1.setEstado(aprobado);
    }else{
        acta1.setEstado(reprobado);
    }
    

}

void Posgrado::modificarCriterios(){

}

void Posgrado::verActa(){
    for (map<int, Acta>::iterator pActa = actas.begin();
         pActa != actas.end(); pActa++)
    {
        Acta valor = pActa->second; // Se obtiene el valor asociado al mapa
        valor.mostrarActa();
    }
}

void Posgrado::exportarActa(){

}

Posgrado::Posgrado(string nombre) {

}
