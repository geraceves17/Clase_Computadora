#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
using namespace std;

class Computadora
{
    string alm;
    string ram;
    string sisOp;
    string nombreEqui;
public:
    Computadora();
    Computadora(const string &alm, const string &ram, const string &sisOp, const string &nombreEqui);
    

    void setAlm(const string &e);
    string getAlm();
    void setRam(const string &e);
    string getRam();
    void setSisOp(const string &e);
    string getSisOp();
    void setNombreEqui(const string &e);
    string getNombreEqui();
};


#endif // COMPUTADORA_H
