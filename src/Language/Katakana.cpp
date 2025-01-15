/* SPDX-License-Identifier: MIT */

#include "../LCDI2C_Katakana.h"
#include "../base/pgmspace.h"

static uint8_t findDiacriticCharacter(uint16_t code, uint16_t *base,
                                      uint8_t *diacritic) {
  for (uint8_t idx = 0; idx < KanaDiacriticCharacterNum; idx++) {
    if (pgm_read_word(&(KanaDiacriticCharacters[idx].code)) == code) {
      if (base)
        *base = pgm_read_word(&(KanaDiacriticCharacters[idx].base));
      if (diacritic)
        *diacritic = pgm_read_byte(&(KanaDiacriticCharacters[idx].diacritic));
      return 1;
    }
  }

  return 0;
}

uint8_t LCDI2C_Katakana::nextWordLength(const byte text[], uint16_t start,
                                        uint16_t code) {
  // Check for Katakana words with diacritic
  if (findDiacriticCharacter(code, nullptr, nullptr))
    return 2;

  // Check for other Katakana words
  if (code >= 0x30A1 && code <= 0x30F3)
    return 1;

  // Check for English word
  return LCDI2C_UTF8::nextWordLength(text, start, code);
}

uint16_t LCDI2C_Katakana::getCharacter(uint16_t code) {
  uint8_t base, diacritic = 0;

  // Look for katakana with diacritics
  if (code >= 0x30A0 && code < 0x3100) {
    // Separate one Katakana character with diacritic into base character and
    // diacritic character
    findDiacriticCharacter(code, &code, &diacritic);
  }

  // Look for Latin Fullwidth character
  if (code >= 0xFF01 && code <= 0xFF5D)
    return code - 0xFEE0; // Convert Latin Fullwidth to Latin ASCII

  base = LCDI2C_UTF8::getCharacter(code);

  if (diacritic == 0)
    return (uint16_t)base;
  else
    return uint16_t(base) | (diacritic << 8);
}
