#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numero;
    long double factorial=1;

    cout << "\n                     ***** Factorial ***** " << endl;
    cout << "\n Recuerde que solo puede usar numeros mayores a cero \n Ingrese un numero: ";
    cin >> numero;

    for (int i=1;i<=numero;i++)
    {
        factorial = factorial*i;
    }
    cout << "\n El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
