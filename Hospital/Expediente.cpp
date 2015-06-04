#include "Expediente.h"
#include <iostream>

using namespace std;

int k;

Expediente::Expediente()
{
    //ctor
}

void Expediente::capturar()
{
    cout<<"EXPEDIENTE "<<k<<endl;
    cout<<"NUMERO DE EXPEDIENTE: "<<endl;
    cin>>numE;
    cout<<"Nombre del Paciente: "<<endl;
    cin>>nombre;
    k++;
}

void Expediente::mostrar()
{

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"NUMERO DE EXPEDIENTE: "<<numE<<endl;
    cout<<"Nombre del Paciente: "<<nombre<<endl;

}

void Expediente::buscar()
{

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"NUMERO DE EXPEDIENTE: "<<numE<<endl;
    cout<<"Nombre del Paciente: "<<nombre<<endl;
 }

void Expediente::modificar()
{
int mode;

    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"NUMERO DE EXPEDIENTE: "<<numE<<endl;
    cout<<"Nombre del Paciente: "<<nombre<<endl;

    cout<<"Que dato quiere modificar \n";
    cout<<"1.Nombre del Paciente \n";
    cin>>mode;
do{
    switch(mode)
    {
        case 1:
        cout<<"Digite el nombre:";
        cin>>nombre;
        case 2:
            break;
        default:
            cout<<"opcion no valida";
            break;
    }
  }  while(mode!= 2);

}
