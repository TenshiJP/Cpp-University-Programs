#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;
void textoParpadeo(string texto);
void bienvenida();
void gotoxy(int x, int y);
void doritos();
void brilloTitulo();

int main()
{
    bienvenida();
    /*brilloTitulo();
    system("cls");//Limpia pantalla
    doritos();

    cout << "\n" << "Hello world!" << endl;*/
    return 0;
}

void doritos()///Muestra "Doritos++" en Pantalla
{
    gotoxy(36,3);//Posición.
    cout << "  _____             _ _ " << "\n";
    gotoxy(36,4);//Posición.
    cout << " |  __ \\           (_) |             _     _ " << "\n";
    gotoxy(36,5);//Posición.
    cout << " | |  | | ___  _ __ _| |_ ___  ___ _| |_ _| |_ " << "\n";
    gotoxy(36,6);//Posición.
    cout << " | |  | |/ _ \\| '__| | __/ _ \\/ __|_   _|_   _| " << "\n";
    gotoxy(36,7);//Posición.
    cout << " | |__| | (_) | |  | | | |(_) \\__ \\ |_|   |_| " << "\n";
    gotoxy(36,8);//Posición.
    cout << " |_____/ \\___/|_|  |_|\\__\\___/|___/ " << "\n";
}

void brilloTitulo()//Muestra "DOritos++" en colores
{
    textoParpadeo(" _____            _ _ \n |  __ \\           (_) |             _     _  \n | |  | | ___  _ __ _| |_ ___  ___ _| |_ _| |_ \n | |  | |/ _ \\| '__| | __/ _ \\/ __|_   _|_   _| \n | |__| | (_) | |  | | | |(_) \\__ \\ |_|   |_| \n |_____/ \\___/|_|  |_|\\__\\___/|___/ \n");
}

void gotoxy(int x, int y)///Funcion de Posición
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void bienvenida()///Desplega "Doritos++"
{
    char intro[26] = "  _____             _ _ ";
    char intro1[48] = " |  __ \\           (_) |             _     _ ";
    char intro2[49] = " | |  | | ___  _ __ _| |_ ___  ___ _| |_ _| |_ ";
    char intro3[52] = " | |  | |/ _ \\| '__| | __/ _ \\/ __|_   _|_   _| ";
    char intro4 [50] = " | |__| | (_) | |  | | | |(_) \\__ \\ |_|   |_| ";
    char intro5 []= " |_____/ \\___/|_|  |_|\\__\\___/|___/ ";
    /*{
        "  _____             _ _ ",
        " |  __ \\           (_) |             _     _ ",
        " | |  | | ___  _ __ _| |_ ___  ___ _| |_ _| |_ ",
        " | |  | |/ _ \\| '__| | __/ _ \\/ __|_   _|_   _| ",
        " | |__| | (_) | |  | | | |(_) \\__ \\ |_|   |_| ",
        " |_____/ \\___/|_|  |_|\\__\\___/|___/ "
    };*/

    gotoxy(36,3);//Posicion.
    for (int i;i<25;i++)//Linea 1.
    {
        cout << intro[i];
        Sleep(35);

    }

    gotoxy(36,4);//Posicion.
    for (int i;i<47;i++)//Linea 2.
    {
        cout << intro1[i];
        Sleep(35);
    }


    gotoxy(36,5);//Posicion.
    for (int i;i<48;i++)//Linea 3.
    {
        cout << intro2[i];
        Sleep(35);
    }

    gotoxy(36,6);//Posicion.
    for (int i;i<51;i++)//Linea 4.
    {
        cout << intro3[i];
        Sleep(35);
    }

    gotoxy(36,7);//Posicion.
    for (int i;i<49;i++)//Linea 5.
    {
        cout << intro4[i];
        Sleep(35);
    }

    gotoxy(36,8);//Posicion.
    for (int i;i<41;i++)//Linea 6.
    {
        cout << intro5[i];
        Sleep(35);
    }
}

void textoParpadeo(string texto)///Función para hacer parpadear y cambiar de color de letras.
{
    int contador = 0;// Variable para contar el tiempo.
    do
    {
        if (contador = 5)
        {
            system("cls");//Limpia pantalla.
            system("color 01");//Color de Letra.
            gotoxy(36,3);
            cout << texto;
            Sleep(100);//Tiempo de espera.

            if (contador = 10)
            {
                system("cls");
                system("color 02");
                gotoxy(36,3);
                cout << texto;
                Sleep(100);

                if (contador = 15)
                {
                    system("cls");
                    system("color 03");
                    gotoxy(36,3);
                    cout << texto;
                    Sleep(100);

                    if (contador = 20)
                    {
                        system("cls");
                        system("color 04");
                        gotoxy(36,3);
                        cout << texto;
                        Sleep(100);

                        if (contador = 25)
                        {
                            system("cls");
                            system("color 05");
                            gotoxy(36,3);
                            cout << texto;
                            Sleep(100);

                            if (contador = 30)
                            {
                                system("cls");
                                system("color 06");
                                gotoxy(36,3);
                                cout << texto;
                                Sleep(100);

                                if (contador = 40)
                                {
                                    system("cls");
                                    system("color 08");
                                    gotoxy(36,3);
                                    cout << texto;
                                    Sleep(100);

                                    if (contador = 45)
                                    {
                                        system("cls");
                                        system("color 09");
                                        gotoxy(36,3);
                                        cout << texto;
                                        Sleep(100);

                                        if (contador = 50)
                                        {
                                            system("cls");
                                            system("color 0A");
                                            gotoxy(36,3);
                                            cout << texto;
                                            Sleep(100);

                                            if (contador = 55)
                                            {
                                                system("cls");
                                                system("color 0B");
                                                gotoxy(36,3);
                                                cout << texto;
                                                Sleep(100);

                                                if (contador = 60)
                                                {
                                                    system("cls");
                                                    system("color 0C");
                                                    gotoxy(36,3);
                                                    cout << texto;
                                                    Sleep(100);

                                                    if (contador = 65)
                                                    {
                                                        system("cls");
                                                        system("color 0D");
                                                        gotoxy(36,3);
                                                        cout << texto;
                                                        Sleep(100);

                                                        if (contador = 70)
                                                        {
                                                            system("cls");
                                                            system("color 0E");
                                                            gotoxy(36,3);
                                                            cout << texto;
                                                            Sleep(100);

                                                            if (contador = 75)
                                                            {
                                                                system("cls");
                                                                system("color 0F");
                                                                gotoxy(36,3);
                                                                cout << texto;
                                                                Sleep(100);
                                                                cout << "\n";
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        contador++;
    }while(contador<40);//Fin del Tiempo Puesto.
}
