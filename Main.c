#include <Wire.h>               // Pour l'I2C
#include <SPI.h>                // Pour le SPI
#include <Adafruit_Sensor.h>    // Pour faciliter les capteurs
//#include les biblioteques des capteur (pitié du adafruit)


void setup() {
  Wire.begin();
  initCapteur1(); // Temperature et humiditée 
  initCapteur2(); // Niveau de battrie 
  initCapteur3(); // Enseoleillement
}

void loop() {
  lectureTemperature();
  lectureLumiere();
  delay(1000);
}

// Fonctions à remplir plus tard
void lectureTemperature() {
  // Ici j'ajouterai le code spécifique quand j'aurai la référence
}


dqzdq