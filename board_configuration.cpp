#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"

void setBoardDefaultConfiguration() {
     setHellenVbatt();
     setHellenCan();
     setDefaultHellenAtPullUps();
     setHellenMMbaro();
     engineConfiguration->injectionPins[0] = Gpio::F12;
     engineConfiguration->injectionPins[1] = Gpio::G7;
     engineConfiguration->injectionPins[2] = Gpio::D10;
     engineConfiguration->injectionPins[3] = Gpio::G8;
     engineConfiguration->injectionPins[4] = Gpio::D9;
     engineConfiguration->injectionPins[5] = Gpio::D11;

     engineConfiguration->ignitionPins[0] = Gpio::E2;
     engineConfiguration->ignitionPins[1] = Gpio::E5;
     engineConfiguration->ignitionPins[2] = Gpio::E6;
     engineConfiguration->ignitionPins[3] = Gpio::C13;
     engineConfiguration->ignitionPins[4] = Gpio::E4;
     engineConfiguration->ignitionPins[5] = Gpio::E3;

     engineConfiguration->triggerInputPins[0] = Gpio::B1;
     engineConfiguration->camInputs[0] = Gpio::A6; // 15A
     engineConfiguration->camInputs[1] = Gpio::F8;
     setupTLE9201(Gpio::C9, Gpio::D4, Gpio::D7);
     engineConfiguration->vvtPins[0] = Gpio::C8;
     engineConfiguration->vvtPins[1] = Gpio::C7;
     }
void boardInitHardware() {
    setHellenEnPin(Gpio::MM176_EN_PIN);
}
