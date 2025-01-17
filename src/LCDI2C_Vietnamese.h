/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for Vietnamese. The language is supported
 * by using the display's CGRAM: Vietnamese characters are loaded into a
 * small portion of the display's font on the fly. As such, the language
 * is supported for every display. There are caveats: only 8 custom
 * characters can be loaded at once, and a fallback character in ROM will
 * be displayed in place of the 9th unique character and every one after.
 */

#ifndef LCDI2C_Vietnamese_h
#define LCDI2C_Vietnamese_h

#include "Custom/Vietnamese.h"
#include "LCDI2C_Generic.h"


class LCDI2C_Vietnamese : public LCDI2C_Generic {
public:
  LCDI2C_Vietnamese(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
      : LCDI2C_Generic(lcd_addr, lcd_cols, lcd_rows) {
    setLongestWordLength(7);
    customizedLanguage =
        new CustomizedVietnamese(static_cast<LCDI2C_UTF8 *>(this));
  }
};

typedef LCDI2C_Vietnamese LCDI2C_Generic_Vietnamese;

#endif // LCDI2C_Vietnamese_h