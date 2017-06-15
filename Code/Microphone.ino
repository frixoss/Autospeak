// Arduino pin numbers
const int DO_pin = 6;
const int AO_pin = 2;
int sound;



 
void setup() {
  pinMode(DO_pin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
 
  Serial.begin(9600);
}
 
void loop() {

    if (sound > 500) {
    digitalWrite(LED_BUILTIN, LOW);
    } 

    if (sound < 500) {
    digitalWrite(LED_BUILTIN, LOW);
  }
  /*  if (sound > 40) {
    digitalWrite(led3, HIGH);
  }
    if (sound < 40) {
    digitalWrite(led3, LOW);
  }
    if (sound > 45) {
    digitalWrite(led4, HIGH);
  }
    if (sound < 45) {
    digitalWrite(led4, LOW);
  }
    if (sound > 50) {
    digitalWrite(led5, HIGH);
  }
    if (sound < 50) {
    digitalWrite(led5, LOW);
  }*/

  sound = analogRead(AO_pin);
  Serial.print(digitalRead(DO_pin));
  Serial.print("-");
  Serial.println(analogRead(AO_pin));

 
  
}
