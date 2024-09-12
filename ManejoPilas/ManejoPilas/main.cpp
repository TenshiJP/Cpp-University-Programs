#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

///Crear Pila
struct pilas
{
    int valor;
    pilas *direcA;
};
pilas *pilaofi, *pilaaux;
///Funciones
void ingresarDatos_pila();
void mostrarDatos_pila();
void modificarDatos_pila();
void eliminarDatos_pila ();
void encabezado();
void gotoxy(int x, int y);
void textoParpadeo(string texto);
void introcolorida ();
void opciones();

int main ()
{
    introcolorida();int opcion=0;
    do
    {
        system("cls");/*Limpiar pantalla*/system("color 0F");
        encabezado();opciones();
        cout << "\n\n  Ingrese el numero de la opcion: ";
        cin >> opcion;cin.ignore();
        switch(opcion)
        {
        case 1:
            ingresarDatos_pila();mostrarDatos_pila();
            system("pause>nul");//Pausa
            break;
        case 2:
            modificarDatos_pila();mostrarDatos_pila();
            system("pause>nul");//Pausa
            break;
        case 3:
            eliminarDatos_pila();
            system("pause>nul");//Pausa
            break;
        }
        if (opcion<0 || opcion>4)//Mensaje de Error
        {
            system("cls");system("color F4");cout << "\nNota: Recuerde que solo puede escoger un numero entre 1 a 4." <<endl;
            cout << "\nPresione una tecla para continuar.." <<endl;system("pause>nul");//Pausa
        }
    }while(opcion!=4);
    system("cls");system("color FF");
    textoParpadeo("\n\n      ____         __  _                   __                 \n     / __/ ___ _  / / (_) ___   ___    ___/ / ___             \n    _\\ \\  / _ `/ / / / / / -_) / _ \\  / _  / / _ \\  _   _   _ \n   /___/  \\_,_/ /_/ /_/  \\__/ /_//_/  \\_,_/  \\___/ (_) (_) (_)\n");
}

void opciones()
{
    cout << "      .__________________________________. " <<endl;
    cout << "      |                                  |" <<endl;
    cout << "      |          MENU DE OPCIONES        |" <<endl;
    cout << "      |__________________________________|" <<endl;
    cout << "      |    ||                            |" <<endl;
    cout << "      | 1. || INGRESAR DATOS A LA PILA   |" <<endl;
    cout << "      |____||____________________________|" <<endl;
    cout << "      |    ||                            |" <<endl;
    cout << "      | 2. || MODIFICAR DATOS DE LA PILA |" <<endl;
    cout << "      |____||____________________________|" <<endl;
    cout << "      |    ||                            |" <<endl;
    cout << "      | 3. || BORRAR DATOS DE LA PILA    |" <<endl;
    cout << "      |____||____________________________|" <<endl;
    cout << "      |    ||                            |" <<endl;
    cout << "      | 4. || SALIR                      |" <<endl;
    cout << "      |____||____________________________|" <<endl;
}

void ingresarDatos_pila()
{
    system("cls");/*Limpiar pantalla*/system("color 02");
    cout<< "_____________________________________________________________________________________________________\n" <<endl;
    cout<< "    _____  __________  ___________   ___    ___  ___ __________  ____  ___     ___  ______   ___   _ " <<endl;
    cout<< "   /  _/ |/ / ___/ _ \\/ __/ __/ _ | / _ \\  / _ \\/ _ /_  __/ __ \\/ __/ / _ |   / _ \\/  _/ /  / _ | (_)" <<endl;
    cout<< "  _/ //    / (_ / , _/ _/_\\ \\/ __ |/ , _/ / // / __ |/ / / /_/ /\\ \\  / __ |  / ___// // /__/ __ |_   " <<endl;
    cout<< " /___/_/|_/\\___/_/|_/___/___/_/ |_/_/|_| /____/_/ |_/_/  \\____/___/ /_/ |_| /_/  /___/____/_/ |_(_) \n" <<endl;
    cout<< "_____________________________________________________________________________________________________\n" <<endl;

    if (pilaofi==NULL)//Consulta para buscar o crear la pila
    {
        pilaofi=new(pilas);
        //cout << "Dirección: " << pilaofi <<endl;
        cout << "Ingrese PRIMER dato a la pila: ";
        cin>>pilaofi->valor;cin.ignore();
        cout << "Dato ingresado correctamente... " <<endl;system("color 20");Sleep(125);system("color 02");
        pilaofi->direcA=NULL;
        //cout << "Dirección anterior: " << pilaofi->direcA <<endl;
        return;
    }
    //Agregar más datos a la pila
    pilaaux=new(pilas);
    //cout << "Mi Dirección: " << pilaaux <<endl;
    cout << "Ingrese dato a la pila: ";
    cin>>pilaaux->valor;cin.ignore();
    //cout << "Hecho... " <<endl;
    pilaaux->direcA=pilaofi;
    //cout << "Dirección anterior: " << pilaaux->direcA <<endl;
    pilaofi=pilaaux;
}

