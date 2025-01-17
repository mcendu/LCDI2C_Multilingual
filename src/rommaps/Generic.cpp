/* SPDX-License-Identifier: MIT */

#include "../LCDI2C_Generic.h"

#include "../base/LCDI2C_Types.h"
#include <Arduino.h>

extern PROGMEM const ROMCharacterType GenericROMLetters[] = {
    {0x00A5, 0x5C}, // ¥ Yen
    {0x00F7, 0xFD}, // ÷ Division

    {0x03A3, 0xF6}, // Σ sigma (capital)
    {0x03A9, 0xF4}, // Ω omega (capital)
    {0x03B1, 0xE0}, // α alpha
    {0x03B2, 0xE2}, // β beta
    {0x03B4, 0xE5}, // δ delta
    {0x03B5, 0xE3}, // ε epsilon
    {0x03B8, 0xF2}, // θ theta
    {0x03BC, 0xE4}, // μ mu
    {0x03C0, 0xF7}, // π pi
    {0x03C1, 0xE6}, // ρ rho

    {0x2190, 0x7F}, // ← left arrow
    {0x2192, 0x7E}, // → right arrow

    {0x221A, 0xE8}, // √ sqrt
    {0x221E, 0xF3}, // ∞ infinity
};