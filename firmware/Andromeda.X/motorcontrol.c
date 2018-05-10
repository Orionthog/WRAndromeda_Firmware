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
#include <Andromeda/MotorControl/motorcontrol.h>


/* Includes MotorBoard library */
#include <Andromeda/andromeda.h>


/* Module global variables */
float motorBoard_motorSpeeds[MOTORCONTROL_NUM_MOTORS];
float motorBoard_motorVoltages[MOTORCONTROL_NUM_MOTORS];
float motorControl_controlOutputVoltages[MOTORCONTROL_NUM_MOTORS];
float motorControl_controlOutputCurrents[MOTORCONTROL_NUM_MOTORS];

float motorControl_lastVoltages[MOTORCONTROL_NUM_MOTORS][2];

/* Module internal variables */
float  motorControl_motorExpectedCurrents[MOTORCONTROL_NUM_MOTORS];
float  motorControl_lastVelocities[MOTORCONTROL_NUM_MOTORS][MOTORCONTROL_AVG_SIZE];
uint8  motorControl_encoderSamplesCount;
int16  motorControl_positionCounterFront;
int16  motorControl_positionCounterRear;
uint32 motorControl_numLoops;
uint8  motorControl_allChanged[MOTORCONTROL_NUM_MOTORS];

/* Control variables */
float motorControl_desiredMotorAngularSpeeds[MOTORCONTROL_NUM_MOTORS];
float motorControl_motorsController_lastError[MOTORCONTROL_NUM_MOTORS][MOTORCONTROL_PID_NUM_ERRORS];
float motorControl_motorsController_U0[MOTORCONTROL_NUM_MOTORS];
float motorControl_motorsController_U1[MOTORCONTROL_NUM_MOTORS];
float motorControl_motorsController_Q0[MOTORCONTROL_NUM_MOTORS];
float motorControl_motorsController_Q1[MOTORCONTROL_NUM_MOTORS];
float motorControl_motorsController_Q2[MOTORCONTROL_NUM_MOTORS];
