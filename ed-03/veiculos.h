#pragma once

class Carro {
public:
Carro();

void setCodigo(int codigo) { _codigo = codigo; }
void setPlaca(int placa) { _placa = placa; }
void setCor(int cor) { _cor = cor; }
void setCombustivel (TipoCombustivel combustivel) { _combustivel = combustivel; }
void setValor (float valor) { _valor = valor; }
int getCodigo() const { return _codigo; }
std::string getPlaca() const { return _placa; }
std::string getCor() const { return _cor; }
TipoCombustivel getCombustivel();
int getQuilometragem();
float getValor();
void imprime();
void incrementaQuilometragem();
void aluga();
void devolve();

private:
int _codigo;
std::string _placa;
std::string _cor;
TipoCombustivel _combustivel;
int _quilometragem;
int _valor;
bool _disponivel;
}