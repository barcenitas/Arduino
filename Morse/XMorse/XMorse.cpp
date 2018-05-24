#include "Arduino.h"
#include "XMorse.h"

const int pinBuzzer = 9;
const int ledPin = 7;
const int tonefreq = 4000;
const int dotTime = 250;
const int dashTime = dotTime* 4;

XMorse::XMorse()
{

   _pinBuzzer=pinBuzzer;
   _ledPin=ledPin;
   _tonefreq=tonefreq;
   _dotTime=dotTime;
   _dashTime = dashTime;
}

void XMorse::dot(){
  

  // DOT
  tone(_pinBuzzer, _tonefreq);
  // LED
  digitalWrite(_ledPin, HIGH);
  delay(_dotTime);
  noTone(_pinBuzzer);
  digitalWrite(_ledPin, LOW);

}


void XMorse::dash(){




  // play a dash
  tone(_pinBuzzer, _tonefreq);
  // LED
  digitalWrite(_ledPin, HIGH);
  delay(_dashTime);
  noTone(_pinBuzzer);
  // LED
  digitalWrite(_ledPin, LOW);
  delay(_dashTime);
}

void XMorse::abecedario(char letra){

    _letra=letra;
 
  switch(_letra)
  { 
   case 'A':
    dot();
    dash();
     break; 
   case 'B':
    dash();
    dot();
    dot();
    dot();
     break; 
  case 'C':
    dash();
    dot();
    dash();
    dot();
     break; 
  case 'D':
    dash();
    dot();
    dot();
     break; 
  case 'E':
    dot();
     break; 
  case 'F':
    dot();
    dot();
    dash();
    dot();
     break; 
  case 'G':
    dash();
    dash();
    dot();
     break; 
  case 'H':
    dot();
    dot();
    dot();
    dot();
     break; 
  case 'I':
    dot();
    dot();
     break; 
  case 'J':
    dot();
    dash();
    dash();
    dash();
     break; 
  case 'K':
    dash();
    dot();
    dash();
     break; 
  case 'L':
    dot();
    dash();
    dot();
    dot();
     break; 
  case 'M':
    dash();
    dash();
     break; 
  case 'N':
    dash();
    dot();
     break; 
  case 'O':
    dash();
    dash();
    dash();
     break;  
  case 'P':
    dot();
    dash();
    dash();
    dot();
     break; 
  case 'Q':
    dash();
    dash();
    dot();
    dash();
     break; 
  case 'R':
    dot();
    dash();
    dot();
     break; 
  case 'S':
    dot();
    dot();
    dot();
     break; 
  case 'T':
    dash();
     break;  
  case 'U':
    dot();
    dot();
    dash();
     break; 
  case 'V':
    dot();
    dot();
    dot();
    dash();
     break; 
  case 'W':
    dot();
    dash();
    dash();
     break; 
  case 'X':
    dash();
    dot();
    dot();
    dash();
     break; 
  case 'Y':
    dash();
    dot();
    dash();
    dash();
     break; 
  case 'Z':
    dash();
    dash();
    dot();
    dot();
     break; 
  default:
     Serial.println("Error. Ingresa una letra valida.");
    break;
  }
}