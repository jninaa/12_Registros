#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Persona {
    string nombres;
    string DNI;
    int edad;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de personas (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad no valida." << endl;
        return 0;
    }

    // Definición del vector con 'n' elementos
    vector<Persona> personas(n);
    // Lectura de datos
    for (int i = 0; i < n; i++) {
        cout << "\n--- Datos de la Persona " << i + 1 << " ---" << endl;
        cin.ignore();
        cout << "Nombres: ";
        getline(cin, personas[i].nombres);
        cout << "DNI: ";
        cin >> personas[i].DNI;
        cout << "Edad: ";
        cin >> personas[i].edad;
    }

    int mayoresDe50 = 0;
    double sumaEdades = 0;

    for (int i = 0; i < n; i++) {
        sumaEdades += personas[i].edad;
        if (personas[i].edad > 50) {
            mayoresDe50++;
        }
    }

    double promedioEdades = sumaEdades / n;

    cout << "\n================ REPORTE ================" << endl;
    cout << "Cantidad de personas mayores de 50 anos: " << mayoresDe50 << endl;
    cout << "Promedio de edades: " << promedioEdades << endl;
    
    cout << "\nLISTADO COMPLETO DE PERSONAS:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << personas[i].nombres 
             << " | DNI: " << personas[i].DNI 
             << " | Edad: " << personas[i].edad << endl;
    }
    cout << "=========================================" << endl;

    return 0;
}