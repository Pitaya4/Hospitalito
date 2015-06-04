#include <iostream>
#include <string.h>
#include <Paciente.h>
#include <Medico.h>
#include <Expediente.h>

using namespace std;

int main()
{
Paciente p[10];
Medico m[10];
Expediente e[10];
int opc, salir;
char idp[10], idm[10], ne[10];

do
{
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"1.PACIENTE"<<endl;
        cout<<"2.MEDICO"<<endl;
        cout<<"3.EXPEDIENTE"<<endl;
        cout<<"4.SALIR"<<endl;
        cin>>opc;

        switch(opc)
        {
        case 1:
        int opc1;
        cout<<"MENU PACIENTE"<<endl;
        cout<<"1.Capturar"<<endl;
        cout<<"2.Mostrar"<<endl;
        cout<<"3.Buscar"<<endl;
        cout<<"4.Modificar"<<endl;
        cout<<"5.Salir"<<endl;
        cin>>opc1;

        switch(opc1)
        {
        case 1:
        {
            for(int i=0; i<10; i++)
            do
            {
            p[i].capturar();
            i++;
            cout<<"Desea ingresar otro si=1, no=2: ";
            cin>>salir;
            }
            while(salir!=2);
        }
            break;
        case 2:
            for(int i=0; i<10; i++)
            {
            cout << "PACIENTE [" << i << "] "<<endl;
            p[i].mostrar();
            }
            break;
       case 3:
            cout<<"Codigo del Paciente a Buscar: "<<endl;
            cin>>idp;

            for(int i=0; i<10; i++)
            {
            if(strcmp(p[i].idpaciente, idp)== 0)
            {
            cout << "PACIENTE [" << i << "] "<<endl;
            p[i].buscar();

            }
            else if(i==2-1)
            {
            cout<<"NO EXISTE PACIENTE"<<endl;
            }
            }
            break;
        case 4:
            cout<<"Codigo del Paciente a Modificar: "<<endl;
            cin>>idp;

            for(int i=0; i<10; i++)
            {
            if(strcmp(p[i].idpaciente, idp)== 0)
            {
            cout << "PACIENTE [" << i << "] "<<endl;
            p[i].modificar();
            }
            }
            break;
        case 5:
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
            break;
            case 2:
                int opc2, salir2;

                cout<<"MENU MEDICO"<<endl;
                cout<<"1.Capturar"<<endl;
                cout<<"2.Mostrar"<<endl;
                cout<<"3.Buscar"<<endl;
                cout<<"4.Modificar"<<endl;
                cout<<"5.Salir"<<endl;
                cin>>opc2;

            switch(opc2)
            {
            case 1:
                {
                for(int j=0; j<10; j++)
                do
                {
                m[j].capturar();
                //j++;

                cout<<"Desea ingresar otro si=1, no=2: ";
                cin>>salir2;

                }
                while(salir2!=2);
                }
                break;
            case 2:
                for(int j=0; j<10; j++)
                {
                cout << "MEDICO [" << j << "] "<<endl;
                m[j].mostrar();
                }
                break;
                case 3:
                cout<<"Codigo del Medico a Buscar: "<<endl;
                cin>>idm;

                for(int j=0; j<10; j++)
                {
                if(strcmp(m[j].idmedico, idm)== 0)
                {
                cout << "MEDICO [" << j << "] "<<endl;
                m[j].buscar();

                }
                else if(j==2-1)
                {
                cout<<"NO EXISTE MEDICO"<<endl;
                }
                }
                break;
            case 4:

                cout<<"Codigo del Medico a Modificar: "<<endl;
                cin>>idm;

                for(int j=0; j<10; j++)
                {
                if(strcmp(m[j].idmedico, idm)== 0)
                {
                cout << "MEDICO [" << j << "] "<<endl;
                m[j].modificar();
                }
                }
                break;
            case 5:
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                break;
            }
            break;
        case 3:
            int opc3;

                cout<<"MENU EXPEDIENTE"<<endl;
                cout<<"1.Capturar"<<endl;
                cout<<"2.Mostrar"<<endl;
                cout<<"3.Buscar"<<endl;
                cout<<"4.Modificar"<<endl;
                cout<<"5.Salir"<<endl;
                cin>>opc3;

            switch(opc3)
            {
            case 1:
                {
                for(int k=0; k<10; k++)
                do
                {
                e[k].capturar();
                cout<<"Desea ingresar otro si=1, no=2: ";
                cin>>salir;
                k++;
                }
                while(salir!=2);
                }
            case 2:
                for(int k=0; k<10; k++)
                {
                cout << "EXPEDIENTE [" << k << "] "<<endl;
                e[k].mostrar();
                }
                break;
                case 3:
                cout<<"Numero de Expediente a Buscar: "<<endl;
                cin>>ne;

                for(int k=0; k<10; k++)
                {
                if(strcmp(e[k].numE, ne)== 0)
                {
                cout << "EXPEDIENTE [" << k << "] "<<endl;
                e[k].buscar();

                }
                else if(k==2-1)
                {
                cout<<"NO EXISTE EXPEDIENTE"<<endl;
                }
                }
                break;
            case 4:

                cout<<"Numero de Expediente a Modificar: "<<endl;
                cin>>ne;

                for(int k=0; k<10; k++)
                {
                if(strcmp(e[k].numE, ne)== 0)
                {
                cout << "EXPEDIENTE [" << k << "] "<<endl;
                e[k].modificar();
                }
                }
                break;
            case 5:
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                break;
            }
            break;
        case 4:
            break;
        default:
            cout << "opcion no valida...." << endl;
            break;
        }
        break;
    }while(opc != 4);
   return 0;
}
