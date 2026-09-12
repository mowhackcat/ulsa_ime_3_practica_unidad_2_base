#include "persona.h"
#include <iostream>

Persona::Persona(const std::string& nombre, Vehiculos::Auto* auto_)
: nombre(nombre), miAuto(auto_){}

void Persona::reaccionar(Control::EstadoSemaforo estado){
    using Control::EstadoSemaforo;

    std::cout << nombre << "ve el camino del semaforo..\n";

    if(estado == EstadoSemaforo::VERDE){
        miAuto->Arrancar(60);
    }else {
        miAuto ->Parar();
    }
}