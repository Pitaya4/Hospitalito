#ifndef EXPEDIENTE_H
#define EXPEDIENTE_H


class Expediente
{
    public:

        char numE[10], nombre[10];

        Expediente();

        void capturar();
        void mostrar();
        void buscar();
        void modificar();

};

#endif // EXPEDIENTE_H
