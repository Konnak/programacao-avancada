#pragma once

#include <string>
#include <iostream>

class Homem {
public:
    Homem(std::string nome) : _nome(nome) {}

    void andar() {
        std::cout << _nome << " está andando" << std::endl;
    }

     void correr() {
        std::cout << _nome << " está correndo" << std::endl;
    }

     void falar() {
        std::cout << _nome << " está falando" << std::endl;
    }

private:
    std::string _nome;
};