void mostrarDatos_pila()
{
    if (pilaofi == NULL)//Consulta para encontrar e imprimir datos si lo hubiera.
    {
        /*system("cls");*/system("color F4");
        //cout << "No hay datos en la pila." <<endl;
    }
    //Imprimir datos de pila.
    pilaaux=pilaofi;
    cout << "\nDatos de la pila: " <<endl;
    while(pilaaux != NULL)
    {
        cout << pilaaux->valor <<endl;
        pilaaux=pilaaux->direcA;
    }
}

void modificarDatos_pila()
{
    system("cls");/*Limpiar pantalla*/system("color 09");
    cout << "    __  _______  ___  ____________________   ___    ___  ___ __________  ____  ___  ____  ___  ______   ___   _ " <<endl;
    cout << "   /  |/  / __ \\/ _ \\/  _/ __/  _/ ___/ _ | / _ \\  / _ \\/ _ /_  __/ __ \\/ __/ / _ \\/ __/ / _ \\/  _/ /  / _ | (_)" <<endl;
    cout << "  / /|_/ / /_/ / // // // _/_/ // /__/ __ |/ , _/ / // / __ |/ / / /_/ /\\ \\  / // / _/  / ___// // /__/ __ |_   " <<endl;
    cout << " /_/  /_/\\____/____/___/_/ /___/\\___/_/ |_/_/|_| /____/_/ |_/_/  \\____/___/ /____/___/ /_/  /___/____/_/ |_(_)" <<endl;

    if (pilaofi==NULL)//Condicional de pila vacía
    {
        system("cls");system("color F4");
        cout << "\nLa pila esta vacia..." <<endl;
        return;
    }
    int buscarDato=0;
    bool encontrado=false;
    pilaaux=pilaofi;
    cout << "\nIngrese dato a buscar, para modifcar: ";
    cin >> buscarDato;cin.ignore();
    while(pilaaux != NULL)//Busqueda
    {
        if (buscarDato == pilaaux->valor)
        {
            cout << "Encontrado, el valor es: " << pilaaux->valor <<endl;system("color 90");Sleep(100);system("color 09");//Valor encontrado
            cout << "\nIngrese el nuevo dato: " ;//Cambio
            cin >> pilaaux->valor;
            cout << "Cambio Realizado" <<endl;system("color 90");Sleep(50);system("color 09");//Cambio realizado
            encontrado=true;
            break;
        }
        pilaaux=pilaaux->direcA;
    }
    if (encontrado==false)//Valor no encontrado
    {
        system("cls");system("color F4");
        cout << "\nNo se encontro el valor...\nEs posible que lo haya escrito mal.\nVerifique---" <<endl;
    }
}

void eliminarDatos_pila ()
{
    system("cls");/*Limpiar pantalla*/system("color 0C");
    cout<< "    ___  ____  ___  ___  ___   ___    ___  ___ __________  ____  ___  ____  ___  ______   ___   _ " <<endl;
    cout<< "   / _ )/ __ \\/ _ \\/ _ \\/ _ | / _ \\  / _ \\/ _ /_  __/ __ \\/ __/ / _ \\/ __/ / _ \\/  _/ /  / _ | (_)" <<endl;
    cout<< "  / _  / /_/ / , _/ , _/ __ |/ , _/ / // / __ |/ / / /_/ /\\ \\  / // / _/  / ___// // /__/ __ |_   " <<endl;
    cout<< " /____/\\____/_/|_/_/|_/_/ |_/_/|_| /____/_/ |_/_/  \\____/___/ /____/___/ /_/  /___/____/_/ |_(_) " <<endl;

    ///Borrar todos los datos de la pila
    bool stop = false;
    while (stop==false)
    {
        if (pilaofi == NULL)//Consulta para pilas vacias.
        {
            /*system("cls");*/system("color F4");
            cout << "\nNo hay datos en la pila." <<endl;
            stop=true;
            return;
        }
        else
        {
            pilaaux=new(pilas);
            pilaaux=pilaofi;
            cout << "\nElemento eliminado: " << pilaaux->valor <<endl;system("color C0");Sleep(110);system("color 0C");
            pilaofi=pilaaux->direcA;
            delete (pilaaux);
            mostrarDatos_pila();
        }
    }

///Borrar dato de arriba de la pila
    /*if (pilaofi == NULL)//Consulta para pilas vacias.
    {
        system("cls");system("color F4");
        cout << "No hay datos en la pila." <<endl;
        return;
    }

    pilaaux=new(pilas);
    pilaaux=pilaofi;
    cout << "\nElemento eliminado: " << pilaaux->valor <<endl;system("color C0");Sleep(110);system("color 0C");
    pilaofi=pilaaux->direcA;
    delete (pilaaux);
    mostrarDatos_pila();*/
}

