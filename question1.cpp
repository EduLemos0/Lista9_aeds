#include <iostream>

class Equipamento {
private:
  bool ligado = false; //iniciar desligado.
public:
  bool liga(){
    return ligado = true;
  }

  bool desliga(){
    return ligado = false;
  }
};


class EquipamentoSonoro : public Equipamento{
private:
  short volume = 0;
  bool stereo = false;
public:
  int getVolume() {return volume;}
  void setVolume(int a) {
    if((a >= 0) && (a <= 10)){
      volume = a;
    }
  }

  bool liga(){
    return stereo = true; 
    return volume = 5;
  }

  int str() {
    return stereo = true;
  }

  int mono() {
    return stereo = false;
  }
}
