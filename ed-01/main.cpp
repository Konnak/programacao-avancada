#include <iostream>
#include "relogio.h"

relogio::relogio(unsigned int hora, unsigned int minuto){
    if(hora <= 23){
    _hora = hora;
    } else printf("Hora inválida!");
    
    if(minuto <= 59){
    _minuto = minuto;
    } else printf("Minutos inválido!");
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
    relogio r3(05,50);
    
    r1.imprime();
    r2.imprime();
    r3.imprime();

    return 0;
}