void encabezado()
{
    gotoxy(34,1);//Posición.
    cout << "    ____             _ __" <<endl;
    gotoxy(34,2);//Posición.
    cout << "   / __ \\____  _____(_) /_____  _____     __    __" <<endl;
    gotoxy(34,3);//Posición.
    cout << "  / / / / __ \\/ ___/ / __/ __ \\/ ___/  __/ /___/ /_" <<endl;
    gotoxy(34,4);//Posición.
    cout << " / /_/ / /_/ / /  / / /_/ /_/ (__  )  /_  __/_  __/" <<endl;
    gotoxy(34,5);//Posición.
    cout << "/_____/\\____/_/  /_/\\__/\\____/____/    /_/   /_/  \n" <<endl;
}

void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void introcolorida ()
{
    textoParpadeo("\n     ____             _ __ \n    / __ \\____  _____(_) /_____  _____     __    __ \n   / / / / __ \\/ ___/ / __/ __ \\/ ___/  __/ /___/ /_\n  / /_/ / /_/ / /  / / /_/ /_/ (__  )  /_  __/_  __/\n /_____/\\____/_/  /_/\\__/\\____/____/    /_/   /_/ \n ");
}

void textoParpadeo(string texto)///Función para hacer parpadear y cambiar de color de letras.
{
    int contador = 0;// Variable para contar el tiempo.
    do
    {
        if (contador = 3)
        {
            system("cls");//Limpia pantalla.
            system("color 01");//Color de Letra.
            cout << texto;
            Sleep(110);//Tiempo de espera.
            if (contador = 6)
            {
                system("cls");
                system("color 02");
                cout << texto;
                Sleep(110);
                if (contador = 9)
                {
                    system("cls");
                    system("color 03");
                    cout << texto;
                    Sleep(110);
                    if (contador = 12)
                    {
                        system("cls");
                        system("color 04");
                        cout << texto;
                        Sleep(110);
                        if (contador = 15)
                        {
                            system("cls");
                            system("color 05");
                            cout << texto;
                            Sleep(110);
                            if (contador = 18)
                            {
                                system("cls");
                                system("color 06");
                                cout << texto;
                                Sleep(110);
                                if (contador = 21)
                                {
                                    system("cls");
                                    system("color 08");
                                    cout << texto;
                                    Sleep(110);
                                    if (contador = 24)
                                    {
                                        system("cls");
                                        system("color 09");
                                        cout << texto;
                                        Sleep(110);
                                        if (contador = 27)
                                        {
                                            system("cls");
                                            system("color 0A");
                                            cout << texto;
                                            Sleep(110);
                                            if (contador = 30)
                                            {
                                                system("cls");
                                                system("color 0B");
                                                cout << texto;
                                                Sleep(110);
                                                if (contador = 33)
                                                {
                                                    system("cls");
                                                    system("color 0C");
                                                    cout << texto;
                                                    Sleep(110);
                                                    if (contador = 36)
                                                    {
                                                        system("cls");
                                                        system("color 0D");
                                                        cout << texto;
                                                        Sleep(110);
                                                        if (contador = 39)
                                                        {
                                                            system("cls");
                                                            system("color 0E");
                                                            cout << texto;
                                                            Sleep(110);
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

/*INICIO Algortimo de Busqueda
//Primero buscar datos en la pila.
    if (pilaofi==NULL)//Condicional de pila vacía
    {
        system("cls");system("color F4");
        cout << "\n La pila esta vacia..." <<endl;
        return;
    }
    int buscarDato=0;
    bool encontrado=false;
    pilaaux=pilaofi;
    cout << "Ingrese dato a buscar, para modifcar: ";
    cin >> buscarDato;cin.ignore();
    while(pilaaux != NULL)
    {
        if (buscarDato == pilaaux->valor)
        {
            cout << "Encontrado, el valor es: " << pilaaux->valor <<endl;
            encontrado=true;
            break;
        }
        pilaaux=pilaaux->direcA;
    }
    if (encontrado==false)
    {
        cout << "No se encontro el valor..." <<endl;
    }
FIN Algoritmo de busqueda*/
