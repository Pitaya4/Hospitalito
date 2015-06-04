#ifndef PACIENTE_H
#define PACIENTE_H


class Paciente
{
    public:

        char idpaciente[10], nombre[10], apellidopaterno[10], apellidomaterno[10];
        char sexo[10], edocivil[10], calle[10], numero[10], mes[10];
        char telefono[10], dia[10], ano[10];
        char ant[10];

        Paciente();
        void capturar();
        void mostrar();
        void buscar();
        void modificar();


};

#endif // PACIENTE_H
