#include <iostream>
#include <string>
#include <vector>
using namespace std;

// definir la estructura Empleado
struct Empleado {
    string nombres;
    char sexo;      // M o F
    double sueldo;
};

int main() {
    int cantidadTrabajadores;
    cout << "Ingrese la cantidad de trabajadores a registrar: ";
    cin >> cantidadTrabajadores;

    // validación básica por si ingresan un número menor o igual a 0
    if (cantidadTrabajadores <= 0) {
        cout << "Cantidad no valida." << endl;
        return 0;
    }
    vector<Empleado> empleados(cantidadTrabajadores);
    // Leer los datos de cada empleado
    for (int i = 0; i < cantidadTrabajadores; i++) {
        cout << "\n--- Datos del empleado " << i + 1 << " ---" << endl;
        cin.ignore();        
        cout << "Nombres: ";
        getline(cin, empleados[i].nombres);
        cout << "Sexo (M/F): ";
        cin >> empleados[i].sexo;
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
    }

    // Identificar al empleado con mayor y menor sueldo
    int indiceMayor = 0;
    int indiceMenor = 0;
    for (int i = 1; i < cantidadTrabajadores; i++) {
        // Buscar el mayor sueldo
        if (empleados[i].sueldo > empleados[indiceMayor].sueldo) {
            indiceMayor = i;
        }
        // Buscar el menor sueldo
        if (empleados[i].sueldo < empleados[indiceMenor].sueldo) {
            indiceMenor = i;
        } 
    }

    // Mostrar los resultados
    cout << "\n========================================" << endl;
    cout << "EMPLEADO CON MAYOR SUELDO:" << endl;
    cout << "Nombre: " << empleados[indiceMayor].nombres << endl;
    cout << "Sexo: " << empleados[indiceMayor].sexo << endl;
    cout << "Sueldo: $" << empleados[indiceMayor].sueldo << endl;

    cout << "----------------------------------------" << endl;

    cout << "EMPLEADO CON MENOR SUELDO:" << endl;
    cout << "Nombre: " << empleados[indiceMenor].nombres << endl;
    cout << "Sexo: " << empleados[indiceMenor].sexo << endl;
    cout << "Sueldo: $" << empleados[indiceMenor].sueldo << endl;
    cout << "========================================" << endl;

    return 0;
}