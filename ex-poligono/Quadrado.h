#pragma once

#include "Retangulo.h"

class Quadrado : public Retangulo {
public:
    Quadrado(int lado) : Retangulo(lado, lado){
        if(_base == _altura){
    std::cout << "Quadrado iniciado" << std::endl;
    } else std::cout << "Base e altura nao sao iguais" << std::endl;
}

    ~Quadrado() {
        std::cout << "Quadrado destruido" << std::endl;
    }

    void desenha() const {
        std::cout << "Desenhando quadrado" << std::endl;
    }

private:
int _base;
int _altura;
};