
#include "DetalleActa.h"
#include "Posgrado.h"

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

float DetalleActa::calificarCriterios() {
    float notaFinal=0;
    string comentario;

    for (int i=0; i<8; i++){
        cout<<"Jurado 1. Ingrese la calificacion del criterio "<<i+1<<": "<<endl;
        cin>>this->calificacionJurado1;


        cout<<"Jurado 2. Ingrese la calificacion del criterio "<<i+1<<": "<<endl;
        cin>>this->calificacionJurado2;

        cin.ignore();

        cout<<"Ingrese los comentarios del criterio "<<i+1<<": "<<endl;
        getline(cin, comentario);
        this->comentarios=comentario;

        notaFinal += ((calificacionJurado1 + calificacionJurado2)/2) * (listaCriterios[i].getPonderacion()/100);
    }
    cout<<notaFinal<<endl;
    return notaFinal;

}

void DetalleActa::crearCriterios() {

    int numeroActa, contador = 1  ;
    string textoCriterio, observaciones;
    int i;
    float ponderacion;

    do
    {
        // Criterios por defecto

        if (contador == 1)
        {
            textoCriterio = "1. Desarrollo y profundidad en el tratamiento del tema\n";
            ponderacion = 20;
        }
        else if (contador == 2)
        {
            textoCriterio = "2. Desafio academico y cientifico del tema\n";
            ponderacion = 15;
        }
        else if (contador == 3)
        {
            textoCriterio = "3. Cumplimiento de los objetivos propuestos\n";
            ponderacion = 10;
        }
        else if (contador == 4)
        {
            textoCriterio = "4. Creatividad e innovacion de las soluciones y desarrollos propuestos\n";
            ponderacion = 10;
        }
        else if (contador == 5)
        {
            textoCriterio = "5. Validez de los resultados y conclusiones\n";
            ponderacion = 20;
        }
        else if (contador == 6)
        {
            textoCriterio = "6. Manejo y procesamiento de la informacion y bibliografia\n";
            ponderacion = 10;
        }
        else if (contador == 7)
        {
            textoCriterio = "7. Calidad y presentacion del documento escrito\n";
            ponderacion = 7.5;
        }
        else if (contador == 8) {
            textoCriterio = "8. Presentacion oral\n";
            ponderacion = 7.5;
        }
        this->listaCriterios.push_back(Criterio(numeroActa, textoCriterio, ponderacion));
        contador++;
        cout<<textoCriterio<<endl;
    } while (contador <=8);
}

void DetalleActa::modificarTextoCriterios() {
    int x;
    string textoNuevo;
    vector<Criterio>criteriosTmp;
    imprimirCriterios();
    cout<< "Digite el numero del criterio que desea modificar: ";
    cin>>x;

    cout<< "Digite el nuevo texto del criterio: ";
    getline(cin,textoNuevo);

    listaCriterios[x].setTexto(textoNuevo);
}

void DetalleActa::imprimirCriterios() {
    int x;
    for (x=0 ; x<8 ; x++){
        cout<<listaCriterios[x].getTextoCriterio()<<endl;
    }
}

void DetalleActa::modificarPonderado() {
    int x;
    float ponderadoNuevo;
    vector<Criterio>criteriosTmp;
    imprimirCriterios();
    cout<< "Digite el numero del criterio que desea modificar: ";
    cin>>x;

    cout<< "Digite el nuevo ponderado del criterio: ";
    cin>>ponderadoNuevo;

    listaCriterios[x].setPonderacion(ponderadoNuevo);
}
