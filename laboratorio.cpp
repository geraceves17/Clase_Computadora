#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont < 5){
        arreglo[cont] = c;
        cont++;
    }
    else
    {
        cout<<"Arreglo completo"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(19)<<"Sistema Operativo";
    cout<<setw(11)<<"Marca";
    cout<<setw(13)<<"Memoria Ram";
    cout<<setw(11)<<"Almacenamiento";
    cout<<endl;
    
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout<<c;
        //cout<<"Sistema Operativo: "<<c.getSisOp()<<endl;
        //cout<<"Marca: "<<c.getNombreEqui()<<endl;
        //cout<<"Memoria Ram: "<<c.getRam()<<endl;
        //cout<<"Nivel de almacenamiento: "<<c.getAlm()<<endl;
        //cout<<endl;
    }
}