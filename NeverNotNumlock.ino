#include <HID-Project.h>
void setup()
{
  BootKeyboard.begin();
}
void loop()
{
  if (!(BootKeyboard.getLeds() & LED_NUM_LOCK))
  {
    BootKeyboard.write(KEY_NUM_LOCK);
    delay(200);
  }
}