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

    Acta acta1;

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

    cout <<"Ingrese el nombre del trabajo: ";
    getline(cin,nombreTrabajo);
    acta1.setNombreTrabajo(nombreTrabajo);
    cin.ignore();

    cout <<"Ingrese el nombre del director: ";
    getline(cin,director);
    acta1.setDirector(director);
    cin.ignore();

    cout <<"Ingrese el tipo de trabajo 1.Aplicado 2.Investigacion: ";
    cin>>trabajo;
    if (trabajo == 1){
        acta1.setTipotrabajo(Aplicado);
    }else{
        acta1.setTipotrabajo(investigacion);
    }

    // Adición al mapa de Actas
    actas.insert(std::pair<int, Acta>(numeroActa, acta1));
	
}

void Posgrado::calificarCriterios(){




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
