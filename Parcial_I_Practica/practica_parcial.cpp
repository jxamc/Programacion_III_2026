#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    // Declaración de punteros
    Nodo* primero = nullptr;
    Nodo* segundo = nullptr;
    Nodo* tercero = nullptr;

    // Creación dinámica de nodos
    primero = new Nodo();
    segundo = new Nodo();
    tercero = new Nodo();

    // Solicitar datos al usuario
    cout << "Ingrese el valor del primer nodo: ";
    cin >> primero->dato;

    cout << "Ingrese el valor del segundo nodo: ";
    cin >> segundo->dato;

    cout << "Ingrese el valor del tercer nodo: ";
    cin >> tercero->dato;

    // Enlace de nodos
    primero->siguiente = segundo;
    segundo->siguiente = tercero;
    tercero->siguiente = nullptr;

    // Mostrar información del estudiante
    cout << "\nUniversidad Mariano Gálvez" << endl;
    cout << "Curso: Programacion III" << endl;
    cout << "Nombre del estudiante: Julio Cesar Xam Chivalan" << endl;
    cout << "Carné: 9941-24-8897" << endl;
    cout << "Seccion: B" << endl;

    // Mostrar valores almacenados accediendo mediante punteros
    cout << "\nValores almacenados en los nodos:" << endl;

    Nodo* auxiliar = primero;

    while (auxiliar != nullptr) {
        cout << auxiliar->dato << endl;
        auxiliar = auxiliar->siguiente;
    }

    // Liberación correcta de memoria
    delete primero;
    delete segundo;
    delete tercero;

    return 0;
}