/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            8
#define STATUS_LOGO_WIDTH       39

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00110100,B00000100,B00000000,
  B00000000,B00000000,B00110100,B00000100,B00000000,
  B00000011,B10111100,B11110100,B11110111,B10000000,
  B00000011,B00000101,B10110100,B00010100,B11000000,
  B00000011,B00111101,B10110100,B11110100,B11000000,
  B00000011,B01001101,B10110101,B00110100,B11000000,
  B00000011,B01001101,B10110101,B00110100,B11000000,
  B00000011,B00110110,B11010100,B11011111,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00110001,B10110011,B00111000,B00000000,
  B00000000,B00110001,B10110110,B00111000,B00000000,
  B00000000,B00111011,B10111100,B00011000,B00000000,
  B00000000,B00101010,B10111100,B00011000,B00000000,
  B00000000,B00101010,B10110110,B00011000,B00000000,
  B00000000,B00101110,B10110011,B00011000,B00000000,
  B00000000,B00100100,B10110001,B01111100,B00000000
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
