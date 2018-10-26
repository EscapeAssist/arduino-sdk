/*
  EscapeAssist.h - Library for interfacing with EscapeAssist's Game Manager.
  Created by Brad Kendall, 2018.
*/

#include <RBD_SerialManager.h>
#ifndef EscapeAssist_h
#define EscapeAssist_h


class EscapeAssist
{
  public:
    EscapeAssist();
    void init();
    bool onReceive();
    String getCommand();
    void sendCommand(String command_to_send, String params_to_send);
  private:
  	String received_command;
};

#endif

