#include "Posgrado.h"


using namespace std;

Posgrado::Posgrado()
{   
}

void Posgrado::crearActa(){
    string nombreTrabajo, autor, director, enfasis, jurado1, jurado2, periodo, fecha, coodirector;
    int numeroActa, trabajo, existeCodirector;
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

    cout <<"Ingrese el nombre del director: ";
    getline(cin,director);
    acta1.setDirector(director);

    cout <<"Ingrese el nombre del Jurado 1: ";
    getline(cin,jurado1);
    acta1.setJurado1(jurado1);

    cout <<"Ingrese el nombre del Jurado 2: ";
    getline(cin,jurado2);
    acta1.setjurado2(jurado2);

    cout<<"Existe coodirector?: \n 1.Si \n 2.No\n";
    cin>>existeCodirector;
    if (existeCodirector==1){
        cin.ignore();
        cout <<"Ingrese el nombre del coodirector: ";
        getline(cin,coodirector);
        acta1.setCoodirector(coodirector);
    }else{
        acta1.setCoodirector("N/A");
    }

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

    int id;
    float nota;
    cout<<"Ingrese el ID del acta: ";
    cin>>(id);

    if ( this->actas.find(id) == this->actas.end() ) {
        cout<<"No se creo un acta con ese ID , \n";

    } else {
        DetalleActa detalleActa;
        detalleActa.crearCriterios();
        nota = detalleActa.calificarCriterios();
        actas[id].setnotaFinal(nota);
        actas[id].setDetalleActa(detalleActa);
        actas[id].definirEstadoCalificacion();
    }
}

void Posgrado::modificarCriterios(){
    int id;
    cout<<"Ingrese el numero del Acta a modificar: ";
    cin>>id;

    if ( this->actas.find(id) == this->actas.end() ) {
        cout<<"No se creo un acta con ese ID , \n";

    } else {
        int menu;
        cout<<"Que desea modificar? \n"
              "1. Ponderados\n"
              "2. Descripcion\n";
        cin>>menu;
        if (menu == 1){
            actas[id].llamarPonderacion();
        }else if(menu == 2){
            actas[id].llamartexto();
        }
    }
}

void Posgrado::verActa(){
    if (actas.size() == 0){
        cout<<"No hay Actas para mostrar"<<endl;
        return;
    }else{
        for (map<int, Acta>::iterator pActa = actas.begin();
               pActa != actas.end(); pActa++)
        {
            Acta valor = pActa->second; // Se obtiene el valor asociado al mapa
            valor.mostrarActa();
        }
    }

}

void Posgrado::exportarActa(){

    string nombreArchivo;
    ofstream archivo;
    char rpt;
    int id;

    cout << "Ingrese el id del acta: " << endl;
    cin>>id;

    cin.ignore();
    cout << "Ingrese el nombre del archivo: " << endl;
    getline(cin, nombreArchivo);
    nombreArchivo = nombreArchivo + ".txt";
    archivo.open(nombreArchivo.c_str(), ios::out);

    if(archivo.fail()){ //Si a ocurrido algun error
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }else{

        archivo<<"Facultad de Ingeniería\n"
                 "Maestría en Ingeniería\n";
        archivo<<"ACTA:"<< actas[id].getNumeroActa()<<"\n";
        archivo<<"Fecha: "<<actas[id].getFecha()<<"\n";
        archivo<<"Trabajo de grado denominado: "<< actas[id].getNombreTrabajo()<<"\n";
        archivo<<"Autor:"<< actas[id].getAutor()<<"\n";
        archivo<<"Director:"<< actas[id].getDirector()<<"\n";
        archivo<<"Co-Director: "<< actas[id].getCoodirector()<< "\n";
        archivo<<"Jurado 1:"<< actas[id].getJurado1()<<"\n";
        archivo<<"Jurado 2:"<< actas[id].getjurado2()<<"\n";
        archivo<<"Nota: "<<actas[id].getnotaFinal()<<"\n";
        archivo<<"Estado: "<<actas[id].getEstado()<<"\n";

        archivo.close(); //Cerramos el archivo
    }


}

Posgrado::Posgrado(string nombre) {

}

map<int, Acta> Posgrado::getActas() {
    return this->actas;
}

