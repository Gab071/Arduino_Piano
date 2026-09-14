# Arduino_Piano

## Table of contents

1. [Overview](#overview)
2. [Hardware Components](#hardware-components)
3. [Pin Mapping](#pin-mapping)
4. [How to Run](#how-to-run)


## Overview

This is a project that uses Arduino programmed in C++ (via Arduino IDE) language that utilizes passive buzzer to play notes with the help of buttons and to create simple melodies.

## Hardware Components

| Component | Quantity | Comments |
| ---- | ----- | ----- |
| Arduino Uno R3 | 1 | It is possible to use different Arduino board |
| Buzzer | 1 | without an internal oscilator (without generator) |
| Blue LED | 1 | - |
| Red LED | 1 | - |
| Yellow LED | 1 | - |
| Green LED | 1 | - |
| Buttons | 4 | - |
| Resistor $1\ \mathsf{k\Omega}$ | 4 | Limiting current for LEDs |
| Breadboard | 1 | - |
| Jumper wires | - | - |


## Pin Mapping

The connections are also shown in the code ArduinoPiano.ino. Each number or symbol corresponds to the Arduino pin. In more detail:

| Component | Arduino pin | Comments |
| ---- | ----- | ----- |
| Buzzer | 12 | - |
| Blue LED | 11 | - |
| Red LED | 10 | - |
| Yellow LED | 9 | - |
| Green LED | 8 | - |
| (Blue) Button | 7 | button next to the blue LED |
| (Red) Button | 6 | button next to the red LED |
| (Yellow) Button | 5 | button next to the yellow LED |
| (Green) Button | 4 | button next to the green LED |

### Code Fragment:

```
#define Buzzer 12
#define LedBlue 11
#define LedRed 10
#define LedYellow 9
#define LedGreen 8
#define SwBlue 7
#define SwRed 6
#define SwYellow 5 
#define SwGreen 4
```

## How to Run

### Step 1

Install and launch an IDE capable of compiling and uploading Arduino code (e.g., [Arduino IDE](https://www.arduino.cc/en/software/)).

### Step 2 

Connect all components according to the pin mapping above.

### Step 3 

Connect your board to the PC. Upload and run the code. 