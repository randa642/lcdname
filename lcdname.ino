#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte alef[8] = {
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
};

byte yai[8] = {
  0b00000,
  0b00000,
  0b00010,
  0b00010,
  0b11110,
  0b00000,
  0b01010,
  0b00000,
};

byte mim[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b01010,
  0b11110,
  0b00000,
  0b00000,
  0b00000,
};

byte non[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b10001,
  0b10001,
  0b11111,
  0b00000,
  0b00000,
};

byte zin[8] = {
  0b00000,
  0b00001,
  0b00000,
  0b00001,
  0b00001,
  0b00010,
  0b00100,
  0b01000,
};

void setup() {
  lcd.createChar(0, alef);
  lcd.createChar(1, yai);
  lcd.createChar(2, mim);
  lcd.createChar(3, non);
  lcd.createChar(4, zin);
  lcd.begin(16, 2);
  lcd.write(byte(3));
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(4));
  lcd.write(byte(2));
}

void loop() {
}
