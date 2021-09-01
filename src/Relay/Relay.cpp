#include "Relay.h"

Relay::Relay(int pin){ 
  _pin = pin;
}

void Relay::begin(){ 
  locked = false;
  pinMode(_pin, OUTPUT);
  off();
}

void Relay::on(){
  if (locked == false){
    pole = true;
    digitalWrite(_pin, 1);
  }
}

void Relay::off(){
  if (locked == false){
    pole = false;
    digitalWrite(_pin, 0);
  }
}
