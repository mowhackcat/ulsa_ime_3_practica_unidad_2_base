#pragma once
#include <vector>
#include "EstadoSemaforo.h"

class Persona;
 
namespace Control{

    class Semaforo{
        private:
        EstadoSemaforo estados[3];
        EstadoSemaforo* actual;
        std::verctor<Persona*> personas;

        void notificarPersona();

        public:
        Semaforo();

        void agregarConductor(Persona* c);
        void cambiarEstado();
        EstadoSemaforo getColorActual() const;
    };
}