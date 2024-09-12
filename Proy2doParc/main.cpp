#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;
//Funciones creadas
void gotoxy(int x, int y);
void textoParpadeo(string texto);
void introcolorida ();
void empresa ();
void ingresoDatos(ofstream &escritura);
void consultaDatos(ifstream &lectura);
void modiDatos(ifstream &lectura, ofstream &escritura);
void eliminarDatos(ifstream &lectura, ofstream &escritura);
void verDatos(ifstream &lectura);

int main()
{
    int opcion=0;
    ifstream lectura;ofstream escritura;//Manejo de archivos.txt
    introcolorida();
    do
    {
        system("cls");/*Limpiar pantalla*/system("color 0F");empresa ();
        gotoxy(2,11);cout << "___________ MENU DE OPCIONES ___________   \n" <<endl;
        cout << " |1| INGRESO DE DATOS" << endl;
        cout << " |2| CONSULTA DE DATOS" << endl;
        cout << " |3| MODIFICACION DE DATOS" << endl;
        cout << " |4| ELIMINACION DE DATOS" << endl;
        cout << " |5| VER TODOS LOS DATOS" << endl;
        cout << " |6| SALIR" << endl;
        cout << "Ingrese la opcicion que desee: ";
        cin >> opcion;cin.ignore();
        switch(opcion)
        {
        case 1:
            cout<< "\n INGRESO DE DATOS" << endl;
            ingresoDatos(escritura);
            system("pause>nul");//Pausa
            break;
        case 2:
            cout<< "\n CONSULTA DE DATOS" << endl;
            consultaDatos(lectura);
            system("pause>nul");//Pausa
            break;
        case 3:
            cout<< "\n MODIFICACION DE DATOS" << endl;
            modiDatos(lectura, escritura);
            system("pause>nul");//Pausa
            break;
        case 4:
            cout<< "\n ELIMINACION DE DATOS" << endl;
            eliminarDatos(lectura, escritura);
            system("pause>nul");//Pausa
            break;
        case 5:
            cout<< "\n VER TODOS DATOS" << endl;
            verDatos(lectura);
            system("pause>nul");//Pausa
            break;
        }
        if (opcion<0 || opcion>6)//Mensaje de Error
        {
            system("cls");system("color F4");cout << "\nNota: Recuerde que solo puede escoger un numero entre 1 a 5." <<endl;
            cout << "\nPresione una tecla para continuar.." <<endl;system("pause>nul");//Pausa
        }
    }while(opcion!=6);
    system("cls");system("color A1");//cout << "\n\nNos vemos..." <<endl;
    textoParpadeo("\n\n\n\n                                   __ __         __           __ \n                                  / // /__ ____ / /____ _    / /_ _____ ___ ____ \n                                 / _  / _ `(_-</ __/ _ `/   / / // / -_) _ `/ _ \\_ _ _  \n                                /_//_/\\_,_/___/\\__/\\_,_/   /_/\\_,_/\\__/\\_, /\\___(_|_|_) \n                                                                      /___/");
    return 0;
}

