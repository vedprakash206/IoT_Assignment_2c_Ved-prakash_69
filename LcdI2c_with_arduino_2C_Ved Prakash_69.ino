#include<Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);
void setup(){
  lcd_1.begin(16,2);
}
void loop(){
  lcd_1.setCursor(0,0);
  lcd_1.print("Hello World");
  lcd_1.setCursor(0,1);
  lcd_1.print("GLA UNIVERSITY BCA 2nd YEAR 2025-26");
  lcd_1.setBacklight(0);
  delay(500);
  lcd_1.setBacklight(1);
  delay(500);
   for(int i=0;i<16;i++){
     lcd_1.scrollDisplayLeft();
    delay(300);
  
  }
  
}
  
