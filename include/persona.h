#pragma once
#include <string>
#include "Auto.h"
#include "EstadoSemaforo.h"

class Persona{
    private:
    std::string nombre;
    Vehiculos::Auto* miAuto;

    public:
    Persona(const std::string& nombre, Vehiculos::Auto* auto_);

    void reaccionar(Control::EstadoSemaforo estado);
};
