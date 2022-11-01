/*
Animacion de los 3 girando eleijiendo el color
Animacion de largado que puedas elegir el color
Todos apagados
Todos de un color
*/

#include <Arduino.h>
#include <ALVLeds.h>

// Adafruit_NeoPixel* pixels;
ALVLeds leds(21, 6);

int status = true;

void setup()
{
}

void loop()
{

	if(status) // Si la animacion termino devuelve 0
	{
		status = leds.startRace();
	}
	else
	{
		leds.waiting();
	}

}
