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

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
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
};
/*
constexpr temp_entry_t temptable_1[] PROGMEM = {
  { OV(  23), 300 },
  { OV(  25), 295 },
  { OV(  27), 290 },
  { OV(  28), 285 },
  { OV(  31), 280 },
  { OV(  33), 275 },
  { OV(  35), 270 },
  { OV(  38), 265 },
  { OV(  41), 260 },
  { OV(  44), 255 },
  { OV(  48), 250 },
  { OV(  52), 245 },
  { OV(  56), 240 },
  { OV(  61), 235 },
  { OV(  66), 230 },
  { OV(  71), 225 },
  { OV(  78), 220 },
  { OV(  84), 215 },
  { OV(  92), 210 },
  { OV( 100), 205 },
  { OV( 109), 200 },
  { OV( 120), 195 },
  { OV( 131), 190 },
  { OV( 143), 185 },
  { OV( 156), 180 },
  { OV( 171), 175 },
  { OV( 187), 170 },
  { OV( 205), 165 },
  { OV( 224), 160 },
  { OV( 245), 155 },
  { OV( 268), 150 },
  { OV( 293), 145 },
  { OV( 320), 140 },
  { OV( 348), 135 },
  { OV( 379), 130 },
  { OV( 411), 125 },
  { OV( 445), 120 },
  { OV( 480), 115 },
  { OV( 516), 110 },
  { OV( 553), 105 },
  { OV( 591), 100 },
  { OV( 628),  95 },
  { OV( 665),  90 },
  { OV( 702),  85 },
  { OV( 737),  80 },
  { OV( 770),  75 },
  { OV( 801),  70 },
  { OV( 830),  65 },
  { OV( 857),  60 },
  { OV( 881),  55 },
  { OV( 903),  50 },
  { OV( 922),  45 },
  { OV( 939),  40 },
  { OV( 954),  35 },
  { OV( 966),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
*/