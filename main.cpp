#include<iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio l;
    l.recuperar();
    l.recuperar();
    l.mostrar();
    /*Computadora c02 = Computadora("Ubuntu", "Dell", "8 Gb", "500 Gb");

    Computadora c03;
    c03.setSisOp("Windows");
    c03.setNombreEqui("Lenovo");
    c03.setRam("16 Gb");
    c03.setAlm("256 Gb");

    Laboratorio lab;

    //lab.agregarFinal(c02);
    //lab.agregarFinal(c03);
    lab<<c02<<c03;

    //cout<<c02;
    Computadora c04;
    cin>>c04;
    lab<<c04;

    lab.mostrar();
    lab.respaldar_tabla();
    lab.respaldar();*/

    return 0;
}