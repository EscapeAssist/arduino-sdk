#include <RBD_SerialManager.h>
#include <EscapeAssist.h>

EscapeAssist ea = EscapeAssist();

void setup()
{
	// Init the EscapeAssist SDK
 	ea.init();
}

void loop()
{
  //Send the "demo_send" action to the game manager every 5 seconds
  delay(5000);
  ea.sendCommand("action", "demo_send");
}

