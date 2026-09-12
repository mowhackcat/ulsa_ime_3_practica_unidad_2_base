#include "persona.h"
#include "semaforo.h"
#include <iostream>

namespace Control {

    Semaforo::Semaforo(){
        estados[0]=EstadoSemaforo::VERDE;
        estados[1]=EstadoSemaforo::AMARILLO;
        estados[2]=EstadoSemaforo::ROJO;
        actual = &estados[0];
    }

void Semaforo::agregarConductor(Persona* p){
    personas.push_back(p);
}

void Semaforo::cambiarEstado(){
    if(actual == &estados[2]){
        actual=&estados[0];
    }else{
        actual++;
    }
    std::cout<< "\n>el semaforo cambio<\n";
    notificarPersona();
}
void Semaforo::notificarPersona(){
    for(Persona* p : personas){
        p ->reaccionar(*actual);
    }

}
EstadoSemaforo Semaforo::getColorActual() const{
    return *actual;
}
}