void ingresoDatos(ofstream &escritura)///Función para Ingreso de Datos
{
    system("cls");system("color 0F");//Limpieza de pantalla
    char mail [60],mail1 [60];//Variables a Ingresar en el doc.txt
    string sexo, estado, nombre, direccion;
    int edad, dpi, celular, telefono, nosexo, noestado;
    char c = ' ';string reemplazo = "_";//Varibles para modificar los " " por "_".
    escritura.open("DatGraAsos.txt",ios::out | ios::app);//Abre el archivo.txt (si no existe lo crea).
    if(escritura.fail())//Condicional por si falla al abrir el archivo.
    {
        system("cls");system("color F4");cout << "\nNo se pudo abrir el archivo" <<endl;
        exit(1);
    }
    cout << "   ___                                       _        ____        _            " <<endl;
    cout << "  |_ _|_ __   __ _ _ __ ___  ___  ___     __| | ___  |  _ \\  __ _| |_ ___  ___ " <<endl;
    cout << "   | || '_ \\ / _` | '__/ _ \\/ __|/ _ \\   / _` |/ _ \\ | | | |/ _` | __/ _ \\/ __| " <<endl;
    cout << "   | || | | | (_| | | |  __/\\__ \\ (_) | | (_| |  __/ | |_| | (_| | || (_) \\__ \\" <<endl;
    cout << "  |___|_| |_|\\__, |_|  \\___||___/\\___/   \\__,_|\\___| |____/ \\__,_|\\__\\___/|___/" <<endl;
    cout << "             |___/      \n\n" <<endl;
    cout << "Ingrese nombre completo: " <<endl;
    getline(cin,nombre);
    for (int i = 0; i < (int)nombre.length(); ++i)//Iniciando el cambio de caracteres...
    {
        if(nombre[i]==c)
            nombre.replace(i,1,reemplazo);
    }//Fin del cambio.
    cout << "Ingrese direccion: " <<endl;
    getline(cin,direccion);
    for (int i = 0; i < (int)direccion.length(); ++i)//Iniciando el cambio de caracteres...
    {
        if(direccion[i]==c)
            direccion.replace(i,1,reemplazo);
    }//Fin del cambio.
    do//Condición para evitar edades menores a cero.
    {
        system("color 0F");cout << "Ingrese edad: ";
        cin >> edad;cin.ignore();
        if (edad<0)//Mensaje de Error
        {
            system("color F4");cout << "\nNota: Recuerde que la edad debe ser mayor a 0." <<endl;system("pause>nul");
        }
    }while(edad<=0);
    if(edad >= 18)//If para saber si la personas es mayor de edad.
    {
        cout << nombre << " es mayor de edad." << endl;
    }
    else
    {
            cout << nombre << " es menor de edad." << endl;
    }
    do//Codicion para seleccionar su sexo
    {
     system("color 0F");cout << "Ingrese su sexo: " <<endl;
     cout << " |1| Femenino" << endl;cout << " |2| Masculino" << endl;
     cout << " Ingrese el numero de su opcion: ";
     cin >> nosexo;cin.ignore();
     if (nosexo<1 || nosexo>2)//Mensaje de Error
     {
         system("color F4");cout << "\nNota: Recuerde que solo tiene dos opciones: |1| Femenino o |2| Masculino." <<endl;system("pause>nul");
     }
     switch(nosexo)
     {
     case 1:
         system("color 05");sexo = "Femenino";cin.ignore();
         cout << nombre << " es de sexo: Femenino" <<endl;
         break;
     case 2:
         system("color 03");sexo = "Masculino";cin.ignore();
         cout << nombre << " es de sexo: Masculino" <<endl;
         break;
     }
    }while(nosexo<1 || nosexo>2);
    if(edad>=18)//Condicion para menores de 18 años evitar DPI
    {
        cout << "Ingrese DPI: " ;
        cin >> dpi;cin.ignore();
    }
    else
    {
        dpi=0000000000000;
    }
    do//Condicional para el estado civil
    {
     if(nosexo==2)//Condicional para el color en caso de error.
     {
         system("color 03");
     }
     else
     {
         system("color 05");
     }
     cout << "Ingrese su estado civil: " <<endl;
     cout << " |1| Soltero" << endl;cout << " |2| Casado" << endl;cout << " |3| Separado judicialmente" << endl;
     cout << " |4| Divorciado" << endl;cout << " |5| Viudo" << endl;
     cout << " Ingrese el numero de su opcion: ";
     cin >> noestado;cin.ignore();
     switch(noestado)
     {
     case 1:
         estado = "Soltero";cin.ignore();
         cout << nombre << " es "<< estado <<endl;
         break;
     case 2:
         estado = "Casado";cin.ignore();
         cout << nombre << " es " << estado <<endl;
         break;
     case 3:
         estado = "Separado_judicialmente";cin.ignore();
         cout << nombre << " es " << estado <<endl;
         break;
     case 4:
         estado = "Divorciado";cin.ignore();
         cout << nombre << " es " << estado <<endl;
         break;
     case 5:
         estado = "Viudo";cin.ignore();
         cout << nombre << " es " << estado <<endl;
         break;
     }
     if (noestado<1 || noestado>5)//Mensaje de Error
     {
         system("color F4");cout << "\nNota: Recuerde que solo tiene cinco opciones: |1| Soltero, |2| Casado, |3| Separado, |4| Divorciado, |5| Viudo." <<endl;system("pause>nul");
     }
    }while(noestado<1 || noestado>5);
    cout << "Ingrese numero de celular: " ;
    cin >> celular;cin.ignore();
    cout << "Ingrese numero de telefono (linea fija): " ;
    cin >> telefono;cin.ignore();
    cout << "Ingrese correo electronico: " <<endl;
    cin.getline(mail,60);
    cout << "Ingrese otro correo electronico: " <<endl;
    cin.getline(mail1,60);
    escritura<<nombre<<" "<<direccion<<" "<<edad<<" "<<sexo<<" "<<dpi<<" "<<estado<<" "<<celular<<" "<<telefono<<" "<<mail<<" "<<mail1<<"\n";
    escritura.close();//Cierra el archivo.txt
    cout <<  "\n Guardando Datos..." <<endl;Sleep(1500);cout << " Registro Guardado \n"<< "\nPresione una tecla para continuar.." <<endl;
}

