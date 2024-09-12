#include <iostream>
#include <string>
#include <string.h>

using namespace std;

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

    ///Datos Academicos
    cout << "\n          ***** DATOS ACADEMICOS *****         " << "\n" << "Favor de ingresar los datos solicitados" <<endl;
    cout<< "\n" <<"Ingrese su nombre su carrera universitaria: " <<endl;
    getline(cin,carera);
    cout<<"Ingrese su semestre actual: "<<endl;
    cin.getline(semestre,25);
    cout<<"Ingrese el nombre de su sede: "<<endl;
    cin.getline(sede,30);
    cout<<"Ingrese su jornada: "<<endl;
    cin.getline(jornada,15);

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


    //DatoS Registrados
    cout << "\n         ***** DATOS REGISTRADOS *****          \n"<<"Datos Genrales: \nNombre: " << nombre <<endl;
    cout << "Direccion: " << direccion <<endl;
    cout << "Edad: " << edad << " anios."<<endl;
    cout <<"Sexo: " << sexo <<endl;
    cout << "DPI: " << dpi <<endl;
    cout << "No. de Telefono: " << telefono <<endl;
    cout << "Correo electronico (e-mail): " << mail <<endl;
    cout << "\nDatos Academicos:" << "Nombre de la Carrera: " << carera << "." <<endl;
    cout << "Semestre: " << semestre <<endl;
    cout << "Sede: " << sede <<endl;
    cout << "Jornada: " << jornada <<endl;
    if (pregunta == 1)
    {
        cout << "\nDatos Laborales " << "Nombre de la Empresa: " << empresa << "." <<endl;
        cout << "Direccion de la Empresa: " << direccionEmp <<endl;
        cout << "Puesto Actual: " << puesto <<endl;
    }
    else
    {
        cout << "\nDatos Laborales \n" << nombre <<" no se encuentra laborando actualemnte."<<endl;
    }
    cout << "\n   ***** INGRESO DE DATOS EXITOSO *****     \n" <<endl;
    return 0;
}
