#ifndef _NEOLIB_H_
#define _NEOLIB_H_

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__                 // Whaaadiiissiiiittt? == its only vor AVR microcontrollers ( the ATTINY is one )
#include <avr/power.h>
#endif

#include "neocolors.h"

// hardware description / pin connections
#define NEOPIXELPIN         0
#define SPEAKERPIN          1
#define POTI_RIGHT         A1
#define POTI_LEFT          A2
#define BUTTONS_ADC        A3

#define NUMPIXELS           8

#define BUTTON_LEFT         1
#define BUTTON_RIGHT        2

// hardware calibration
#define Vbutton_left      380
#define Vbutton_right     300
#define Vbutton_both      240
#define Vcc                37 // 3.7 V for LiPo
#define Vdiv               26 // measure max Voltage on Analog In

extern Adafruit_NeoPixel pixels;

void     neobegin();
uint8_t  getButton();
uint16_t analogReadScaled(uint8_t channel);
void     displayBinaryValue(uint16_t value, uint32_t color);
void     setColorAllPixel(uint32_t color);
void     rainbowCycle(uint8_t wait, uint8_t rounds, uint8_t rainbowPixels);
uint32_t Wheel(byte WheelPos);

#endif // _NEOLIB_H_ 