void consultaDatos (ifstream &lectura)///Función para Consulta de Datos
{
    system("cls");system("color 0F");//Limpieza de Pantalla
    string cadena, lin1, lin2, lin3, lin4, lin5, lin6, lin7, lin8, lin9, lin, nombre, direccion;//Variables a utilizar
    char c = '_', c1=' ';string reemplazo = " ", r = "_";//Varibles para modificar los " " por "_" y viceversa.
    bool encontrado=false;
    if (!lectura.is_open())//Condicional para abrir el documento.txt
    {
        lectura.open("DatGraAsos.txt", ios::in);//Abre documento.txt
    }
    cout << "    ____                      _ _              _        ____        _            "<<endl;
    cout << "   / ___|___  _ __  ___ _   _| | |_ __ _    __| | ___  |  _ \\  __ _| |_ ___  ___ "<<endl;
    cout << "  | |   / _ \\| '_ \\/ __| | | | | __/ _` |  / _` |/ _ \\ | | | |/ _` | __/ _ \\/ __|"<<endl;
    cout << "  | |__| (_) | | | \\__ \\ |_| | | || (_| | | (_| |  __/ | |_| | (_| | || (_) \\__ \\"<<endl;
    cout << "   \\____\\___/|_| |_|___/\\__,_|_|\\__\\__,_|  \\__,_|\\___| |____/ \\__,_|\\__\\___/|___/\n\n" <<endl;
    cout << " Persona a consultar registros" << "\n Ingrese el nombre completo : ";//Persona a consultar sus datos
    getline(cin,cadena);cout<<endl;
    for (int i = 0; i < (int)cadena.length(); ++i)//Iniciando el cambio de caracteres Entrada...
            {
                if(cadena[i]==c1)
                    cadena.replace(i,1,r);
            }//Fin del cambio
    lectura >> lin;
    while(!lectura.eof() && !encontrado)//Mientras no sea el final y econtrado true
    {
        lectura>>lin1;
        lectura>>lin2;
        lectura>>lin3;
        lectura>>lin4;
        lectura>>lin5;
        lectura>>lin6;
        lectura>>lin7;
        lectura>>lin8;
        lectura>>lin9;
        if(lin==cadena)//Comparacion del nombre ingresado con los nombres del doc.txt
        {
            direccion=lin1;nombre=lin;//Igualar para cambiar caracteres en la salida
            for (int i = 0; i < (int)nombre.length(); ++i)//Iniciando el cambio de caracteres Salida...
            {
                if(nombre[i]==c)
                    nombre.replace(i,1,reemplazo);
            }//Fin del cambio.
            for (int i = 0; i < (int)direccion.length(); ++i)//Iniciando el cambio de caracteres Salida...
            {
                if(direccion[i]==c)
                    direccion.replace(i,1,reemplazo);
            }//Fin del cambio.
            system("color 0A");cout <<  " Buscando Registros en el archivo..." <<endl;Sleep(1000);cout << " Registro Encontrado \n" <<endl;
            cout << "|Nombre:            | " << nombre <<endl;
            cout << "|Direccion:         | " << direccion <<endl;
            cout << "|Edad:              | " << lin2 <<endl;
            cout << "|Sexo:              | " << lin3 <<endl;
            cout << "|DPI:               | " << lin4 <<endl;
            cout << "|Estado civil:      | " << lin5 <<endl;
            cout << "|No. Celular:       | " << lin6 <<endl;
            cout << "|No. Telefono:      | " << lin7 <<endl;
            cout << "|Correo electronico:| " << lin8 <<endl;
            cout << "|Correo electronico:| " << lin9 <<endl;
            encontrado=true;
        }
        lectura>>lin;
    }
    lectura.close();/*Cierra el doc.txt*/cout << "\nPresione una tecla para continuar.." <<endl;
    if(!encontrado)//Mensaje al no encontrar Dato
    {
        system("cls");system("color F4");
        cout  << "\n\n***** " << cadena << " ***** Dato no encontrado...\nNota: Es posible que halla escrito mal el nombre intente de nuevo." <<endl;
        cout << "Recuerde que debe ingresar el nombre completo para realizar la busqueda." <<endl;
    }
}

