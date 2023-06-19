//Converta para linguagem Assembly
// Inclua as bibliotecas necessárias
#include <LiquidCrystal.h>

// Pinos do sensor de proximidade e da luz
const int sensorPin = 2;
const int lightPin = 13;

// Objeto do tipo LiquidCrystal para controle do LCD (opcional)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // Inicialize o sensor de proximidade como entrada
  pinMode(sensorPin, INPUT);
  
  // Inicialize a luz como saída
  pinMode(lightPin, OUTPUT);
  
  // Inicialize o LCD (opcional)
  lcd.begin(16, 2);
  lcd.print("Sensor de Luz");
}

void loop()
{
  // Verifique o estado do sensor de proximidade
  int proximityState = digitalRead(sensorPin);
  
  if (proximityState == HIGH)
  {
    // Acenda a luz quando houver presença
    digitalWrite(lightPin, HIGH);
    
    // Exiba a mensagem no LCD (opcional)
    lcd.setCursor(0, 1);
    lcd.print("Presenca Detectada");
  }
  else
  {
    // Desligue a luz quando não houver presença
    digitalWrite(lightPin, LOW);
    
    // Limpe o LCD (opcional)
    lcd.setCursor(0, 1);
    lcd.print("                  ");
  }
}
