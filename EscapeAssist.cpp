/*
  EscapeAssist.h - Library for interfacing with EscapeAssist's Game Manager.
  Created by Brad Kendall, 2018.
*/

#include "EscapeAssist.h"

RBD::SerialManager serial_manager;

EscapeAssist::EscapeAssist()
{

}

void EscapeAssist::init()
{
  serial_manager.start();
  serial_manager.println("init,");
}

bool EscapeAssist::onReceive()
{
   if(serial_manager.onReceive()) {

    if (serial_manager.isCmd("ping")) {
      serial_manager.println("pong,");
    }

    if (serial_manager.isCmd("send")) {
      received_command = serial_manager.getParam();
      return true;
    }
  }

  return false;
}

String EscapeAssist::getCommand()
{
  return received_command;
}

void EscapeAssist::sendCommand(String command_to_send, String params_to_send)
{
  serial_manager.println(command_to_send + "," + params_to_send);
}

