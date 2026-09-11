#pragma once
#include <string>

namespace Vehiculos{

    class Auto{
        private:
        std::string nombre;
        int velocidad;

        private:
        explicit Auto(const std::string nombre);

        void Arrancar();
        void Arrancar(int potencia);
        void Parar();

        std::getNombre() const int;
        int getVelocidad() const;
    }
}