
#include "View.h"

View::View()
{
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "---Menu Posgrados---\n";
        cout << "1. Crear acta \n";
        cout << "2. Calificar criterios \n";
        cout << "3. Modificar criterios \n";
        cout << "4. Ver acta \n";
        cout << "5. Exportar acta \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            acta.crearActa();
            break;
        case 2:
            acta.calificarCriterios();
            break;

        case 3:
            acta.modificarCriterios();
            break;

        case 4:
            acta.verActa();
            break;

        case 5:
            acta.exportarActa();
            break;
        }
    } while (opcion != 0);
}