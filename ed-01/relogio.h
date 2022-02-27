#ifndef RELOGIO_H
#define RELOGIO_H

class relogio {
  public:
  
  relogio(unsigned int hora, unsigned int minuto);
  void imprime();
  relogio();
  ~relogio();
  
  private:
  int _hora;
  int _minuto;
  
};

#endif