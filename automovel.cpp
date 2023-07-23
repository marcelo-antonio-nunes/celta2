#include "automovel.h"
#include <stdio.h>
    
    void Auto::Chave(void(*func)(), int16_t pin)
    {
      //1	Chave Liga iguinição	quando ligar apenas emitir aviso sonoro ex. coloque o cint16_to
    };
    void Auto::MotorArranque(void(*func)(), int16_t pin)
    {
      //2	Motor Arranque
    };
    void Auto::SetaEsquerda(void(*func)(), int16_t pin)
    {
      //3	Seta esquerda	fala de montão até desligar	

    };
    void Auto::SetaDireita(void(*func)(), int16_t pin)
    {
      //4	Seta Direita	fala de montão até desligar					

    };
    void Auto::LuizDeOleo(void(*func)(), int16_t pin)
    {
      //5	Luz do oleo	será monitorando após 30 segundos e fala de montão 	
    };
    void Auto::LuzBateria(void(*func)(), int16_t pin)
    {
      //6	Luz bateria
    };
    void Auto::LuzTemperaduta(void(*func)(), int16_t pin)
    {
      //7	Luz temperatura	será monitorando após 30 segundos e fala de montão
    };
    void Auto::FreioDeMao(void(*func)(), int16_t pin)
    {
      //8	Freio de mão	fala 1 vez ao acionar	
    };
    void Auto::MarcadorCombustivel(void(*func)(), int16_t pin)
    {
      //9	Marcador combustivel
    };
    void Auto::LimpadorParabrisa(void(*func)(), int16_t pin)
    {
      //10	Limpador parabrisa	fala 1 vez ao acionar
    };
    void Auto::PortaDianteiraMotorista(void(*func)(), int16_t pin)
    {
      //11	Porta dianteira Motorista	fala 1 vez ao acionar e aciona o corta corrente após 1 minuto, e a fala de bloqueio se por 30 segundo : caso não seja pressionado botão de pulso corta a corrente							

    };
    void Auto::PortaDianteiraPassageiro(void(*func)(), int16_t pin)
    {
      //12	Porta dianteira Passageiro	fala 1 vez ao acionar					
    };
   
    void Auto::BombaDeGasolina(void(*func)(), int16_t pin)
    {
      //13	Bomba de gazolina								x

    };
    void Auto::Farol(void(*func)(), int16_t pin)
    {
      //14	farol	fala 1 vez ao acionar e caso o carro seja desligado e farol estiver acesso deve ser alertado a apagar os farois		x					

    };