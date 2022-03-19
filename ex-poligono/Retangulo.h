#pragma once

#include "Poligono.h"

class Retangulo : public Poligono {
public:
    Retangulo(int base, int altura) : Poligono(4), _base(base), _altura(base){
    if(_base != _altura){
    std::cout << "Retangulo iniciado" << std::endl;
    } else std::cout << "Base e altura sao iguais" << std::endl;
}

    ~Retangulo() {
        std::cout << "Retangulo destruido" << std::endl;
    }

    void desenha() const {
        std::cout << "Desenhando retangulo" << std::endl;
    }

    float const getLado() {
        return _base * _altura;
    }

private:
int _base;
int _altura;
};