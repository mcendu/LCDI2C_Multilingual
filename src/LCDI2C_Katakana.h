/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for Japanese. Only Katakana is available;
 * there is no Hiragana or Kanji. Displays using the following chips are
 * supported:
 *
 * - Hitachi HD44780UA00
 * - Wuxi AIP31066
 * - Samsung KS0066F00, KS0066F04
 * - Jewel Hill SPLC780D1, SPLC063
 * - Sitronix ST7066-0A
 * - Surenoo SLC Japanese series
 */

#ifndef LCDI2C_Katakana_h
#define LCDI2C_Katakana_h

#include "base/LCDI2C_Custom.h"
#include "base/LCDI2C_UTF8.h"

// List of Katakana characters, punctuations, some symbols built in the ROM
const uint8_t KanaROMLetterNum = 87;
extern PROGMEM const ROMCharacterType KanaROMLetters[KanaROMLetterNum];

class LCDI2C_Katakana : public LCDI2C_UTF8 {
public:
  LCDI2C_Katakana(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_UTF8(lcd_addr, lcd_cols, lcd_rows) {
    ROMLetterNum = KanaROMLetterNum;
    ROMLetters = KanaROMLetters;
    setLongestWordLength(10);
  }

protected:
  uint8_t nextWordLength(const byte text[], uint16_t start,
                         uint16_t code) override;
  uint16_t getCharacter(uint16_t code) override;
};

typedef LCDI2C_Katakana LiquidCrystal_I2C_Katakana;

#endif // LCDI2C_Katakana_h