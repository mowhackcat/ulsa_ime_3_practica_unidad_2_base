#include <iostream>
#include <thread>
#include <chrono>
#include "auto.h"
#include "semaforo.h"
#include "persona.h"

int main() {
    using namespace Vehiculos;
    using namespace Control;

    Auto auto1("auto de jamiroquai");
    Auto auto2("auto de charlie");

    Persona jamiroquai("jamiroquai", &auto1);
    Persona charlie("charlie", &auto2);

    Semaforo semaforo;
    semaforo.agregarConductor(&jamiroquai);
    semaforo.agregarConductor(&charlie);

    int tiempo[3] = {15,5,25};
    int Indice = 0;
    int segundosTranscurridos =0;

    std::cout <<"simulacion basica de semaforo\n";

    while(true){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        segundosTranscurridos++;

        if(segundosTranscurridos >= tiempo[Indice]){
            semaforo.cambiarEstado();
            Indice = (Indice + 1) % 3;
segundosTranscurridos =0;

        }
    }
    return 0;
}