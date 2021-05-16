#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "cliente.h"

using namespace std;

class Conta : public Cliente
{
    public:
    Conta(int numero, Cliente(string nome));
    void deposita(float valor);
    void retira(float valor);
    void transfere(Conta);
    void extrato();
    void aplicajurosdiarios(int dias);
    protected:
    int _numero;
    int _saldo;
};

Conta::Conta(int numero, Cliente(string nome))
{
    _numero = numero;
    cout << "Criando conta "<<numero<<" do cliente "<< getnome() <<endl;
}   



#endif
