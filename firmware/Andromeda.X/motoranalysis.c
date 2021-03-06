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
#include <Andromeda/MotorControl/MotorAnalysis/motoranalysis.h>


/* Includes MotorBoard library */
#include <Andromeda/motorboard.h>
#include <Andromeda/MotorControl/MotorDriver/motordriver.h>


/* Module global variables */
/* Encoder Self Check Variables */
uint8 motorAnalysis_encoderSelfCheck = 0;
uint8 motorAnalysis_encoderFail = 0;
uint8 motorAnalysis_delayEncoderCounter = 0;
uint8 motorAnalysis_delayEncoderBuzzer = 0;
