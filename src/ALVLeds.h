/*
    Library for de LED's Rgb 5050 Ws2812 Neopixel
    Requeriments:
        Adafruit_NeoPixel: https://github.com/adafruit/Adafruit_NeoPixel
*/

#include <Arduino.h>

#include <Adafruit_NeoPixel.h>
#include <TimedProcess.h>

#define PIN 6               // Pin of the board
#define NUMLEDS 3
#define TOTALNUMPIXEL NUMLEDS*7 // Total numers of leds

#define COLOR(r , g , b) leds->pixels->Color(r,g,b)

typedef struct
{
    int red;
    int green;
    int blue;

} Color_t;

typedef struct
{
    int iD;
    int startCounter;
    int finishCounter;
    int previousMillis;
}Led_t;



class ALVLeds
{
private:
    // Vars
    bool ledState = false; // Initialize the status of the led with off
public:
    ALVLeds(int numPixel, int pin);
    ~ALVLeds();

    Adafruit_NeoPixel *pixels;

    Led_t leds[NUMLEDS];

    //Auxiliar Functions
    bool runSurround(int led, uint32_t color); // led go from 1 to 3 // led = 0 -> (all leds)
    void setPixelColor(int pixel, uint32_t color);
    void ledOff(int led);
    void ledToColor(int led, Color_t color);

    //Usefull Functions
    void startRace();
    void ledsBegin(Led_t* leds);

};
