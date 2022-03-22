#pragma once

#include <string>
#include <iostream>

class ItemPersonalizado {
public:

    void imprime() {
        std::cout << "Inscricao: " << _inscricao << std::endl;
    }

private:
std::string _inscricao;
};