/* Universidad de las Fuerzas Armadas 
     Ciencias de la Computacion
        Estructura de Datos

Grupo: 3            Integrantes: Kevin Cabezas, Martin Paz 
Fecha: 00/10/2026                Erick Sabando, Adrian Toapanta
        Tema: Pilas
*/

// Clase main.cpp
  

#include "Pila.h"

using namespace std;

int main() {

  IPila *obj1 = new Pila();

  int opcion = 0;

  do {
    std::cout << "Gestion de Personas\n" << std::endl;
    cout << "1. Insertar" << endl;
    cout << "2. Imprimir" << endl;
    cout << "3. Buscar" << endl;
    cout << "4. Eliminar" << endl;
    cout << "5. Mostrar cantidad de elementos" << endl;
    cout << "6. Salir" << endl;
    std::cout << "Ingrese una Opcion: " << std::endl;
    std::cin >> opcion;
switch (opcion) {
        case 1: {
            string nombre, apellido, cedula;
            cout << "\nIngrese Datos de la Persona" << endl;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Apellido: ";
            cin >> apellido;
            cout << "Cedula: ";
            cin >> cedula;

            
            Persona p(nombre, apellido, cedula);
            obj1->apilar(p);
            cout << "Persona agregada exitosamente" << endl;
            break;
        }
        case 2:
            obj1->imprimir();
            break;

        case 3: {
            obj1->imprimir();
            string cedulaBuscar;
            cout << "\nIngrese la cedula: ";
            cin >> cedulaBuscar;
            obj1->buscar(cedulaBuscar);
            break;
        }
        case 4:
            cout << "\nDesapilando.." << endl;
            obj1->desapilar();
            break;

        case 5:
            cout << "\nNumero de elementos en la pila: "
                << obj1->sizePila() << endl;
            break;

        case 6:
            cout << "\nSaliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
        }
        cout << endl;
    } while (opcion != 5);

  delete (obj1);
  cout << "\nPrograma finalizado con exito.\n";
  return 0;
};