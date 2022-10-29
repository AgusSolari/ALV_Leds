/*
Animacion de los 3 girando eleijiendo el color
Animacion de largado que puedas elegir el color
Todos apagados
Todos de un color
*/

#include <Arduino.h>
#include <ALVLeds.h>

// Adafruit_NeoPixel* pixels;
ALVLeds *leds;

void setup()
{
	leds = &ALVLeds(21, 6);
}

void loop()
{

	if(leds->startRace()) // Si la animacion termino devuelve 0
	{

	}
	else
	{
		Serial.println("Finish");
	}

}
