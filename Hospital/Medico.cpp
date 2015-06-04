#include "Medico.h"
#include <iostream>

using namespace std;

int j;

Medico::Medico()
{
    //ctor
}

void Medico::capturar()
{
    cout<<"MEDICO "<<j<<endl;
    cout<<"ID: "<<endl;
    cin>>idmedico;
    cout<<"Nombre: "<<endl;
    cin>>nombre;
    cout<<"Apellido Paterno: "<<endl;
    cin>>apellidopaterno;
    cout<<"Nombre: "<<endl;
    cin>>apellidomaterno;
    cout<<"Calle: "<<endl;
    cin>>calle;
    cout<<"Numero: "<<endl;
    cin>>numero;
    cout<<"Telefono: "<<endl;
    cin>>telefono;
    cout<<"Especialidad: "<<endl;
    cin>>especialidad;
    cout<<"Activo: "<<endl;
    cin>>activo;
    j++;
}

void Medico::mostrar()
{
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"ID: "<<idmedico<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    cout<<"Calle: "<<calle<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Especialidad: "<<especialidad<<endl;
    cout<<"Activo: "<<activo<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;

}

void Medico::buscar()
{

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"ID: "<<idmedico<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    cout<<"Calle: "<<calle<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Especialidad: "<<especialidad<<endl;
    cout<<"Activo: "<<activo<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
   }

void Medico::modificar()
{
int modm;

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"ID: "<<idmedico<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    cout<<"Calle: "<<calle<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Especialidad: "<<especialidad<<endl;
    cout<<"Activo: "<<activo<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;

    cout<<"Que dato quiere modificar \n";
    cout<<"1.Nombre"<<endl;
    cout<<"2.Apellido Paterno: "<<endl;
    cout<<"3.Apellido Materno: "<<endl;
    cout<<"4.Calle: "<<endl;
    cout<<"5.Numero: "<<endl;
    cout<<"6.Telefono: "<<endl;
    cout<<"7.Especialidad: "<<endl;
    cout<<"8.Activo: "<<endl;
    cout<<"9.Salir: "<<endl;

    cin>>modm;

do
{

    switch(modm)
    {
        case 1:
            cout<<"Digite el nombre:";
            cin>>nombre;
            break;
        case 2:
            cout<<"Apellido Paterno: "<<endl;
            cin>>apellidopaterno;
            break;
        case 3:
            cout<<"Nombre: "<<endl;
            cin>>apellidomaterno;
            break;
        case 4:
            cout<<"Calle: "<<endl;
            cin>>calle;
            break;
        case 5:
        cout<<"Numero: "<<endl;
        cin>>numero;
            break;
        case 6:
            cout<<"Telefono: "<<endl;
            cin>>telefono;
            break;
        case 7:
            cout<<"Especialidad: "<<endl;
            cin>>especialidad;
            break;
        case 8:
            cout<<"Activo: "<<endl;
            cin>>activo;
            break;
        case 9:
            break;
        default:
            cout<<"opcion no valida";
            break;
    }
    }while(modm!=9);
}
