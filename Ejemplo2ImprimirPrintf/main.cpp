#include <iostream>
#include <string>
//Ejemplo 2 de impresi�n de texto por pantalla en C++, usando printf
using namespace std;

int main()
{
    string salida1 = "\nEjemplo de salida";//El valor de esta variable se mostrar� en pantalla
    int numero = 2;//Este valor igual se mostrar� en pantalla
    string salida2 = "Programando en C++";//Estos Valores se concatenar�n en una sola salida

    //Se concater�n y muestran los valores por pantalla con par�metros de printf
    printf("%s %d. %s \n", salida1.c_str(), numero, salida2.c_str());

    return 0;
}
