/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for some common, modern symbols, loading them
 * into the display's CGRAM, or the customizable portion of the font, on the
 * fly. The basic ASCII is supported as usual.
 */

#ifndef LCDI2C_Symbols_h
#define LCDI2C_Symbols_h

#include "Custom/Symbols.h"
#include "LCDI2C_Generic.h"


class LCDI2C_Symbols : public LCDI2C_Generic {
public:
  LCDI2C_Symbols(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_Generic(lcd_addr, lcd_cols, lcd_rows) {
    customizedLanguage =
        new CustomizedSymbols(static_cast<LCDI2C_UTF8 *>(this));
  }
};

typedef LCDI2C_Symbols LCDI2C_Generic_Symbols;

#endif // LCDI2C_Symbols_h