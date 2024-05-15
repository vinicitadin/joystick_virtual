#include <Arduino.h>
#include <USBComposite.h>

USBHID HID;
HIDJoystick Joystick(HID);
HIDJoystick Joystick_02(HID);
HIDJoystick Joystick_03(HID);
HIDJoystick Joystick_04(HID);

void setup() {
  HID.begin(HID_JOYSTICK);
  while (!USBComposite);
}

void loop() {
  Joystick.X(0);
  delay(500);
  Joystick.X(1023);
  delay(500);

  Joystick_02.Y(0);
  delay(500);
  Joystick_02.Y(1023);
  delay(500);

  Joystick_03.X(0);
  delay(500);
  Joystick_03.Y(1023);
  delay(500);

  Joystick_04.X(1023);
  delay(500);
  Joystick_04.Y(0);
  delay(500);
}