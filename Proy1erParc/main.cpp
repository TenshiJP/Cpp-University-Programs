#include <iostream>
#include <string>
#include <string.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y);
void doritos();
void brilloTitulo();
void textoParpadeo(string texto);
void bienvenida();

int main()
{
    //Varables para Datos Genrales
    int edad=0;
    int nsexo, telefono;
    double dpi;
    char nombre [80];
    char direccion [90];
    string sexo = " ";
    char mail [40];
    //Varables para Datos Academicos
    string carera;
    char semestre [25];
    char sede [30];
    char jornada [15];
    //Variables para Datos Laborales
    int pregunta=0;
    string empresa = "";
    string direccionEmp = "";
    string puesto = "";

    //Funciones para Bienvenida
    bienvenida();
    brilloTitulo();
    system("cls");//Limpia pantalla
    doritos();system("color 01");system("color 0F");

    ///Datos Generales
    cout << "\n          ***** DATOS GENERALES *****         " << "\n" << "Favor de ingresar los datos solicitados" <<endl;
    cout<< "\n" <<"Ingrese su nombre completo: "<<endl;
    cin.getline(nombre,80);
    cout<<"Ingrese su direccion residencial: "<<endl;
    cin.getline(direccion,90);
    cout<<"Ingrese su edad actual: "<<endl;
    cin >> edad;cin.ignore();
    cout<<"Ingrese el numero que corresponde a su sexo: "<< "\n" << " | 1 | Femenino" << "\n" << " | 2 | Masculino" << endl;
    cout<<" Opcion seleccionada: ";
    cin >> nsexo;
    switch(nsexo)
    {
        case 1:
            sexo = "Femenino";
            cin.ignore();
            cout << " Femenino" <<endl;
            break;

        case 2:
            sexo = "Masculino";
            cin.ignore();
            cout << " Masculino" <<endl;
            break;
        default: cout << "Ingreso una opcion incorrecta! " <<endl;
    }
    cout<<"Ingrese su numero de DPI (CUI): "<<endl;
    cin >> dpi;cin.ignore();
    cout<<"Ingrese su numero de telefono: "<<endl;
    cin >> telefono;cin.ignore();
    cout<<"Ingrese su correo electronico (e-mail): "<<endl;
    cin >> mail; cin.ignore();
    system("color 02");system("color 0F");

    ///Datos Academicos
    cout << "\n          ***** DATOS ACADEMICOS *****         " << "\nFavor de ingresar los datos solicitados" <<endl;
    cout<<"Ingrese su nombre su carrera universitaria: " <<endl;
    getline(cin,carera);
    cout<<"Ingrese su semestre actual: "<<endl;
    cin.getline(semestre,25);
    cout<<"Ingrese el nombre de su sede: "<<endl;
    cin.getline(sede,30);
    cout<<"Ingrese su jornada: "<<endl;
    cin.getline(jornada,15);
    system("color 03");system("color 0F");

    ///Datos Laborales
    cout << "\nEsta laborando actualmente ? \n" << " Si esta laborando ingrese el numero 1 de lo contrario ingrese cualquier otro\n" << "Ingrese su opcion: " ;
    cin >> pregunta;cin.ignore();
    if (pregunta==1)
    {
        cout << "\n          ***** DATOS LABORALES *****         " << "\n" << "Favor de ingresar los datos solicitados" <<endl;
        cout<< "\n" <<"Ingrese el nombre de la empresa: " <<endl;
        getline(cin,empresa);
        cout<<"Ingrese la direccion de la empresa: " <<endl;
        getline(cin,direccionEmp);
        cout<<"Ingrese su puesto en la empresa: " <<endl;
        getline(cin,puesto);
    }
    system("color 04");system("color 0F");

    ///DatoS Registrados
    cout << "\n         ***** DATOS REGISTRADOS *****          \n"<<"Datos Genrales: \nNombre: " << nombre <<endl;
    cout << "Direccion: " << direccion <<endl;
    cout << "Edad: " << edad << " anios."<<endl;
    cout <<"Sexo: " << sexo <<endl;
    cout << "DPI: " << dpi <<endl;
    cout << "No. de Telefono: " << telefono <<endl;
    cout << "Correo electronico (e-mail): " << mail <<endl;
    cout << "\nDatos Academicos:" << "\nNombre de la Carrera: " << carera << "." <<endl;
    cout << "Semestre: " << semestre <<endl;
    cout << "Sede: " << sede <<endl;
    cout << "Jornada: " << jornada <<endl;
    if (pregunta == 1)
    {
        cout << "\nDatos Laborales: " << "\nNombre de la Empresa: " << empresa << "." <<endl;
        cout << "Direccion de la Empresa: " << direccionEmp <<endl;
        cout << "Puesto Actual: " << puesto <<endl;
    }
    else
    {
        cout << "\nDatos Laborales: \n" << nombre <<" no se encuentra laborando actualemnte."<<endl;
    }
    cout << "\n   ***** INGRESO DE DATOS EXITOSO *****     \n" <<endl;
    system("color 05");system("color 0F");

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
    char intro5 [42]= " |_____/ \\___/|_|  |_|\\__\\___/|___/ ";

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
