// simple blink of all NEO-Pixels
// 14.3.2017 ChrisMicro

#include "neolib.h"

void setup() 
{
  neobegin();
}

void loop() 
{
  setColorAllPixel(200); // pixels on
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(1000);

  setColorAllPixel(0); // pixels off
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(1000);

}
