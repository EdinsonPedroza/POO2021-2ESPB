#include "Posgrado.h"


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


}

void Posgrado::calificarCriterios(){

    Criterio criterio;
    criterio.crearCriterios();

    DetalleActa detalleActa;
    detalleActa.calificarCriterios();

}

void Posgrado::modificarCriterios(){
    cout<<"";
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
        archivo<<"ACTA:"<< acta1.getNumeroActa() ;
        archivo<<"Fecha: "<<acta1.getFecha()<<"\n";
        archivo<<"ACTA DE EVALUACIÓN DE TRABAJO DE GRADO"<<"\n";
        archivo<<"Trabajo de grado denominado: "<< acta1.getNombreTrabajo()<<"\n";
        archivo<<"Autor:"<< acta1.getAutor();
        archivo<<"Periodo: 2020-2: Tesis II\n";
        archivo<<"Director:"<< acta1.getDirector()<<"\n";
        archivo<<"Co-Director: NA\n";
        archivo<<"Énfasis en: Sistemas y Computación\n";
        archivo<<"Modalidad:"<< acta1.getTipotrabajo()<<"\n";
        archivo<<"Jurado 1:"<< acta1.getJurado1()<<"\n";
        archivo<<"Jurado 1:"<< acta1.getjurado2()<<"\n";
        archivo<<"En atención al desarrollo de este Trabajo de Grado y al documento y sustentación que presentó el(la) autor(a),\n"
                 "los Jurados damos las siguientes calificaciones parciales y observaciones (los criterios a evaluar y sus\n"
                 "ponderaciones se estipulan en el artículo 7.1 de las Directrices para Trabajo de Grado de Maestría):\n";

        /*listaCriteriosEstudiante = actaEstudiante.getListaCriterios();
        for (list<Criterio>::iterator it = listaCriteriosEstudiante.begin(); it != listaCriteriosEstudiante.end(); it++)
        {

            archivo << i << ". ";
            archivo << it->getNombreCriterio() << endl;
            if (it->getCalificacion() != -1 && it->getCalificacion() != -2)
            {
                archivo << "Calificacion Parcial: " << it->getCalificacion() << endl;
            }
            if (it->getPonderacion() != 0)
            {
                archivo << "Ponderacion: " << it->getPonderacion() << "%" << endl;
            }
            archivo << "Observaciones: " << it->getObservaciones() << endl;
            archivo << "------------------------------------------------------------------" << endl;
            archivo << "------------------------------------------------------------------" << endl;
            i++;
        }

        archivo<<acta1.getDetalles()<<"\n";
              "Calificación parcial: 5.0 Ponderación: 20%\n"
              "Observaciones: Se desarrolló apropiadamente el tema y con la profundidad suficiente para su culminación.\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "2. Desafío académico y científico del tema:\n"
              "Calificación parcial: 5.0 Ponderación: 15%\n"
              "Observaciones: El trabajo estuvo bien soportado y con rigor científico.\n"
              "_____________________________________________________________________________________\n"
              "Facultad de Ingeniería\n"
              "Maestría en Ingeniería\n"
              "ACTA: 152-2021 Fecha: febrero18 de 2021\n"
              "3. Cumplimiento de los objetivos propuestos:\n"
              "Calificación parcial: 5.0 Ponderación: 10%\n"
              "Observaciones: Cumplió con todos los objetivos.\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "\n"
              "4. Creatividad e innovación de las soluciones y desarrollos propuestos:\n"
              "Calificación parcial: 5.0 Ponderación: 10%\n"
              "Observaciones: La creatividad está demostrada en el trabajo con los trigramas.\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "5. Validez de los resultados y conclusiones:\n"
              "Calificación parcial: 5.0 Ponderación: 20%\n"
              "Observaciones: Fuero adecuadas y consistentes con los hallazgos y el esarrollod el trabajo.\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "6. Manejo y procesamiento de la información y bibliografía:\n"
              "Calificación parcial: 5.0 Ponderación: 10%\n"
              "Observaciones: Bien\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "7. Calidad y presentación del documento escrito:\n"
              "Calificación parcial: 5.0 Ponderación: 7,5%\n"
              "Observaciones: El documento tiene algunos errores de digitación y el abstract necesita revisión.\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "ACTA: 152-2021 Fecha: febrero 18 de 2021\n"
              "Facultad de Ingeniería\n"
              "Maestría en Ingeniería\n"
              "8. Presentación oral:\n"
              "Calificación parcial: 5.0 Ponderación: 7,5%\n"
              "Observaciones: Bien\n"
              "_____________________________________________________________________________________\n"
              "_____________________________________________________________________________________\n"
              "Como resultado de estas calificaciones parciales y sus ponderaciones, la calificación del Trabajo de\n"
              "Grado es: 5.0\n"
              " 5.0 Cinco punto cero\n"
              " Números Letras";*/

        archivo.close(); //Cerramos el archivo
    }


}

Posgrado::Posgrado(string nombre) {

}

Acta Posgrado::getActa1() {
    return acta1;
}
