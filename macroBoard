#include "Keyboard.h"

void setup() {
  pinMode(6, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);

  Keyboard.begin();
}

void loop()
{
  if(digitalRead(6) == LOW)
  {
    // new window
    Keyboard.press(0x83);
    Keyboard.press('n');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(8) == LOW)
  {
    // type password
    Keyboard.println("password");
    delay(500);
  }
  if(digitalRead(9) == LOW)
  {
    // copy
    Keyboard.press(0x83);
    Keyboard.press('c');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(10) == LOW)
  {
    // paste
    Keyboard.press(0x83);
    Keyboard.press('v');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(2) == LOW)
  {
    // cut
    Keyboard.press(0x83);
    Keyboard.press('x');
    delay(500);
    Keyboard.releaseAll();
  }
   if(digitalRead(3) == LOW)
  {
    // paste
    Keyboard.press(0x83);
    Keyboard.press('w');
    delay(500);
    Keyboard.releaseAll();
  }
}
