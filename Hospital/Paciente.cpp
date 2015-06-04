#include "Paciente.h"
#include <iostream>

using namespace std;

int i;

Paciente::Paciente()
{
    //ctor
}

void Paciente::capturar()
{
    cout<<"PACIENTE "<<i<<endl;
    cout<<"ID: "<<endl;
    cin>>idpaciente;
    cout<<"Nombre: "<<endl;
    cin>>nombre;
    cout<<"Apellido Paterno: "<<endl;
    cin>>apellidopaterno;
    cout<<"Apellido Materno: "<<endl;
    cin>>apellidomaterno;
    cout<<"Sexo: "<<endl;
    cin>>sexo;
    cout<<"Estado Civil: "<<endl;
    cin>>edocivil;
    cout<<"Calle: "<<endl;
    cin>>calle;
    cout<<"Numero: "<<endl;
    cin>>numero;
    cout<<"Telefono: "<<endl;
    cin>>telefono;
    cout<<"Dia: "<<endl;
    cin>>dia;
    cout<<"Mes: "<<endl;
    cin>>mes;
    cout<<"Ano: "<<endl;
    cin>>ano;
    cout<<"Antecedentes [d] DIABETES [h] HIPERTENCION [c] CANCER: "<<endl;
    cin>>ant;
    i++;
}

void Paciente::mostrar()
{
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"ID: "<<idpaciente<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Estado Civil: "<<edocivil<<endl;
    cout<<"Calle: "<<calle<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Ano: "<<ano<<endl;
    cout<<"Antecedentes [d] DIABETES [h] HIPERTENCION [c] CANCER : "<<ant<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
}

void Paciente::buscar()
{
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"ID: "<<idpaciente<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Estado Civil: "<<edocivil<<endl;
    cout<<"Calle: "<<calle<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Ano: "<<ano<<endl;
    cout<<"Antecedentes [d]DIABETES [h]HIPERTENCION [c]CANCER: "<<ant<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
}

void Paciente::modificar()
{
int mod;

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"ID: "<<idpaciente<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Estado Civil: "<<edocivil<<endl;
    cout<<"Calle: "<<calle<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Ano: "<<ano<<endl;
    cout<<"Antecedentes [d]DIABETES [h]HIPERTENCION [c]CANCER: "<<ant<<endl;

    cout<<"Que dato quiere modificar \n";
    cout<<"1.Nombre"<<endl;;
    cout<<"2.Apellido Paterno: "<<endl;
    cout<<"3.Apellido Materno: "<<endl;
    cout<<"4.Sexo: "<<sexo<<endl;
    cout<<"5.Estado Civil: "<<endl;
    cout<<"6.Calle: "<<endl;
    cout<<"7.Numero: "<<endl;
    cout<<"8.Telefono: "<<endl;
    cout<<"9.Dia: "<<endl;
    cout<<"10.Mes: "<<endl;
    cout<<"11.Ano: "<<endl;
    cout<<"12.Antecedentes [d]DIABETES [h]HIPERTENCION [c]CANCER: "<<endl;
    cout<<"13.Salir: "<<endl;
    cin>>mod;

do{
    switch(mod){
        case 1:
            cout<<"Digite el nombre:";
            cin>>nombre;
            break;
        case 2:
            cout<<"Apellido Paterno: "<<endl;
            cin>>apellidopaterno;
            break;
        case 3:
            cout<<"Apellido Materno: "<<endl;
            cin>>apellidomaterno;
            break;
        case 4:
            cout<<"Sexo: "<<endl;
            cin>>sexo;
            break;
        case 5:
            cout<<"Estado Civil: "<<endl;
            cin>>edocivil;
            break;
        case 6:
            cout<<"Calle: "<<endl;
            cin>>calle;
            break;
        case 7:
            cout<<"Numero: "<<endl;
            cin>>numero;
            break;
        case 8:
            cout<<"Telefono: "<<endl;
            cin>>telefono;
            break;
        case 9:
            cout<<"Dia: "<<endl;
            cin>>dia;
            break;
        case 10:
            cout<<"Mes: "<<endl;
            cin>>mes;
            break;
        case 11:
        cout<<"Ano: "<<endl;
        cin>>ano;
            break;
        case 12:
        cout<<"Digite el antecedente [d]DIABETES [h]HIPERTENCION [c]CANCER:";
        cin>>ant;
        break;
        case 13:
            break;
        default:
            cout<<"opcion no valida";
  }
  }while(mod!=13);
}