void modiDatos (ifstream &lectura, ofstream &escritura)///Función para Modificación de Datos
{
    system("cls");system("color 0F");//Limpieza de pantalla
    string cadena, lin1, lin2, lin3, lin4, lin5, lin6, lin7, lin8, lin9, lin, aux, aux1, aux3, aux5, aux8, aux9, nombre, direccion;//Variables a usar
    int aux2, aux4, aux6, aux7, nosexo, noestado;
    char c = '_', c1=' ';string reemplazo = " ", r = "_";//Varibles para modificar los " " por "_" y viceversa.
    bool encontrado=false;
    lectura.open("DatGraAsos.txt",ios::in);
    escritura.open("Temporal.txt",ios::out);
    if (lectura.is_open())//Condicional por si no abre los documentos.txt
    {
        cout << "   __  __           _ _  __ _                _                   _        ____        _            "<<endl;
        cout << "  |  \\/  | ___   __| (_)/ _(_) ___ __ _  ___(_) ___  _ __     __| | ___  |  _ \\  __ _| |_ ___  ___ "<<endl;
        cout << "  | |\\/| |/ _ \\ / _` | | |_| |/ __/ _` |/ __| |/ _ \\| '_ \\   / _` |/ _ \\ | | | |/ _` | __/ _ \\/ __|"<<endl;
        cout << "  | |  | | (_) | (_| | |  _| | (_| (_| | (__| | (_) | | | | | (_| |  __/ | |_| | (_| | || (_) \\__ \\"<<endl;
        cout << "  |_|  |_|\\___/ \\__,_|_|_| |_|\\___\\__,_|\\___|_|\\___/|_| |_|  \\__,_|\\___| |____/ \\__,_|\\__\\___/|___/\n\n" <<endl;
        cout << " Persona a modificar registros " << "\n Ingrese el nombre completo : ";//Persona a modificar sus datos
        getline(cin,cadena);cout<<endl;
        for (int i = 0; i < (int)cadena.length(); ++i)//Iniciando el cambio de caracteres Entrada...
        {
            if(cadena[i]==c1)
                cadena.replace(i,1,r);
        }//Fin del cambio
        lectura >> lin;
        while(!lectura.eof())//Mientras no sea el final
        {
            lectura>>lin1;
            lectura>>lin2;
            lectura>>lin3;
            lectura>>lin4;
            lectura>>lin5;
            lectura>>lin6;
            lectura>>lin7;
            lectura>>lin8;
            lectura>>lin9;
            if(lin==cadena)//Comparando registro ingresado con los datos del doc.txt
            {
                direccion=lin1;nombre=lin;//Igualar para cambiar caracteres en la salida
                for (int i = 0; i < (int)nombre.length(); ++i)//Iniciando el cambio de caracteres Salida...
                {
                    if(nombre[i]==c)
                        nombre.replace(i,1,reemplazo);
                }//Fin del cambio.
                for (int i = 0; i < (int)direccion.length(); ++i)//Iniciando el cambio de caracteres Salida...
                {
                    if(direccion[i]==c)
                        direccion.replace(i,1,reemplazo);
                }//Fin del cambio.
                system("color 0A");cout <<  "\n Buscando Registros en el archivo..." <<endl;Sleep(1500);cout << " Registro Encontrado \n" <<endl;
                cout << "|Nombre:            | " << nombre <<endl;
                cout << "|Direccion:         | " << direccion <<endl;
                cout << "|Edad:              | " << lin2 <<endl;
                cout << "|Sexo:              | " << lin3 <<endl;
                cout << "|DPI:               | " << lin4 <<endl;
                cout << "|Estado civil:      | " << lin5 <<endl;
                cout << "|No. Celular:       | " << lin6 <<endl;
                cout << "|No. Telefono:      | " << lin7 <<endl;
                cout << "|Correo electronico:| " << lin8 <<endl;
                cout << "|Correo electronico:| " << lin9 <<endl;
                encontrado=true;system("color 0F");
                cout <<  "\n A continuacion se empezara a editar..." <<endl;
                cout << "Digite nuevo nombre: " <<endl;
                getline(cin,aux);
                for (int i = 0; i < (int)aux.length(); ++i)//Iniciando el cambio de caracteres...
                {
                    if(aux[i]==c1)
                        aux.replace(i,1,r);
                }//Fin del cambio.
                cout << "Digite nueva direccion: " <<endl;
                getline(cin,aux1);
                for (int i = 0; i < (int)aux1.length(); ++i)//Iniciando el cambio de caracteres...
                {
                    if(aux1[i]==c1)
                        aux1.replace(i,1,r);
                }//Fin del cambio.
                cout << "Digite nueva edad: " <<endl;
                cin >> aux2;cin.ignore();
                do
                {
                    cout << "Ingrese nuevo sexo: " <<endl;
                    cout << " |1| Femenino" << endl;cout << " |2| Masculino" << endl;
                    cout << " Ingrese el numero de su opcion: ";
                    cin >> nosexo;cin.ignore();
                    if (nosexo<1 || nosexo>2)//Mensaje de Error
                    {
                        system("color F4");cout << "\nNota: Recuerde que solo tiene dos opciones: |1| Femenino o |2| Masculino." <<endl;system("pause>nul");
                    }
                    switch(nosexo)
                    {
                    case 1:
                        system("color 05");aux3 = "Femenino";cin.ignore();
                        break;
                    case 2:
                        system("color 03");aux3  = "Masculino";cin.ignore();
                        break;
                    }
                }while(nosexo<1 || nosexo>2);
                if(aux2>=18)//Condicion para menores de 18 años evitar DPI
                {
                    cout << "Digite nuevo DPI: " <<endl;
                    cin >> aux4;cin.ignore();
                }
                else
                {
                    aux4=0000000000000;
                }
                do
                {
                    if(nosexo==2)//Condicional para el color en caso de error.
                    {system("color 03");}
                    else
                    {system("color 05");}
                    cout << "Ingrese su nuevo estado civil: " <<endl;
                    cout << " |1| Soltero" << endl;cout << " |2| Casado" << endl;cout << " |3| Separado judicialmente" << endl;
                    cout << " |4| Divorciado" << endl;cout << " |5| Viudo" << endl;
                    cout << " Ingrese el numero de su opcion: ";
                    cin >> noestado;cin.ignore();
                    if (noestado<1 || noestado>5)//Mensaje de Error
                    {
                        system("color F4");
                        cout << "\nNota: Recuerde que solo tiene cinco opciones: |1| Soltero, |2| Casado, |3| Separado, |4| Divorciado, |5| Viudo." <<endl;
                        system("pause>nul");
                    }
                    switch(noestado)
                    {
                    case 1:
                        aux5 = "Soltero";cin.ignore();
                        break;
                    case 2:
                        aux5 = "Casado";cin.ignore();
                        break;
                    case 3:
                        aux5 = "Separado judicialmente";cin.ignore();
                        break;
                    case 4:
                        aux5 = "Divorciado";cin.ignore();
                        break;
                    case 5:
                        aux5 = "Viudo";cin.ignore();
                        break;
                    }
                }while(noestado<1 || noestado>5);
                cout << "Digite nuevo No. Celular: " <<endl;
                cin >> aux6;cin.ignore();
                cout << "Digite nuevo No. Telefono: " <<endl;
                cin >> aux7;cin.ignore();
                cout << "Digite nuevo correo electronico: " <<endl;
                getline(cin, aux8);
                cout << "Digite nuevo correo electronico secundario: " <<endl;
                getline(cin, aux9);
                cout <<  "\n Realizando los Cambios..." <<endl;Sleep(1500);cout << " Registro Modificado" <<endl;
                escritura <<aux<<" "<<aux1<<" "<<aux2<<" "<<aux3<<" "<<aux4<<" "<<aux5<<" "<<aux6<<" "<<aux7<<" "<<aux8<<" "<<aux9<<"\n";
            }
            else
            {
                escritura <<lin<<" "<<lin1<<" "<<lin2<<" "<<lin3<<" "<<lin4<<" "<<lin5<<" "<<lin6<<" "<<lin7<<" "<<lin8<<" "<<lin9<<"\n";
            }
            lectura >> lin;
        }
    lectura.close();escritura.close();//Cerrar documentos.txt
    remove("DatGraAsos.txt");//Elimina doc.txt
    rename("Temporal.txt","DatGraAsos.txt");//Renombra doc.txt
    }
    else//Mnesaje al no encontrar doc.txt
    {
        system("cls");system("color F4");cout << "\n\n Error: No se pudo abrir el archivo" << endl;
        //remove("DatGraAsos.txt");rename("Temporal.txt","DatGraAsos.txt");
    }
    if(!encontrado)//Mensaje al no encontrar Dato
    {
        system("cls");system("color F4");
        cout  << "\n\n***** " << cadena << " ***** Dato no encontrado...\nNota: Es posible que halla escrito mal el nombre intente de nuevo." <<endl;
        cout << "Recuerde que debe ingresar el nombre completo para realizar la busqueda." <<endl;
    }
    cout << "\nPresione una tecla para continuar.." <<endl;
}

