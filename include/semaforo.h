#pragma once
#include <vector>
#include "EstadoSemaforo.h"

class Persona;
 
namespace Control{

    class Semaforo{
        private:
        EstadoSemaforo estados[3];
        EstadoSemaforo* actual;
        std::vector<Persona*> personas;

        void notificarPersona();

        public:
        Semaforo();

        void agregarConductor(Persona* p);
        void cambiarEstado();
        EstadoSemaforo getColorActual() const;
    };
}