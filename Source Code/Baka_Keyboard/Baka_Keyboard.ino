#include <Keyboard.h>

void setup() {
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {

  if (digitalRead(9) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    delay(10);
  }

  if (digitalRead(9) == HIGH) {
    Keyboard.release(KEY_LEFT_CTRL);
    delay(50);
  }

  //131 SuperL
  //207 Scroll_Lock
  //209 Insert

  if (digitalRead(10) == LOW) {
    Keyboard.press(131);
    delay(10);
  }

  if (digitalRead(10) == HIGH) {
    Keyboard.release(131);
    delay(50);
  }
}


