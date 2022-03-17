#pragma once

class Data {
public:

Data(int dia = 0, int mes = 0, int ano = 0) : _dia(dia), _mes(mes), _ano(ano) {}

void setDia(int dia = 0) : _dia(dia) {}

void setMes(int mes = 0) : _mes(mes) {}

void setAno(int ano = 0) : _ano(ano) {}

int getDia() { return _dia; }

int getMes() { return _mes; }

int getAno() { return _ano; }

int subtrair(Data outradata);

void imprime();
 
private:

int _dia;
int _mes;
int _ano;
};