void eliminarDatos(ifstream &lectura, ofstream &escritura)///Función para Eliminar Datos
{
    system("cls");system("color 0F");
    string cadena, lin1, lin2, lin3, lin4, lin5, lin6, lin7, lin8, lin9, lin, aux, aux1, aux3, aux5, aux8, aux9, nombre, direccion;//Variables a usar
    int aux2, aux4, aux6, aux7;
    char c = '_', c1=' ';string reemplazo = " ", r = "_";//Varibles para modificar los " " por "_" y viceversa.
    bool encontrado=false;
    lectura.open("DatGraAsos.txt",ios::in);escritura.open("Temporal.txt",ios::out);//Abrir documentos.txt
    if (lectura.is_open())//Condicional por si no abre los documentos.txt
    {
        cout << "   _____ _ _           _                  _                   _        ____        _            "<<endl;
        cout << "  | ____| (_)_ __ ___ (_)_ __   __ _  ___(_) ___  _ __     __| | ___  |  _ \\  __ _| |_ ___  ___ "<<endl;
        cout << "  |  _| | | | '_ ` _ \\| | '_ \\ / _` |/ __| |/ _ \\| '_ \\   / _` |/ _ \\ | | | |/ _` | __/ _ \\/ __|"<<endl;
        cout << "  | |___| | | | | | | | | | | | (_| | (__| | (_) | | | | | (_| |  __/ | |_| | (_| | || (_) \\__ \\"<<endl;
        cout << "  |_____|_|_|_| |_| |_|_|_| |_|\\__,_|\\___|_|\\___/|_| |_|  \\__,_|\\___| |____/ \\__,_|\\__\\___/|___/\n\n" <<endl;
        cout << " Persona a eliminar registros " << "\n Ingrese el nombre completo : ";//Persona a eliminar sus datos
        getline(cin,cadena);cout<<endl;
        for (int i = 0; i < (int)cadena.length(); ++i)//Iniciando el cambio de caracteres Entrada...
        {
            if(cadena[i]==c1)
                cadena.replace(i,1,r);
        }//Fin del cambio
        lectura >> lin;
        while(!lectura.eof())//Mientras no sea el final
        {
            lectura>>lin1;
            lectura>>lin2;
            lectura>>lin3;
            lectura>>lin4;
            lectura>>lin5;
            lectura>>lin6;
            lectura>>lin7;
            lectura>>lin8;
            lectura>>lin9;
            if(lin==cadena)//Comparando registro ingresado con los datos del doc.txt
            {
                direccion=lin1;nombre=lin;//Igualar para cambiar caracteres en la salida
                for (int i = 0; i < (int)nombre.length(); ++i)//Iniciando el cambio de caracteres Salida...
                {
                    if(nombre[i]==c)
                        nombre.replace(i,1,reemplazo);
                }//Fin del cambio.
                for (int i = 0; i < (int)direccion.length(); ++i)//Iniciando el cambio de caracteres Salida...
                {
                    if(direccion[i]==c)
                        direccion.replace(i,1,reemplazo);
                }//Fin del cambio.
                system("color 0A");cout <<  "\n Buscando Registros en el archivo..." <<endl;Sleep(1500);cout << " Registro Encontrado \n" <<endl;
                cout << "|Nombre:            | " << nombre <<endl;
                cout << "|Direccion:         | " << direccion <<endl;
                cout << "|Edad:              | " << lin2 <<endl;
                cout << "|Sexo:              | " << lin3 <<endl;
                cout << "|DPI:               | " << lin4 <<endl;
                cout << "|Estado civil:      | " << lin5 <<endl;
                cout << "|No. Celular:       | " << lin6 <<endl;
                cout << "|No. Telefono:      | " << lin7 <<endl;
                cout << "|Correo electronico:| " << lin8 <<endl;
                cout << "|Correo electronico:| " << lin9 <<endl;
                encontrado=true;system("color 0C");
                cout <<  "\n Eliminando los Datos..." <<endl;Sleep(1500);cout << " Registro Eliminado" <<endl;
            }
            else
            {
                escritura <<lin<<" "<<lin1<<" "<<lin2<<" "<<lin3<<" "<<lin4<<" "<<lin5<<" "<<lin6<<" "<<lin7<<" "<<lin8<<" "<<lin9<<"\n";
            }
            lectura >> lin;
        }
    lectura.close();escritura.close();//Cerrar documentos.txt
    remove("DatGraAsos.txt");//Eliminar doc.txt
    rename("Temporal.txt","DatGraAsos.txt");//Renombrar documento.txt
    }
    else//Mnesaje al no encontrar doc.txt
    {
        system("cls");system("color F4");cout << "\n\n Error: No se pudo abrir el archivo" << endl;
        //remove("DatGraAsos.txt");rename("Temporal.txt","DatGraAsos.txt");
    }
    if(!encontrado)//Mensaje al no encontrar Dato
    {
        system("cls");system("color F4");
        cout  << "\n\n***** " << cadena << " ***** Dato no encontrado...\nNota: Es posible que halla escrito mal el nombre intente de nuevo." <<endl;
        cout << "Recuerde que debe ingresar el nombre completo para realizar la busqueda." <<endl;
    }
    cout << "\nPresione una tecla para continuar.." <<endl;
}

