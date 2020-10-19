#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"
#include<fstream>

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &e, const Computadora &c)
    {
        e.agregarFinal(c);

        return e;
    }
};

#endif