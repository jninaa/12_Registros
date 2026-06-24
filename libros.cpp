#include<iostream>
#include<string>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    string editorial;
    int anioPublicacion;
};

int main(){
    int n;
    Libro libros[100];
    cout << "Ingrese la cantidad de libros: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cout << "\nLibro " << i + 1 << endl;
        cout << "Titulo: ";
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Editorial: ";
        getline(cin, libros[i].editorial);
        cout << "Anio de publicación: ";
        cin >> libros[i].anioPublicacion;
        cin.ignore();
    }


    cout << "\nLISTADO DE LIBROS REGISTRADOS\n";
    for(int i = 0; i < n; i++){
        cout << "\nLibro: "<< i + 1 << endl;
        cout << "Titulo: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor <<endl;
        cout << "Editorial: " << libros[i].editorial << endl;
        cout << "Anio: " << libros[i].anioPublicacion << endl;
    }
    return 0;
}
