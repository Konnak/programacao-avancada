#pragma once
#include <iostream>
#include <string>

#include "data.h"

class Cliente {
public:

Cliente();

Cliente(int codigo = 0, std::string nome = "", Data aniversario) : _codigo(codigo), _nome(nome), _aniversario(aniversario) {}

void imprime();


private:
int _codigo;
std::string _nome;
Data _aniversario;

};

