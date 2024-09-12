/*#include "iostream"

using namespace std;

int main() {

    //Se muestra un mensaje por pantalla.

    cout << "Hola Mundo" << " Desde Programar Ya." << "\n";

    return 0; }

#include "string"
using namespace std;
int main() {

    char temporal[100];

    printf("Tu nombre?\n");

    scanf("%100s", temporal);

    string nombre = temporal;

    printf("Te doy la bienvenida %s", nombre.c_str());

    return 0; }*/

#include <iostream>

int main () {
    int numero;
    int valorAbs;

    printf("Ingrese un numero : ");

    scanf("%i",&numero);

    valorAbs=numero;

            //Solo si el número es negativo cambiamos su signo
            if (valorAbs < 0) {
                valorAbs = valorAbs * (-1);
                }
    printf("\nEl valor absolotu del %d es: %d \n",numero,valorAbs);

return 0; }
