/*
 * SolidStateRelayTest
 * Test for Solid State Relay
 */

// Variables
int i = 2;
 
void setup() {
  // OUTPUT Arrow and Bow Setup
  pinMode(2,OUTPUT);  // Arrow1(Draw a bow)
  pinMode(3,OUTPUT);  // Arrow2(Normal bow)
  pinMode(4,OUTPUT);  // Arrow3
  pinMode(5,OUTPUT);  // Arrow4
  pinMode(6,OUTPUT);  // Arrow5
  pinMode(7,OUTPUT);  // Arrow6
  pinMode(8,OUTPUT);  // Arrow7(shot heart)

  // Flag Check(NOT USE)
  pinMode(13,OUTPUT);
}

void loop() {
  // HIGH OUTPUT SELECT NUM'i' LED
  digitalWrite(i,HIGH);
  // delay 750mS
  delay(750);
  // LOW OUTPUT SELECT NUM'i' LED
  // increment after call digitalWrite
  digitalWrite(i++,LOW);

  if(i == 9)
  i = 2;
}
