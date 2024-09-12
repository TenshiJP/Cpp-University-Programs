#include <iostream>
#include <string>
//Ejemplo 2 de impresión de texto por pantalla en C++, usando printf
using namespace std;

int main()
{
    string salida1 = "\nEjemplo de salida";//El valor de esta variable se mostrará en pantalla
    int numero = 2;//Este valor igual se mostrará en pantalla
    string salida2 = "Programando en C++";//Estos Valores se concatenarán en una sola salida

    //Se concaterán y muestran los valores por pantalla con parámetros de printf
    printf("%s %d. %s \n", salida1.c_str(), numero, salida2.c_str());

    return 0;
}
