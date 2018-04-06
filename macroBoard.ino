#include "Keyboard.h"

void setup() {
  pinMode(14, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  Keyboard.begin();
}
// 
void loop()
{
  if(digitalRead(14) == LOW)
  {
// cmd copy
    Keyboard.press(0x83); // KEY_LEFT_GUI
    Keyboard.press('c');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(15) == LOW)
  {
// cmd paste
    Keyboard.press(0x83); // KEY_LEFT_GUI
    Keyboard.press('v');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(16) == LOW)
  {
// cmd cut
    Keyboard.press(0x83); // KEY_LEFT_GUI
    Keyboard.press('x');
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(9) == LOW)
  {
// auto login
    Keyboard.press('c');
    Keyboard.press(0xB0);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println("password");
    Keyboard.press(0xB0);
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(8) == LOW)
  {
// open spotlight
    Keyboard.press(0x83); // KEY_LEFT_GUI
    Keyboard.press(0x20); // space bar
    delay(500);
    Keyboard.releaseAll();
  }
  if(digitalRead(7) == LOW)
  {
// new window
    Keyboard.press(0x83); // KEY_LEFT_GUI
    Keyboard.press('n');
    Keyboard.releaseAll();
    delay(500);
  }
  if(digitalRead(6) == LOW)
  {
// Hello World
    Keyboard.println("Hello World");
    delay(500);
    Keyboard.releaseAll();
  }
}
