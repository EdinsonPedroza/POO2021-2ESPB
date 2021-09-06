#include "View.h"

View::View()
{
}

void View::mostrarMenuReportes()
{
    int opcion = -1;
    do
    {

        cout << "Reportes\n";
        cout << "1. Comprobar cantidad \n";
        cout << "2. Ver valor a pagar a la DIAN \n";
        cout << "3. Ver ganancias obtenidas por la tienda \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        // TODO completar
        switch (opcion)
        {
           case 1:
                int x;
                cout<<"Ingrese la cantidad del producto que desea mirar: ";
                cin>>x;
                laFarra.mostrarCantidad(x);
                break;

            case 2:
                laFarra.valorAPagarDIAN();
                break;

            case 3:
                laFarra.verGanancias();
                break;                
        }

    } while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "Menu Tienda\n";
        cout << "1. Agregar Productos \n";
        cout << "2. Mostrar Productos \n";
        cout << "3. Vender \n";
        cout << "4. Mostrar Ventas \n";
        cout << "5. Reportes \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            laFarra.mostrarProductos();
            break;

        case 3:
            laFarra.vender();
            break;

        case 4:
            laFarra.mostrarFacturas();
            break;

        case 5:
            mostrarMenuReportes();
            break;
        }
    } while (opcion != 0);
}