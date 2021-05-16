#ifndef CLIENTE_H
#define CLIENTE_H
#include"conta.h"

using namespace std;

class Cliente
{
    public:
    Cliente(string nome);
    void setnome(string nome);
    string getnome();

    private:
    string _nome;
};

Cliente::Cliente(string nome){
    setnome(nome);
}

void Cliente::setnome(string nome){
    _nome = nome;
}

string Cliente::getnome(){
    return _nome;
}

#endif // CLIENTE_H