void verDatos(ifstream &lectura)///Funcion para leer archivo de texto
{
    system("cls");system("color 0F");//Limpieza de pantalla
    string cadena, lin1, lin2, lin3, lin4, lin5, lin6, lin7, lin8, lin9, lin, direccion;//Variables a utilizar
    char c = '_';string reemplazo = " ";//Varibles para modificar los "_" por " "
    lectura.open("DatGraAsos.txt",ios::in);//Abre documento.txt en Lectura
    if(lectura.fail())//Error al no encontrar el archivo
    {
        system("cls");system("color F4");cout << "\n\nError: No se pudo abrir el archivo" << endl;exit(1);
    }
    cout << "  __     __          ____        _            " <<endl;
    cout << "  \\ \\   / /__ _ __  |  _ \\  __ _| |_ ___  ___ " <<endl;
    cout << "   \\ \\ / / _ \\ '__| | | | |/ _` | __/ _ \\/ __|" <<endl;
    cout << "    \\ V /  __/ |    | |_| | (_| | || (_) \\__ \\" <<endl;
    cout << "     \\_/ \\___|_|    |____/ \\__,_|\\__\\___/|___/\n\n" <<endl;lectura >> lin;
    cout << "Registros del archivo... \n"<<endl;Sleep(300);
    while(!lectura.eof())//Mientras no sea el final
    {
        cadena=lin;
        for(int i = 0; i < (int)cadena.length(); ++i)//Iniciando el cambio de caracteres Salida...
        {
            if(cadena[i]==c)
                cadena.replace(i,1,reemplazo);
        }//Fin del cambio
        lectura>>lin1;direccion=lin1;
        for(int i = 0; i < (int)direccion.length(); ++i)//Iniciando el cambio de caracteres Salida...
        {
            if(direccion[i]==c)
                direccion.replace(i,1,reemplazo);
        }//Fin del cambio
        lectura>>lin2;
        lectura>>lin3;
        lectura>>lin4;
        lectura>>lin5;
        lectura>>lin6;
        lectura>>lin7;
        lectura>>lin8;
        lectura>>lin9;
        cout << "|Nombre:            | " << cadena <<endl;
        cout << "|Direccion:         | " << direccion <<endl;
        cout << "|Edad:              | " << lin2 <<endl;
        cout << "|Sexo:              | " << lin3 <<endl;
        cout << "|DPI:               | " << lin4 <<endl;
        cout << "|Estado civil:      | " << lin5 <<endl;
        cout << "|No. Celular:       | " << lin6 <<endl;
        cout << "|No. Telefono:      | " << lin7 <<endl;
        cout << "|Correo electronico:| " << lin8 <<endl;
        cout << "|Correo electronico:| " << lin9 <<endl;
        lectura>>lin;cout<<endl;Sleep(500);
    }
    lectura.close();/*Cierra el doc.txt*/cout << "Presione una tecla para continuar... \n"<<endl;
}

