/*
 * DataTransmitterTest.ino
 * Transmitting data to other Devises
 */

const int Speed = 9600;

void setup() {
  Serial.begin(Speed);
}

void loop() {
  if(Serial.available() > 0){
    int get_data = Serial.read();
  Serial.println(get_data,DEC);
  }
}
