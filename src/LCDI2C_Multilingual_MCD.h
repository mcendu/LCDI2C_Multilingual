/* SPDX-License-Identifier: MIT */
/*
 * This is LCDI2C_Multilingual_MCD, a fork of LiquidCrystal I2C Multilingual
 * by Le Phuoc Loc, which is in turn based on the old LiquidCrystal_I2C from
 * DFRobot.
 *
 * As the name implies, this library supports displaying text on LCD text
 * displays, communicating with them using the two-wire I2C bus. This library
 * supports multiple languages and display character sets, providing a UTF-8
 * API for programmers.
 *
 * This is the header for everything: every provided driver is included and
 * support for all languages available are pulled in. If you don't need
 * everything, you can alternatively pick from the included headers below.
 *
 * All displays supports contains a font for ASCII, burnt into ROM. Support
 * varys for other languages: some displays additionally come with a
 * Japanese font, others come with Latin characters with diacritics or
 * a Cyrillic font. If the class used don't match that of your display,
 * the screen will display garbage for non-ASCII characters. An exception
 * here is Vietnamese: support for it is provided by loading custom
 * characters into the display's font RAM, and therefore it somehow works
 * everywhere.
 */

#ifndef LCDI2C_Multilingual_MCD_h
#define LCDI2C_Multilingual_MCD_h

#include "LCDI2C_Generic.h"
#include "LCDI2C_Katakana.h"
#include "LCDI2C_Katakana_Symbols.h"
#include "LCDI2C_Katakana_Vietnamese.h"
#include "LCDI2C_Latin.h"
#include "LCDI2C_Latin_Symbols.h"
#include "LCDI2C_Latin_Vietnamese.h"
#include "LCDI2C_Russian.h"
#include "LCDI2C_RussianLatin.h"
#include "LCDI2C_RussianLatin_Symbols.h"
#include "LCDI2C_RussianLatin_Vietnamese.h"
#include "LCDI2C_Russian_Symbols.h"
#include "LCDI2C_Russian_Vietnamese.h"
#include "LCDI2C_Symbols.h"
#include "LCDI2C_Vietnamese.h"


#endif // LCDI2C_Multilingual_MCD_h