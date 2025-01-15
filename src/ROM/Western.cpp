/* SPDX-License-Identifier: MIT */

#include "Generic.h"
#include "Latin.h"
#include "Russian.h"
#include "RussianLatin.h"

#include "../base/LCDI2C_Types.h"

PROGMEM const ROMCharacterType GenericROMLetters[GenericROMLetterNum] = {
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

PROGMEM const ROMCharacterType LatinROMLetters[LatinROMLetterNum] = {
    // {0x0060, 0xB3}, // ` grave accent

    {0x00A1, 0xA9}, // ¡ inverted exclamation mark
    {0x00A2, 0xA4}, // ¢ Cent
    {0x00A3, 0xA5}, // £ Pound
    {0x00A5, 0xA6}, // ¥ Yen
    {0x00A8, 0xB1}, // ¨ diaeresis
    {0x00AA, 0x9D}, // ª feminine ordinal indicator

    {0x00B0, 0xB2}, // ° degree sign
    {0x00B1, 0x10}, // ± Plus-Minus
    {0x00B2, 0x1E}, // ² power of 2
    {0x00B3, 0x1F}, // ³ power of 3
    {0x00B4, 0xB4}, // ´ acute accent
    {0x00B7, 0xB0}, // · middle dot
    {0x00BA, 0x9E}, // º masculine ordinal indicator
    {0x00BF, 0x9F}, // ¿ inverted question mark

    {0x00C3, 0xAA}, // Ã A with tilde
    {0x00C4, 0x8E}, // Ä A with diaeresis
    {0x00C5, 0x8F}, // Å A with ring above
    {0x00C6, 0x92}, // Æ
    {0x00C7, 0x80}, // Ç C with cedilla
    {0x00C9, 0x90}, // É E with acute
    {0x00CF, 0x8B}, // Ï I with diaeresis

    {0x00D1, 0x9C}, // Ñ N with tilde
    {0x00D5, 0xAC}, // Õ O with tilde
    {0x00D6, 0x99}, // Ö O with diaeresis
    {0x00D7, 0xB7}, // × Multiplication
    {0x00D8, 0xAE}, // Ø O with stroke
    {0x00DC, 0x9A}, // Ü U with diaeresis

    {0x00E0, 0x85}, // à a with grave
    {0x00E1, 0xA0}, // á a with acute
    {0x00E2, 0x83}, // â a with circumflex
    {0x00E3, 0xAB}, // ã a with tilde
    {0x00E4, 0x84}, // ä a with diaeresis
    {0x00E5, 0x86}, // å a with ring above
    {0x00E6, 0x91}, // æ
    {0x00E7, 0x87}, // ç c with cedilla
    {0x00E8, 0x8A}, // è e with grave
    {0x00E9, 0x82}, // é e with acute
    {0x00EA, 0x88}, // ê e with circumflex
    {0x00EB, 0x89}, // ë e with diaeresis
    {0x00EC, 0x8D}, // ì i with grave
    {0x00ED, 0xA1}, // í i with acute
    {0x00EE, 0x8C}, // î i with circumflex

    {0x00F1, 0x9B}, // ñ n with tilde
    {0x00F2, 0x95}, // ò o with grave
    {0x00F3, 0xA2}, // ó o with acute
    {0x00F4, 0x93}, // ô o with circumflex
    {0x00F5, 0xAD}, // õ o with tilde
    {0x00F6, 0x94}, // ö o with diaeresis
    {0x00F7, 0xB8}, // ÷ Division
    {0x00F8, 0xAF}, // ø o with stroke
    {0x00F9, 0x97}, // ù u with grave
    {0x00FA, 0xA3}, // ú u with acute
    {0x00FB, 0x96}, // û u with circumflex
    {0x00FC, 0x81}, // ü u with diaeresis
    {0x00FF, 0x98}, // ÿ y with diaeresis

    {0x2190, 0xC8}, // ← left arrow
    {0x2191, 0xC5}, // ↑ up arrow
    {0x2192, 0xC7}, // → right arrow
    {0x2193, 0xC6}, // ↓ down arrow
    {0x21B5, 0xC4}, // ↵ enter

    {0x03A3, 0xDA}, // Σ sigma (capital)
    {0x03A9, 0xDE}, // Ω omega (capital)
    {0x03B1, 0xDF}, // α alpha
    {0x03B2, 0xE0}, // β beta
    {0x03B3, 0xE1}, // γ gamma
    {0x03B4, 0xE2}, // δ delta
    {0x03B5, 0xE3}, // ε epsilon
    {0x03B7, 0xE5}, // η eta
    {0x03B8, 0xE6}, // θ theta
    {0x03BC, 0xEA}, // μ mu
    {0x03C0, 0xED}, // π pi
    {0x03C1, 0xEE}, // ρ rho
    {0x03C3, 0xEF}, // σ sigma
    {0x03C8, 0xF3}, // ψ psi
    {0x03C9, 0xF4}, // ω omega

    {0x221A, 0xBE}, // √ sqrt
    {0x221E, 0xC2}, // ∞ infinity
    {0x2248, 0x1D}, // ≈ almost equal
    {0x2264, 0xB9}, // ≤ LTE
    {0x2265, 0xBA}, // ≥ GTE
};

PROGMEM const ROMCharacterType RussianROMLetters[RussianROMLetterNum] = {
    {0x00A2, 0x5C}, // ¢ Cent
    {0x00A3, 0xCF}, // £ Pound
    {0x00D7, 0xD5}, // × Multiplication

    {0x0401, 0xA2}, // Ё
    {0x0410, 0x41}, // А
    {0x0411, 0xA0}, // Б
    {0x0412, 0x42}, // В
    {0x0413, 0xA1}, // Г
    {0x0414, 0xE0}, // Д
    {0x0415, 0x45}, // Е
    {0x0416, 0xA3}, // Ж
    {0x0417, 0xA4}, // З
    {0x0418, 0xA5}, // И
    {0x0419, 0xA6}, // Й
    {0x041A, 0x4B}, // К
    {0x041B, 0xA7}, // Л
    {0x041C, 0x4D}, // М
    {0x041D, 0x48}, // Н
    {0x041E, 0x4F}, // О
    {0x041F, 0xA8}, // П
    {0x0420, 0x50}, // Р
    {0x0421, 0x43}, // С
    {0x0422, 0x54}, // Т
    {0x0423, 0xA9}, // У
    {0x0424, 0xAA}, // Ф
    {0x0425, 0x58}, // Х
    {0x0426, 0xE1}, // Ц
    {0x0427, 0xAB}, // Ч
    {0x0428, 0xAC}, // Ш
    {0x0429, 0xE2}, // Щ
    {0x042A, 0xAD}, // Ъ
    {0x042B, 0xAE}, // Ы
    {0x042C, 0x62}, // Ь (b)
    {0x042D, 0xAF}, // Э
    {0x042E, 0xB0}, // Ю
    {0x042F, 0xB1}, // Я
    {0x0430, 0x61}, // а
    {0x0431, 0xB2}, // б
    {0x0432, 0xB3}, // в
    {0x0433, 0xB4}, // г
    {0x0434, 0xE3}, // д
    {0x0435, 0x65}, // е
    {0x0436, 0xB6}, // ж
    {0x0437, 0xB7}, // з
    {0x0438, 0xB8}, // и
    {0x0439, 0xB9}, // й
    {0x043A, 0xBA}, // к
    {0x043B, 0xBB}, // л
    {0x043C, 0xBC}, // м
    {0x043D, 0xBD}, // н
    {0x043E, 0x6F}, // о
    {0x043F, 0xBE}, // п
    {0x0440, 0x70}, // р
    {0x0441, 0x63}, // с
    {0x0442, 0xBF}, // т
    {0x0443, 0x79}, // у
    {0x0444, 0xE4}, // ф
    {0x0445, 0x78}, // х
    {0x0446, 0xE5}, // ц
    {0x0447, 0xC0}, // ч
    {0x0448, 0xC1}, // ш
    {0x0449, 0xE6}, // щ
    {0x044A, 0xC2}, // ъ
    {0x044B, 0xC3}, // ы
    {0x044C, 0xC4}, // ь
    {0x044D, 0xC5}, // э
    {0x044E, 0xC6}, // ю
    {0x044F, 0xC7}, // я
    {0x0451, 0xB5}, // ё

    {0x2190, 0xC8}, // ← left arrow
    {0x2191, 0xD9}, // ↑ up arrow
    {0x2192, 0xC9}, // → right arrow
    {0x2193, 0xDA}, // ↓ down arrow
    {0x21B5, 0x7E}, // ↵ enter
};

PROGMEM const ROMCharacterType RussianLatinROMLetters[RussianLatinROMLetterNum] = {
    {0x03A3, 0x94}, // Σ sigma (capital)
    {0x03A9, 0x9A}, // Ω omega (capital)
    {0x03B1, 0x90}, // α alpha
    {0x03B2, 0xDF}, // β beta
    {0x03B4, 0x9B}, // δ delta
    {0x03B5, 0x9E}, // ε epsilon
    {0x03B8, 0x99}, // θ theta
    {0x03BC, 0xB5}, // μ mu
    {0x03C0, 0x93}, // π pi
    {0x03C3, 0x95}, // σ sigma
    {0x03C9, 0xB8}, // ω omega

    {0x0401, 0xCB}, // Ё
    {0x0410, 0x41}, // А
    {0x0411, 0x80}, // Б
    {0x0412, 0x42}, // В
    {0x0413, 0x92}, // Г
    {0x0414, 0x81}, // Д
    {0x0415, 0x45}, // Е
    {0x0416, 0x82}, // Ж
    {0x0417, 0x83}, // З
    {0x0418, 0x84}, // И
    {0x0419, 0x85}, // Й
    {0x041A, 0x4B}, // К
    {0x041B, 0x86}, // Л
    {0x041C, 0x4D}, // М
    {0x041D, 0x48}, // Н
    {0x041E, 0x4F}, // О
    {0x041F, 0x87}, // П
    {0x0420, 0x50}, // Р
    {0x0421, 0x43}, // С
    {0x0422, 0x54}, // Т
    {0x0423, 0x88}, // У
    {0x0424, 0xD8}, // Ф
    {0x0425, 0x58}, // Х
    {0x0426, 0x89}, // Ц
    {0x0427, 0x8A}, // Ч
    {0x0428, 0x8B}, // Ш
    {0x0429, 0x8C}, // Щ
    {0x042A, 0x8D}, // Ъ
    {0x042B, 0x8E}, // Ы
    {0x042C, 0x62}, // Ь (b)
    {0x042D, 0x8F}, // Э
    {0x042E, 0xAC}, // Ю
    {0x042F, 0xAD}, // Я

    {0x2190, 0x1B}, // ← left arrow
    {0x2191, 0x18}, // ↑ up arrow
    {0x2192, 0x1A}, // → right arrow
    {0x2193, 0x19}, // ↓ down arrow
    {0x21B5, 0x17}, // ↵ enter

    {0x2264, 0x1C}, // ≤ LTE
    {0x2265, 0x1D}, // ≥ GTE
    {0x221E, 0x9C}, // ∞ infinity
};
