#include "Keyboard.h"

void setup() {
  pinMode(14, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);

  Keyboard.begin();
}

void loop()
{
  if(digitalRead(14) == LOW)
  {
    // cmd copy
    Keyboard.press(0x83);
    Keyboard.press('c');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(15) == LOW)
  {
    // cmd paste
    Keyboard.press(0x83);
    Keyboard.press('v');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(16) == LOW)
  {
    Keyboard.press(0x83);
    Keyboard.press('x');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(9) == LOW)
  {
// select account and enter password
    Keyboard.press('c');
    Keyboard.press(0xB0);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println("password");
    Keyboard.press(0xB0);
    delay(500);
    Keyboard.releaseAll();
  }
}
