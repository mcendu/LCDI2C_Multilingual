/*
  ** DemoJapanese **
  Print a Japanese Katakana text to LCD2004
  (Japanese ROM type) via I2C (PCF8574).
  Author: Loc P. Le <phuocloc@gmail.com>

  ** Class **
  - LCDI2C_Katakana: for printing Japanese Katakana to LCDs with Japanese ROM

  ** Help **
  https://github.com/locple/LCDI2C_Multilingual
*/

#include <LCDI2C_Multilingual_MCD.h>

LCDI2C_Katakana lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.println("アメリカン スポーツ: カフェ、ビデオ "
              "ゲーム、Ｔシャツ、ジーンズ、ビール、ホットドッグ。",
              3); // wait for 3 seconds before next screen
  lcd.println("クラウドオフィス、データセンター、エンタープライズ「１２９0円 "
              "AI-ＨＰＣ」、データサイエンス。",
              3); // wait for 3 seconds before next screen
}

void loop() {}