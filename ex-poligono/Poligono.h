#pragma once
#include <iostream>

class Poligono {
public:
    Poligono(int numLados) : _numLados(numLados) {}

    ~Poligono() {
        std::cout << "Poligono destruido" << std::endl;
    }

    void desenha() const {
        std::cout << "Ops.. sem implementacao" << std::endl;
    }

    void imprimeLados() const {
        std::cout << "nLados: " << _numLados << std::endl;
    }

private:
int _numLados;
};