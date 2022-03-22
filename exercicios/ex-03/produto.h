#pragma once

#include <string>
#include <iostream>

class Produto {
public:

    void imprime() {
        std::cout << _nome << "Preço: " << _preco << std::endl;
    }

private:
std::string _nome;
float _preco;
};