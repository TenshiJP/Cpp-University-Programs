#include <iostream>
#include <string>
//Ejemplo 2 de impresión de texto por pantalla en C++, usando cout
using namespace std;

int main()
{
    //Mostrará de esta variable string en pantalla.
    string salida1 = "Ejemplo de Salida";

    //Este valor se mostraráen pantalla igual.
    int numero = 2;

    //Estos valores concatenarán en una única salida.
    string salida2 = "Programando en C++";

    //Se concatenan y muestran los valores en pantalla por cout.
    cout << "\n" << salida1 << " " << numero << ". " << salida2 <<"\n";

    return 0;
}
