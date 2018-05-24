#ifndef XMorse_h
#define XMorse_h
#include "Arduino.h"

class XMorse
{
public:
	XMorse();
	void dot();
	void dash();
	void abecedario(char letra);
private:
	char _letra;
	int _pinBuzzer;
	int _ledPin;
	int _tonefreq;
	int _dotTime;
	int _dashTime;
};

#endif