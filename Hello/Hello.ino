#include <M5StickCPlus.h>

void setup()
{
	M5.begin();
    M5.Axp.ScreenBreath(50);
    M5.Lcd.fillScreen(WHITE);
    M5.Lcd.setTextSize(2);
    M5.Lcd.setTextColor(PURPLE);
    M5.Lcd.setHighlightColor(WHITE);
    M5.Lcd.setRotation(3);
    M5.Lcd.setCursor(30,40);
    M5.Lcd.println("Preston Chapman");
}

void loop()
{
	
}
