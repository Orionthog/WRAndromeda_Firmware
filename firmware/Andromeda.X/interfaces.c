/** Andromeda - Analysis types definition
  * Warthog Robotics
  * University of Sao Paulo at Sao Carlos
  * http://www.warthog.sc.usp.br
  * This file is part of the Warthog Robotics Andromeda project
  **/


/** Copyright (C) 2018 Warthog Robotics
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program. If not, see <http://www.gnu.org/licenses/>.
  **/


/* Includes module header */
#include <Andromeda/Interfaces/interfaces.h>


/* Includes MotorBoard library */
#include <Andromeda/andromeda.h>


/* Includes dsPIC libraries */
#include <p33Fxxxx.h>
#include <libpic30.h>
#include <math.h>
#include <spi.h>
#include <string.h>


/* Module global variables */
float interfaces_motorSpeedsBuffer[MOTORCONTROL_NUM_MOTORS] = {0.0, 0.0};
float interfaces_motorVoltagesBuffer[MOTORCONTROL_NUM_MOTORS] = {0.0, 0.0};


/* Module local variables - Communication */
uint16  interfaces_spiPacketCount;                                  /* Counter for the package length         */
uint16  interfaces_packetLength;                                    /* Length of the packet to be received    */
uint8 interfaces_packet[INTERFACES_PACKETMAXLENGTH];                /* Vector for the packet received         */
uint8 interfaces_sendingPacket[INTERFACES_OUTPUTPACKETMAXLENGTH];   /* Vector for the packet to be sent       */
uint8 isSending;


/* Module local variables - Timing */
uint16 interfaces_spiMeasuringStart = 0;
uint16 interfaces_spiMeasuringStop = 0;
uint16 interfaces_spiMeasuringElapsed = 0;

