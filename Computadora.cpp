#include "Computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &sisOp, const string &nombreEqui, const string &ram, const string &alm)
{
    this->sisOp = sisOp;
    this->nombreEqui = nombreEqui;
    this->ram = ram;
    this->alm = alm;
}
void Computadora::setSisOp(const string &e)
{
    sisOp = e;
}

string Computadora::getSisOp()
{
    return sisOp;
}

void Computadora::setNombreEqui(const string &e)
{
    nombreEqui = e;
}

string Computadora::getNombreEqui()
{
    return nombreEqui;
}

void Computadora::setRam(const string &e)
{
    ram = e;
}

string Computadora::getRam()
{
    return ram;
}

void Computadora::setAlm(const string &e)
{
    alm = e;
}

string Computadora::getAlm()
{
    return alm;
}