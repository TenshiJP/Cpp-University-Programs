#include <iostream>
#include <string>
//Ejemplo 1 de lectura de datos en C++, usando cin
using namespace std;

int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre: " << "\n";
    //La instruci�n "\n" es un salto de l�nea mostrando los textos por separados

    string nombre;//En esta variable estar� guardado el nombre ingresado
    cin>>nombre;//Se lee el nombre

    cout << "\n" << "Bienvenido al Sistema " << nombre << ". Gracias por preferirnos." << "\n";

    return 0;
}
