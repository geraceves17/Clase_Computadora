#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();

    friend Laboratorio& operator<<(Laboratorio &e, const Computadora &c)
    {
        e.agregarFinal(c);

        return e;
    }
};

#endif