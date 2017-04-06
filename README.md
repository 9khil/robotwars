# Pololu Zumo32U4 exercises

Version: 1.0.0<br/>
Based on Pololu software and git repo.<br/>
Find out more at http://bouvet.no/robotwars

## Summary

The Zumo 32U4 robot consists of the Zumo chassis, the Zumo 32U4 Main Board, and the Zumo 32U4 Front Sensor Array.  It has an integrated AVR ATmega32U4 microcontroller, motor drivers, encoders, proximity sensors, line sensors, buzzer, four buttons, LCD connector, LSM303D accelerometer, and L3GD20H gyro.  The user's guide for the Zumo 32U4 robot is here:

https://www.pololu.com/docs/0J63

Note: Sumo rules dictate that the robot field is black with white borders. The code in our exercise has been modified to supported an inverted field (white with black borders).

## Setup

### Install Arduino IDE

Install latest Arduino IDE from http://www.arduino.cc/en/Main/Software

### Installing the library

Use the Library Manager to install this library:

1. In the Arduino IDE, open the "Sketch" menu, select "Include Library", then "Manage Libraries...".
2. Search for "Zumo32U4".
3. Click the Zumo32U4 entry in the list.
4. Click "Install".

### Installing drivers (Windows only)

Windows users need to install drivers first. Follow this tutorial: https://www.pololu.com/docs/0J63/5.1
Linux / OSX should have the driver preinstalled.

### Setting up Arduino IDE to program Zumo 32U4

Follow this tutorial: https://www.pololu.com/docs/0J63/5.2

## Exercises

Clone this repo and solve the lessons provided. By solving all lessons you will be able to put together the bare minimums to qualify for a Sumo match. Read more about the Sumo match rules at http://bouvet.no/robotwars

Try to solve the lessons only using the documentation provided here: http://pololu.github.io/zumo-32u4-arduino-library/annotated.html

## Documentation

Arduino programming language reference: https://www.arduino.cc/en/Reference/HomePage
</br>
For complete Pololu Z32U4 documentation, see http://pololu.github.io/zumo-32u4-arduino-library/annotated.html.  If you are already on that page, then click on the links in the "Classes and functions" section above.
