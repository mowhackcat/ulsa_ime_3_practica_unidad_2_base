#include "auto.h"
#include <iostream>

namespace Vehiculos{

    Auto::Auto(const std::string& nombre)
    : nombre(nombre), velocidad(0){}

    void Auto::Arrancar(){
     velocidad = 20;
        std::cout << "auto " << nombre << "arranca con el valor por defecto de ("
        << velocidad << ") km/h\n";
    }

    void Auto::Arrancar(int potencia){
        velocidad = potencia;
        std::cout << "auto " << nombre << "arranca con el valor asignado de ("
        << velocidad << ") km/h\n";
    }

    void Auto::Parar(){
        velocidad = 0;
         std::cout << "auto " << nombre <<"paro\n";
    }

    std::string Auto::getNombre() const {return nombre;}
    int Auto::getVelocidad() const {return velocidad;}
}