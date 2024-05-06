const int pinPhoto = A0;
#include <SD.h>
#include <SPI.h>
#define SD_ChipSelectPin 4
#include <TMRpcm.h>
TMRpcm m;

void setup() {
  Serial. begin(9600);
  pinMode ( pinPhoto, INPUT );
  m.speakerPin = 9;
  m.setVolume(5);
  SD.begin(SD_ChipSelectPin);
}

void loop(){

    int val = analogRead(pinPhoto);
 Serial.println(val);
  if (val > 900) {
} else {
  m.play("am.wav"); //Название аудиотрека
  delay(300000);
}
  delay(200);

}