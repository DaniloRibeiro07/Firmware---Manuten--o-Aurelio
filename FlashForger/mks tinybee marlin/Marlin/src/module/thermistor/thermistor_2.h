/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// R25 = 200 kOhm, beta25 = 4338 K, 4.7 kOhm pull-up, ATC Semitec 204GT-2
// Verified by linagee. Source: https://www.mouser.com/datasheet/2/362/semitec%20usa%20corporation_gtthermistor-1202937.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
//
constexpr temp_entry_t temptable_2[] PROGMEM = {
 { OV(  5), 300 },
  { OV(  10), 295 },
  { OV(  15), 290 },
  { OV(  20), 285 },
  { OV(  25), 280 },
  { OV(  30), 275 },
  { OV(  35), 270 },
  { OV(  40), 265 },
  { OV(  44), 260 },
  { OV(  47), 255 },
  { OV(  51), 250 },
  { OV(  56), 245 },
  { OV(  61), 240 },
  { OV(  67), 235 },
  { OV(  73), 230 },
  { OV(  78), 225 },
  { OV(  85), 220 },
  { OV(  90), 215 },
  { OV(  95), 210 },
  { OV( 100), 205 },
  { OV( 110), 200 },
  { OV( 120), 195 },
  { OV( 130), 190 },
  { OV( 140), 185 },
  { OV( 155), 180 },
  { OV( 170), 175 },
  { OV( 185), 170 },
  { OV( 200), 165 },
  { OV( 220), 160 },
  { OV( 243), 155 },
  { OV( 260), 150 },
  { OV( 290), 145 },
  { OV( 312), 140 },
  { OV( 340), 135 },
  { OV( 374), 130 },
  { OV( 404), 125 },
  { OV( 435), 120 },
  { OV( 473), 115 },
  { OV( 515), 110 },
  { OV( 550), 105 },
  { OV( 590), 100 },
  { OV( 630),  95 },
  { OV( 660),  90 },
  { OV( 705),  85 },
  { OV( 740),  80 },
  { OV( 770),  75 },
  { OV( 815),  70 },
  { OV( 835),  65 },
  { OV( 863),  60 },
  { OV( 890),  55 },
  { OV( 906),  50 },
  { OV( 925),  45 },
  { OV( 940),  40 },
  { OV( 963),  35 },
  { OV( 970),  30 },
  { OV( 985),  25 },
  { OV( 990),  20 },
  { OV( 995),  15 },
  { OV( 1000),  10 },
  { OV(1005),   5 },
  { OV(1010),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};/*
constexpr temp_entry_t temptable_2[] PROGMEM = {
  { OV(   1), 848 },
  { OV(  30), 300 }, // top rating 300C
  { OV(  34), 290 },
  { OV(  39), 280 },
  { OV(  46), 270 },
  { OV(  53), 260 },
  { OV(  63), 250 },
  { OV(  74), 240 },
  { OV(  87), 230 },
  { OV( 104), 220 },
  { OV( 124), 210 },
  { OV( 148), 200 },
  { OV( 176), 190 },
  { OV( 211), 180 },
  { OV( 252), 170 },
  { OV( 301), 160 },
  { OV( 357), 150 },
  { OV( 420), 140 },
  { OV( 489), 130 },
  { OV( 562), 120 },
  { OV( 636), 110 },
  { OV( 708), 100 },
  { OV( 775),  90 },
  { OV( 835),  80 },
  { OV( 884),  70 },
  { OV( 924),  60 },
  { OV( 955),  50 },
  { OV( 977),  40 },
  { OV( 993),  30 },
  { OV(1004),  20 },
  { OV(1012),  10 },
  { OV(1016),   0 }
};
*/