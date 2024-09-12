#include <iostream>
#include <string>>
//Ejemplo 1 (mejorado) para leer de datos en C++, usando getline y cin
using namespace std;

int main()
{
    cout << "\n" << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrse su nombre: " <<"\n";
    //Mensaje para solicitar nombre.

    string nombre;//Seguimos usando el string para almacenar el nombre.
    //cin >> nombre; Esta línea da problema si se ingresa un valor con espacios.
    //En sus lugar, usamos getline, con el flujo de entrada en cin y lo asignamosa nombre.
    getline(cin, nombre);//Esta línea no dará problemas con los espacios en el nombre.

    cout << "\n" << "Bienvenido al Sistema " << nombre << ". Gracias por preferirnos." << "\n";

    return 0;
}
