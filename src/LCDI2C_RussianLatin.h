/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for Russian. Only capital letters are
 * available for Russian. Displays using the following chips are supported:
 *
 * - Hitachi HD44780UA02
 */

#ifndef LCDI2C_RussianLatin_h
#define LCDI2C_RussianLatin_h

#include "base/LCDI2C_UTF8.h"

// List of capital Russian, Latin, Greek letters and some symbols built in the
// ROM
const uint8_t RussianLatinROMLetterNum = 52;
extern PROGMEM const ROMCharacterType
    RussianLatinROMLetters[RussianLatinROMLetterNum];

class LCDI2C_RussianLatin : public LCDI2C_UTF8 {
public:
  LCDI2C_RussianLatin(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_UTF8(lcd_addr, lcd_cols, lcd_rows) {
    ROMLetterNum = RussianLatinROMLetterNum;
    ROMLetters = RussianLatinROMLetters;
    setLongestWordLength(10);
  }

protected:
  uint16_t getCharacter(uint16_t code) override;
};

typedef LCDI2C_RussianLatin LiquidCrystal_I2C_RussianLatin;

#endif // LCDI2C_RussianLatin_h