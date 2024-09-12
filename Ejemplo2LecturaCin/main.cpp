#include <iostream>
#include <string>
//Ejemplo 2 de lectura de datos en C++, usando cin
using namespace std;

int main()
{
    //Mensaje de Bienvenida
    cout << "\n" << "Hola aqui podras realizar sumas" << "\n";

    //Se declararon los números que se sumarán
    float numero1, numero2;

    //Se pide el primer número
    cout << "Por favor ingrese el primer valor: " <<"\n";

    //Se asigna el primer valor a numero1
    cin >> numero1;

    //Se pide el segundo número
    cout << "Por favor ingrese el segundo valor: " <<"\n";

    //Se asigna el segundo valor a numero2
    cin >> numero2;

    //Se muestra resultado
    cout << "\n" << "Resultado: " << numero1 << " + " << numero2 << " = " << numero1 + numero2 <<"\n";

    return 0;
}
