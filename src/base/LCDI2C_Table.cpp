/* SPDX-License-Identifier: MIT */
#include "LCDI2C_Table.h"

#include "LCDI2C_Types.h"

uint8_t getROMCharacter(uint16_t code, const ROMCharacterType *table,
                        uint8_t count) {
  for (uint8_t i = 0; i < count; ++i) {
    if (code == pgm_read_word(&(table[i].code)))
      return pgm_read_byte(&(table[i].link));
  }

  return NOTFOUND;
}
