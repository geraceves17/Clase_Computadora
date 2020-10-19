#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<iomanip>
using namespace std;

class Computadora
{
    string alm;
    string ram;
    string sisOp;
    string nombreEqui;
public:
    Computadora(); 
    Computadora(const string &sisOp, const string &nombreEqui, const string &ram, const string &alm);
    

    void setSisOp(const string &e);
    string getSisOp();
    void setNombreEqui(const string &e);
    string getNombreEqui();
    void setRam(const string &e);
    string getRam();
    void setAlm(const string &e);
    string getAlm();

    friend ostream& operator<<(ostream &out, const Computadora&c)
    {
        out<<left;
        out<<setw(19)<<c.sisOp;
        out<<setw(11)<<c.nombreEqui;
        out<<setw(13)<<c.ram;
        out<<setw(11)<<c.alm;
        out<<endl;

        return out;
    }
    friend istream& operator>>(istream &in, Computadora&c)
    {
        string temp;
        
        cout<<"Sistema Operativo: ";
        getline(cin, c.sisOp);

        cout<<"Marca: ";
        getline(cin, c.nombreEqui);

        cout<<"Memoria Ram: ";
        getline(cin, c.ram);

        cout<<"Almacenamiento: ";
        getline(cin, c.alm);

        return in;
    }
};


#endif // COMPUTADORA_H

