/* SPDX-License-Identifier: MIT */
#include "LCDI2C_Custom.h"

#include "LCDI2C_Types.h"
#include "LCDI2C_UTF8.h"
#include <stdint.h>

uint8_t CustomizedLanguage::getCharacter(uint16_t code, uint8_t col,
                                         uint8_t row) {
  uint8_t idx, ord;

  idx = getLetterIndex(code);
  if (idx == NOTFOUND)
    return NOTFOUND;

  // Declared unicode letter
  ord = getCGRAMLetterOrder(idx);
  if (ord == NOTFOUND) {                // None exists in CGRAM
    if (cgramLettersNum < CGRAM_SIZE) { // Run out of CGRAM?
      ord = createLetter(idx);          // No -> Create a new letter in CGRAM
      // Fix wrong cursor moving when creating custom character
      screen->setCursor(col, row);
    } else // Yes -> Replace with alternative letter
      ord = (uint8_t)getAlternativeLetter(CustomLetters[idx].code);
  }
  return ord;
}

void CustomizedLanguage::clearLetters() {
  cgramLettersNum = 0;
  memset(cgramLetters, NOTFOUND, CGRAM_SIZE);
}

void CustomizedLanguage::tranpose(const uint8_t src[], uint8_t dst[]) {
  uint8_t element, mask = 0b10000000;
  memset(dst, 0, 8);
  for (uint8_t i = 0; i < 8; i++) {
    for (uint8_t j = 0; j < 5; j++) {
      element = ((src[j] & mask) << i) >> (j + 3);
      dst[i] |= element;
    }
    mask >>= 1;
  }
}

uint8_t CustomizedLanguage::createLetter(uint8_t idx) {
  uint8_t placeOrd = cgramLettersNum++;

  // Create new coresponding letter in CGRAM
  tranpose(CustomLetters[idx].mapT, charmap);
  screen->createChar(placeOrd, charmap);
  cgramLetters[placeOrd] = idx;

  return placeOrd;
}

uint8_t CustomizedLanguage::getLetterIndex(uint16_t c) {
  for (int idx = 0; idx < CustomLetterNum; idx++)
    if (CustomLetters[idx].code == c)
      return idx;
  return NOTFOUND;
}

uint8_t CustomizedLanguage::getCGRAMLetterOrder(uint8_t idx) {
  for (uint8_t ord = 0; ord < cgramLettersNum; ord++)
    if (cgramLetters[ord] == idx)
      return ord;
  return NOTFOUND;
}
