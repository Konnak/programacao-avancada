#include <iostream>
#include "relogio.h"

relogio::relogio(int hora, int minuto){
    _hora = hora;
    _minuto = minuto;
}

void relogio::imprime(){
    int min = 0;
    min = (_hora * 60) + _minuto;
    std::cout << _hora << ":" << _minuto << std::endl;
    std::cout << "Minutos totais: " << min << std::endl;
}

relogio::relogio(){
    _hora = 0;
    _minuto = 0;
}

relogio::~relogio(){
    
}

int main()
{
    relogio r1(20,30);
    relogio r2(10,20);
    
    r1.imprime();
    printf("Hello World");

    return 0;
}
