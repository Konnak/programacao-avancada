#pragma once


Class Veiculo {
public:

void setCodigo(int codigo) { _codigo = codigo; }
void setPlaca(int placa) { _placa = placa; }
void setCor(int cor) { _cor = cor; }
void setValor (float valor) { _valor = valor; }

int getCodigo() const { return _codigo; }
std::string getPlaca() const { return _placa; }
std::string getCor() const { return _cor; }
float getValor const () { return _valor; }

void imprime();

void aluga();
void devolve();
private:

int _codigo;
std::string _placa;
std::string _cor;
int _valor;
bool _disponivel;

}

class Carro {
public:
Carro();

void setCombustivel (TipoCombustivel combustivel) { _combustivel = combustivel; }
TipoCombustivel getCombustivel();
int getQuilometragem();
void incrementaQuilometragem();

private:

TipoCombustivel _combustivel;
int _quilometragem;
};
