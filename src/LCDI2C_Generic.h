/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for basic ASCII. If you are unsure, use this.
 * Some additional symbols are also supported if your display happens to have
 * a Japanese font, which displays using the following chips do:
 *
 * - Hitachi HD44780UA00
 * - Wuxi AIP31066
 * - Samsung KS0066F00, KS0066F04
 * - Jewel Hill SPLC780D1, SPLC063
 * - Sitronix ST7066-0A
 * - Surenoo SLC Japanese series
 */

#ifndef LCDI2C_Generic_h
#define LCDI2C_Generic_h

#include "base/LCDI2C_UTF8.h"

const uint8_t GenericROMLetterNum = 16;
extern PROGMEM const ROMCharacterType GenericROMLetters[GenericROMLetterNum];

class LCDI2C_Generic : public LCDI2C_UTF8 {
public:
  LCDI2C_Generic(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_UTF8(lcd_addr, lcd_cols, lcd_rows) {
    ROMLetterNum = GenericROMLetterNum;
    ROMLetters = GenericROMLetters;
    setLongestWordLength(10);
  }
};

typedef LCDI2C_Generic LiquidCrystal_I2C_Generic;

#endif // LCDI2C_Generic_h