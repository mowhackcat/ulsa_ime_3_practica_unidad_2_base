#pragma once
#include <string>

namespace Vehiculos{

    class Auto{
        private:
        std::string nombre;
        int velocidad;

        public:
        explicit Auto(const std::string& nombre);

        void Arrancar();
        void Arrancar(int potencia);
        void Parar();

        std::string getNombre() const;
        int getVelocidad() const;
    };
}