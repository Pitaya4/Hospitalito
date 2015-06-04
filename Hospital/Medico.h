#ifndef MEDICO_H
#define MEDICO_H


class Medico
{
    public:

        char idmedico[10], nombre[10], apellidopaterno[10], apellidomaterno[10];
        char calle[10], numero[10], telefono[10], especialidad[10], activo[10];

        Medico();

        void capturar();
        void mostrar();
        void buscar();
        void modificar();

};

#endif // MEDICO_H
