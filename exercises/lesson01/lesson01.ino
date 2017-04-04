/* This lesson will teach you how to interface with
the pushbuttons on the Zumo.*/

#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4ButtonA buttonA;
Zumo32U4LCD lcd;

void setup()
{
  lcd.clear();
  lcd.print(F("Press A"));

  /* 1. Use the waitForButton() function, which blocks and
   * doesn't return until a button press and release are
   * detected. */
  
  
  
  

  lcd.clear();
}

void loop()
{
  /* 2. Directly read the state of the button with the
   * isPressed() function. */
  if ()
  {
    /* 3. Whenever the button is pressed, turn on the yellow LED.*/
    
  }
  else
  {
    /* 4. Whenever the button is not pressed, turn off the yellow
     LED.*/
    
  }

}
