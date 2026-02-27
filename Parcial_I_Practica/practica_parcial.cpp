#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    Nodo* primero = new Nodo();
    Nodo* segundo = new Nodo();
    Nodo* tercero = new Nodo();

    cout << "Ingrese el valor del primer nodo: ";
    cin >> primero->dato;

    cout << "Ingrese el valor del segundo nodo: ";
    cin >> segundo->dato;

    cout << "Ingrese el valor del tercer nodo: ";
    cin >> tercero->dato;

    primero->siguiente = segundo;
    segundo->siguiente = tercero;
    tercero->siguiente = nullptr;

    cout << "\nUniversidad Mariano Galvez" << endl;
    cout << "Curso: Programacion III" << endl;
    cout << "Nombre del estudiante: Julio Cesar Xam Chivalan" << endl;
    cout << "Carne: 9941-24-8897" << endl;
    cout << "Seccion: B" << endl;

    cout << "\nValores almacenados en los nodos:" << endl;

    Nodo* auxiliar = primero;

    while (auxiliar != nullptr) {
        cout << auxiliar->dato << endl;
        auxiliar = auxiliar->siguiente;
    }

    delete primero;
    delete segundo;
    delete tercero;

    return 0;
}
