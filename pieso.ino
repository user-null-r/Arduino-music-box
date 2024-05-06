int tonePin = 4;
#define PIN_PHOTO_SENSOR A0
void setup() {

}

void midi() {

    Serial.begin(9600);








 }
 
void loop(){

    int val = analogRead(PIN_PHOTO_SENSOR);
 Serial.println(val);
  if (val > 400) {
    //digitalWrite(midi,0);
 } else {
   midi();
}

}