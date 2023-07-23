#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"


namespace Audio{
  DFRobotDFPlayerMini myDFPlayer;
  void IniciaPlay(){
      SoftwareSerial mySoftwareSerial(10, 11);  
      mySoftwareSerial.begin(9600);
      myDFPlayer.begin(mySoftwareSerial);
      myDFPlayer.setTimeOut(500);  
      myDFPlayer.volume(30);       
      myDFPlayer.EQ(0);     
  };
  /////////////////////////////////////////////
  void ChaveLigaIguinicao(){
    myDFPlayer.play(1);
  }
}