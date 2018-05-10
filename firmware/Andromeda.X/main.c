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

/* Includes MotorBoard library */
#include <MotorBoard/motorboard.h>


/* Includes dsPIC33 libraries */
#include <p33Fxxxx.h>


/* dsPIC configuration bits */
_FOSCSEL(FNOSC_FRC & IESO_OFF)
_FOSC(FCKSM_CSECME & OSCIOFNC_ON & POSCMD_NONE  & IOL1WAY_OFF)
_FWDT(FWDTEN_OFF   & WINDIS_OFF)
_FPOR(PWMPIN_OFF   & HPOL_ON      & LPOL_ON     & FPWRT_PWR1)
_FICD(ICS_PGD3     & JTAGEN_OFF)
 
/*
  
*/