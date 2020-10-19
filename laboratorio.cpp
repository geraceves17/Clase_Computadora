#include "laboratorio.h"
#include<fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo<<left;
        archivo<<setw(19)<<"Sistema Operativo";
        archivo<<setw(11)<<"Marca";
        archivo<<setw(13)<<"Memoria Ram";
        archivo<<setw(11)<<"Almacenamiento";
        archivo<<endl;
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo<<c;
        }
    }    
    archivo.close();

}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo<<c.getSisOp()<<endl;
            archivo<<c.getNombreEqui()<<endl;
            archivo<<c.getRam()<<endl;
            archivo<<c.getAlm()<<endl;
        }
    }    
    archivo.close();

}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setSisOp(temp);

            getline(archivo, temp);
            c.setNombreEqui(temp);

            getline(archivo, temp);
            c.setRam(temp);

            getline(archivo, temp);
            c.setAlm(temp);

            agregarFinal(c);
        }
    }
    archivo.close();
}

