/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for some common, modern symbols, on top of the
 * support for Russian and other Eastern European languages.
 */

#ifndef LCDI2C_Russian_Symbols_h
#define LCDI2C_Russian_Symbols_h

#include "Custom/Symbols.h"
#include "LCDI2C_Russian.h"

class LCDI2C_Russian_Symbols : public LCDI2C_Russian {
public:
  LCDI2C_Russian_Symbols(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_Russian(lcd_addr, lcd_cols, lcd_rows) {
    customizedLanguage =
        new CustomizedSymbols(static_cast<LCDI2C_UTF8 *>(this));
  }
};

#endif // LCDI2C_Russian_Symbols_h