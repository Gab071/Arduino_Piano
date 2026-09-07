#include "pitches.h"

#define Buzzer 12
#define LedBlue 11
#define LedRed 10
#define LedYellow 9
#define LedGreen 8
#define SwBlue 7
#define SwRed 6
#define SwYellow 5 
#define SwGreen 4

const int Tones[LedAmount] = { NOTE_C3, NOTE_E3, NOTE_G3, NOTE_C4 };

const int LedAmount = 4;
const int Leds[LedAmount] = {LedBlue, LedRed, LedYellow, LedGreen};
const int Buttons[LedAmount] = {SwBlue, SwRed, SwYellow, SwGreen};

void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(LedBlue, OUTPUT);
  pinMode(LedRed, OUTPUT);
  pinMode(LedYellow, OUTPUT);
  pinMode(LedGreen, OUTPUT);

  pinMode(SwBlue, OUTPUT);
  pinMode(SwRed, OUTPUT);
  pinMode(SwYellow, OUTPUT);
  pinMode(SwGreen, OUTPUT);
}

void loop() {

}

void PlayTone(int index)
{
  if(index >=0 && index <= 4)
  {
    digitalWrite(Leds[index], HIGH);
    tone(Buzzer, Tones[index], 250);
    delay(300);

    digitalWrite(Leds[index], LOW);
    noTone(Buzzer);
    delay(50);
  }
}

