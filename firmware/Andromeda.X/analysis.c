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
#include <MotorBoard/Analysis/analysis.h>


/* Includes MotorBoard library */
#include <MotorBoard/motorboard.h>


/* Includes dsPIC libraries */
#include <p33Fxxxx.h>
#include <libpic30.h>
#include <math.h>
#include <adc.h>
#include <timer.h>
#include <dma.h>


/* Module global variables */
float andromeda_batteryVoltage = 0.0;
float andromeda_mcuVoltage = 0.0;
float andromeda_motorCurrents[2];


/* Module internal variables */
uint16 analysis_adcBuffer[ANALYSIS_NUM_INPUTS] __attribute__((space(dma),aligned(16)));
uint32 analysis_numConversions;
float  analysis_lastVoltages[ANALYSIS_NUM_INPUTS][ANALYSIS_AVG_SIZE];
uint16 analysis_timerPeriod;
