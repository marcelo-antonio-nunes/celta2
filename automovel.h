#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include <stdio.h>
class Auto{
  private:

  public:
    void Chave(void(*func)(), int16_t pin);
    void MotorArranque(void(*func)(), int16_t pin);
    void SetaEsquerda(void(*func)(), int16_t pin);
    void SetaDireita(void(*func)(), int16_t pin);
    void LuizDeOleo(void(*func)(), int16_t pin);
    void LuzBateria(void(*func)(), int16_t pin);
    void LuzTemperaduta(void(*func)(), int16_t pin);
    void FreioDeMao(void(*func)(), int16_t pin);
    void MarcadorCombustivel(void(*func)(), int16_t pin);
    void LimpadorParabrisa(void(*func)(), int16_t pin);
    void PortaDianteiraMotorista(void(*func)(), int16_t pin);
    void PortaDianteiraPassageiro(void(*func)(), int16_t pin);
    void BombaDeGasolina(void(*func)(), int16_t pin);
    void Farol(void(*func)(), int16_t pin);


};

#endif

























