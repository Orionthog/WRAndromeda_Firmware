/** SubZeroBoard - Analysis private definition
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
#ifndef ANDROM_ANALYSIS_PRIVATE
#define ANDROM_ANALYSIS_PRIVATE


/* Includes SubZeroBoard */
#include <SubZeroBoard/subzeroboard.h>

/* Includes module pinout */
#include <SubZeroBoard/Analysis/analysis_pinout.h>


/* Includes dsPIC33 libraries */
#include <p33Fxxxx.h>


/** @brief Configures the ports of the module.
  **/
void analysis_configPorts();

/** @brief Configures the ADC chip (ADS1810).
  **/
void analysis_configADC();

/** @brief Configures and initializes the filters.
  **/
void analysis_configFilters();


/** @brief Converts the read values to standard units.
  * @param input The input number.
  * @param voltage The voltage read on the given input.
  * @return The value of the AD input in SI units.
  **/
float analysis_convertVoltage(uint8 input, float voltage);

/** @brief Sets the read values to the corresponding system variables.
  * @param input The input number.
  * @param value The value read on the given input.
  **/
void analysis_setInputValue(uint8 input, float value);

/** @brief Calculates information about the power consumption of the board.
  * @param period The time difference between the last call of the function.
  **/
void analysis_calculatePowerInformation(float period);


/** @brief Filters the input value.
  * @param input The input number.
  * @param value The value read on the given input.
  * @return The filtered value.
  **/
float analysis_filterValue(uint8 input, float value);


/** @brief Configures the AD chip to read the next input.
  **/
void analysis_setNextInput();


#endif
