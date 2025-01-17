/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for Western European languages, like French,
 * German and Spanish. Displays using the following chips are supported:
 *
 * - Wuxi AIP31066W2
 * - Sitronix ST7066-0B
 * - Surenoo SLC European series
 */

#ifndef LCDI2C_Latin_h
#define LCDI2C_Latin_h

#include "base/LCDI2C_UTF8.h"

// List of Latin-1 letters and some symbols built in the ROM
const uint8_t LatinROMLetterNum = 80;
extern PROGMEM const ROMCharacterType LatinROMLetters[LatinROMLetterNum];

class LCDI2C_Latin : public LCDI2C_UTF8 {
public:
  LCDI2C_Latin(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_UTF8(lcd_addr, lcd_cols, lcd_rows) {
    ROMLetterNum = LatinROMLetterNum;
    ROMLetters = LatinROMLetters;
    setLongestWordLength(10);
  }
};

typedef LCDI2C_Latin LiquidCrystal_I2C_Latin;

#endif // LCDI2C_Latin_h