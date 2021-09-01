#include "Arduino.h"

class Relay {
  public:
    Relay(int pin);
    bool pole;
    bool locked;
    void on();
    void off();
    void begin();
  private:
    int _pin;
};

