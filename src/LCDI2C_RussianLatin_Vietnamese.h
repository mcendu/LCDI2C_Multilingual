/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * This class provides support for Vietnamese, on top of the support for
 * Russian.
 */

#ifndef LCDI2C_RussianLatin_Vietnamese_h
#define LCDI2C_RussianLatin_Vietnamese_h

#include "Custom/Vietnamese.h"
#include "LCDI2C_RussianLatin.h"


class LCDI2C_RussianLatin_Vietnamese : public LCDI2C_RussianLatin {
public:
  LCDI2C_RussianLatin_Vietnamese(uint8_t lcd_addr, uint8_t lcd_cols,
                                 uint8_t lcd_rows)
      : LCDI2C_RussianLatin(lcd_addr, lcd_cols, lcd_rows) {
    // setLongestWordLength(7);
    customizedLanguage =
        new CustomizedVietnamese(static_cast<LCDI2C_UTF8 *>(this));
  }
};

#endif // LCDI2C_RussianLatin_Vietnamese_h