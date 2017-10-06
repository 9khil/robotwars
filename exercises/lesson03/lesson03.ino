/** This example uses the Zumo's line sensors to detect the black
border around a sumo ring.  When the border is detected, it
backs up and turns. */

#include <Wire.h>
#include <Zumo32U4.h>

// This might need to be tuned for different lighting conditions,
// surfaces, etc.
#define QTR_THRESHOLD     1000  // microseconds

// These might need to be tuned for different motor types.
#define REVERSE_SPEED     200  // 0 is stopped, 400 is full speed
#define TURN_SPEED        200
#define FORWARD_SPEED     200
#define REVERSE_DURATION  200  // ms
#define TURN_DURATION     300  // ms

Zumo32U4LCD lcd;
Zumo32U4ButtonB buttonB;
Zumo32U4Buzzer buzzer;
Zumo32U4Motors motors;
Zumo32U4LineSensors lineSensors;

#define NUM_SENSORS 3
unsigned int lineSensorValues[NUM_SENSORS];

void waitForButtonAndCountDown()
{
  /* 1. See setup() */
  /* 2. Turn on yellow LED, clear LCD and add "Press A" text to LCD */


  /* 3. Wait for button B to be pressed */


 /* 4. Turn off Yellow LED and clear LCD */

  // Play audible countdown.
  for (int i = 0; i < 3; i++)
  {
    delay(1000);
    /* 5. play note G in octave 3, for 200 millisecs. Full volume (15) */

  }
  delay(1000);
  buzzer.playNote(NOTE_G(4), 500, 15);
  delay(1000);
}

void setup()
{
  /* 1. Initialize ThreeSensors on the lineSensor object */


  waitForButtonAndCountDown();
}

void loop()
{
  if (buttonB.isPressed())
  {
    // If button is pressed, stop and wait for another press to
    // go again.
    motors.setSpeeds(0, 0);
    buttonB.waitForRelease();
    waitForButtonAndCountDown();
  }

  /* 6. Read line sensor values */



  if (lineSensorValues[0] > QTR_THRESHOLD) //flip aligator sign if you want to detect white edges on a black board instead of black border on a white board.
  {
    // If leftmost sensor detects line, reverse and turn to the
    // right.
    motors.setSpeeds(-REVERSE_SPEED, -REVERSE_SPEED);
    delay(REVERSE_DURATION);

    /* 7. Add three code lines for setting turn speed to turn right (+/- TURN_SPEED),
     *  add turn duration delay and then continuing forward.
     */

  }
  else if (lineSensorValues[NUM_SENSORS - 1] > QTR_THRESHOLD) //flip aligator sign if you want to detect white edges on a black board instead of black border on a white board.
  {
    /* 8.  If rightmost sensor detects line, reverse and turn to the
     left. */

  }
  else
  {
    /* 9. Otherwise, go straight.*/

  }
}