void empresa ()/// Nombre de la Empresa
{
    gotoxy(13,2);//Posición.
    cout << "____________ _____ _____ ______  ___  ___  ______  ___ ___________  _____       _____ _____" << endl;
    gotoxy(13,3);//Posición.
    cout << "| ___ \\ ___ \\  _  |  __ \\| ___ \\/ _ \\ |  \\/  ||  \\/  ||  ___| ___ \\/  ___|     |  __ \\_   _|" <<endl;
    gotoxy(13,4);//Posición.
    cout << "| |_/ / |_/ / | | | |  \\/| |_/ / /_\\ \\| .  . || .  . || |__ | |_/ /\\ `--.      | |  \\/ | |  " <<endl;
    gotoxy(13,5);//Posición.
    cout << "|  __/|    /| | | | | __ |    /|  _  || |\\/| || |\\/| ||  __||    /  `--. \\     | | __  | |  " <<endl;
    gotoxy(13,6);//Posición.
    cout << "| |   | |\\ \\\\ \\_/ / |_\\ \\| |\\ \\| | | || |  | || |  | || |___| |\\ \\ /\\__/ /     | |_\\ \\ | |  " <<endl;
    gotoxy(13,7);//Posición.
    cout << "\\_|   \\_| \\_|\\___/ \\____/\\_| \\_\\_| |_/\\_|  |_/\\_|  |_/\\____/\\_| \\_|\\____/       \\____/ \\_/ " <<endl;
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

void introcolorida ()
{
    textoParpadeo("\n             ____________ _____ _____ ______  ___  ___  ______  ___ ___________  _____       _____ _____\n             | ___ \\ ___ \\  _  |  __ \\| ___ \\/ _ \\ |  \\/  ||  \\/  ||  ___| ___ \\/  ___|     |  __ \\_   _|\n             | |_/ / |_/ / | | | |  \\/| |_/ / /_\\ \\| .  . || .  . || |__ | |_/ /\\ `--.      | |  \\/ | | \n             |  __/|    /| | | | | __ |    /|  _  || |\\/| || |\\/| ||  __||    /  `--. \\     | | __  | |  \n             | |   | |\\ \\\\ \\_/ / |_\\ \\| |\\ \\| | | || |  | || |  | || |___| |\\ \\ /\\__/ /     | |_\\ \\ | |  \n             \\_|   \\_| \\_|\\___/ \\____/\\_| \\_\\_| |_/\\_|  |_/\\_|  |_/\\____/\\_| \\_|\\____/       \\____/ \\_/ " );
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
            Sleep(170);//Tiempo de espera.
            if (contador = 6)
            {
                system("cls");
                system("color 02");
                cout << texto;
                Sleep(170);
                if (contador = 9)
                {
                    system("cls");
                    system("color 03");
                    cout << texto;
                    Sleep(170);
                    if (contador = 12)
                    {
                        system("cls");
                        system("color 04");
                        cout << texto;
                        Sleep(170);
                        if (contador = 15)
                        {
                            system("cls");
                            system("color 05");
                            cout << texto;
                            Sleep(170);
                            if (contador = 18)
                            {
                                system("cls");
                                system("color 06");
                                cout << texto;
                                Sleep(170);
                                if (contador = 21)
                                {
                                    system("cls");
                                    system("color 08");
                                    cout << texto;
                                    Sleep(170);
                                    if (contador = 24)
                                    {
                                        system("cls");
                                        system("color 09");
                                        cout << texto;
                                        Sleep(170);
                                        if (contador = 27)
                                        {
                                            system("cls");
                                            system("color 0A");
                                            cout << texto;
                                            Sleep(170);
                                            if (contador = 30)
                                            {
                                                system("cls");
                                                system("color 0B");
                                                cout << texto;
                                                Sleep(170);
                                                if (contador = 33)
                                                {
                                                    system("cls");
                                                    system("color 0C");
                                                    cout << texto;
                                                    Sleep(170);
                                                    if (contador = 36)
                                                    {
                                                        system("cls");
                                                        system("color 0D");
                                                        cout << texto;
                                                        Sleep(170);
                                                        if (contador = 39)
                                                        {
                                                            system("cls");
                                                            system("color 0E");
                                                            cout << texto;
                                                            Sleep(170);
                                                            if (contador = 42)
                                                            {
                                                                system("cls");
                                                                system("color 0F");
                                                                cout << texto;
                                                                Sleep(170);
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
