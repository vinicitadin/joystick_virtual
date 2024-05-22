#include <Arduino.h>
#include <USBComposite.h>

USBHID HID;
HIDJoystick Joystick(HID);

void setup() {
  HID.begin(HID_JOYSTICK);
  while (!USBComposite);
}

void loop() {
  
  Joystick.X(0);
  Joystick.Y(0);
  Joystick.sliderRight(1023);
  Joystick.X(1023);
  Joystick.Y(1023);
  Joystick.sliderRight(0);
}