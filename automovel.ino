#include "automovel.h"
#include "audio.h"

Auto *celta;
void setup() {

  Audio::IniciaPlay();

}

void loop() {
  celta->Chave(Audio::ChaveLigaIguinicao, 13);

}
