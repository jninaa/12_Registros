#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Estructura PersonaCumple
struct PersonaCumple { 
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de personas (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad no valida." << endl;
        return 0;
    }

    // Definición del vector
    vector<PersonaCumple> personas(n);

    // Registro de datos
    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro de Persona " << i + 1 << " ---" << endl;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, personas[i].nombre);
        cout << "Dia de nacimiento: ";
        cin >> personas[i].dia;
        cout << "Mes de nacimiento (1-12): ";
        cin >> personas[i].mes;
        cout << "Ano de nacimiento: ";
        cin >> personas[i].anio;
    }

    int mesBusqueda;
    do {
        cout << "\nIngrese el numero de mes a consultar (1-12) o 0 para SALIR: ";
        cin >> mesBusqueda;

        if (mesBusqueda == 0) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        if (mesBusqueda < 1 || mesBusqueda > 12) {
            cout << "Mes invalido. Intente de nuevo." << endl;
            continue;
        }

        cout << "\nCumplen anos en el mes " << mesBusqueda << ":" << endl;
        bool encontroAlguien = false;

        for (int i = 0; i < n; i++) {
            if (personas[i].mes == mesBusqueda) {
                cout << "- " << personas[i].nombre 
                     << " (Fecha: " << personas[i].dia << "/" << personas[i].mes << "/" << personas[i].anio << ")" << endl;
                encontroAlguien = true;
            }
        }

        if (!encontroAlguien) {
            cout << "No hay personas registradas que cumplan anos en este mes." << endl;
        }

    } while (mesBusqueda != 0);

    return 0;
}