
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

void Criterio::crearCriterios() {
    vector<Criterio> listaCriterios;
    int numeroActa, contador = 1  ;
    string textoCriterio, observaciones;

    cout << "Ingrese el numero de acta: " << endl;
    cin>>numeroActa;

    int i;
    float ponderacion;

    do
    {
        // Criterios por defecto

        if (contador == 1)
        {
            textoCriterio = "Desarrollo y profundidad en el tratamiento del tema\n";
            ponderacion = 20;
        }
        else if (contador == 2)
        {
            textoCriterio = "Desafio academico y cientifico del tema\n";
            ponderacion = 15;
        }
        else if (contador == 3)
        {
            textoCriterio = "Cumplimiento de los objetivos propuestos\n";
            ponderacion = 10;
        }
        else if (contador == 4)
        {
            textoCriterio = "Creatividad e innovacion de las soluciones y desarrollos propuestos\n";
            ponderacion = 10;
        }
        else if (contador == 5)
        {
            textoCriterio = "Validez de los resultados y conclusiones\n";
            ponderacion = 20;
        }
        else if (contador == 6)
        {
            textoCriterio = "Manejo y procesamiento de la informacion y bibliografia\n";
            ponderacion = 10;
        }
        else if (contador == 7)
        {
            textoCriterio = "Calidad y presentacion del documento escrito\n";
            ponderacion = 7.5;
        }
        else if (contador == 8) {
            textoCriterio = "Presentacion oral\n";
            ponderacion = 7.5;
        }
        listaCriterios.push_back(Criterio(numeroActa, textoCriterio, ponderacion));
        contador++;
        cout<<textoCriterio<<endl;
    } while (contador <=8);

    Criterio criterios;
    criterios.setlistaCriterios(listaCriterios);
    criterios.mostrarCriterio();
}

void Criterio::setIdentificador() {

}

void Criterio::setTexto() {

}

void Criterio::setPonderacion() {

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

