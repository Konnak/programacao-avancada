#pragma once

#include <string>
#include <iostream>

class Aranha {
public:
    Aranha(std::string nome) : _nome(nome) {}

    void soltarTeias() {
        std::cout << _nome << " está soltando teias" << std::endl;
    }

     void escalarParedes() {
        std::cout << _nome << " está escalando paredes" << std::endl;
    }

protected:
    std::string _nome;
};