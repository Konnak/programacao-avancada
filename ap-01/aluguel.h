#pragma once

#include <data.h>
#include <cliente.h>


class AluguelCarro {
public:

AluguelCarro(Cliente cliente, Carro carro, Data dataInicio) {}

void realizarDevolucao(Data dataEntrega) { Data _dataEntrega = dataEntrega; }

float calcularTotal();

private:
Data _dataInicio;
Data _dataEntrega;
};


class AluguelBicicleta {
public:

AluguelCarro(Cliente cliente, Bicicleta bicicleta, Data dataInicio) {}

void realizarDevolucao(Data dataEntrega) { Data _dataEntrega = dataEntrega; }

float calcularTotal();

private:
Data _dataInicio;
Data _dataEntrega;
};