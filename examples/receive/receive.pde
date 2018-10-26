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
  delay(5000);
  // Check for incoming EscapeAssist commands on the loop
  if (ea.onReceive()) {

  	//When receiving the command

    if (ea.getCommand() == "receive_command")
    {
      //Perform any function or action here
    }
    
  }
}

