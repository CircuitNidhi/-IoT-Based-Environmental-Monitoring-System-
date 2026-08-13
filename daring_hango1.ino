// C++ code
//
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int tempPin = A0;
int lightPin = A1;
int gasPin = A2;

int greenLED = 4;
int redLED = 5;
int buzzer = 6;

void setup() {
  Serial.begin(9600);

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.begin(16, 2);
  lcd.clear();

  lcd.print("Environmental");
  lcd.setCursor(0, 1);
  lcd.print("Monitoring");
  delay(2000);
  lcd.clear();
}

void loop() {

  // Temperature
  int tempRaw = analogRead(tempPin);
  float voltage = tempRaw * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100.0;

  // Light
  int lightValue = analogRead(lightPin);

  // Gas
  int gasValue = analogRead(gasPin);

  // Alert condition
  if (temperature > 30 || gasValue > 600) {

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("WARNING!");
    lcd.setCursor(0, 1);
    lcd.print("Check Environment");

  } else {

    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(temperature, 1);
    lcd.print("C G:");
    lcd.print(gasValue);

    lcd.setCursor(0, 1);
    lcd.print("Light:");
    lcd.print(lightValue);
  }

  // Serial Monitor
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" C | Gas: ");
  Serial.print(gasValue);
  Serial.print(" | Light: ");
  Serial.println(lightValue);

  delay(1000);
}