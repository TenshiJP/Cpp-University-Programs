#include <iostream>
#include <string>
//Uso de scanf para leer valores y cadenas de texto (string) en C++
using namespace std;

int main()
{
    char temporal[100];
    printf("\nIngrese su nombre: \n");
    scanf("%100s", temporal);

    string nombre=temporal;

    printf("\nTe doy la Bienvenida %s \n", nombre.c_str());

    return 0;
}
