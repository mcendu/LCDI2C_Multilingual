/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for Russian and some other Eastern European
 * languages. Displays using the following chips are supported:
 *
 * - Wuxi AIP31066W3
 * - Surenoo SLC Russian series
 */

#ifndef LCDI2C_Russian_h
#define LCDI2C_Russian_h

#include "base/LCDI2C_UTF8.h"

// List of Russian letters and some symbols built in the ROM
const uint8_t RussianROMLetterNum = 74;
extern PROGMEM const ROMCharacterType RussianROMLetters[RussianROMLetterNum];

class LCDI2C_Russian : public LCDI2C_UTF8 {
public:
  LCDI2C_Russian(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_UTF8(lcd_addr, lcd_cols, lcd_rows) {
    ROMLetterNum = RussianROMLetterNum;
    ROMLetters = RussianROMLetters;
    setLongestWordLength(10);
  }
};

typedef LCDI2C_Russian LiquidCrystal_I2C_Russian;

#endif // LCDI2C_Russian_h