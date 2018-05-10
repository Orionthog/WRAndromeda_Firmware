/** SubZeroBoard - Analysis configuration
  * Warthog Robotics
  * University of Sao Paulo at Sao Carlos
  * http://www.warthog.sc.usp.br
  * This file is part of the Warthog Robotics SubZero project
  **/


/** Copyright (C) 2014 Warthog Robotics
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


/* Prevents multiple definitions */
#ifndef ANDROM_ANALYSIS_CONFIGURATION
#define ANDROM_ANALYSIS_CONFIGURATION


/* Includes dsPIC33 libraries */
#include <p33Fxxxx.h>


/* Module configuration */
#define ANALYSIS_NUM_INPUTS 5  /* The number of analog inputs */
#define ANALYSIS_AVG_SIZE   10 /* The number of measurements used by the average filter */


#define ANALYSIS_LOW_BAT_THRESH  6.4 /* Low battery voltage threshold in V */
#define ANALYSIS_MIN_CONVERSIONS 1000   /* Mininum number of conversions for low battery warning */
#define ANALYSIS_LOW_BAT_COUNTER 1000  /* Low battery voltage Counter to enable buzzer */
#define ANALYSIS_BUZZER_DELAY 1000   /* Delay counter to toggle buzzer */


#endif
