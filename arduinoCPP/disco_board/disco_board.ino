int ky_digital = 2;
int ky_analog = A1;

int dNoise;
int aNoise;

void setup() {
  pinMode(ky_digital, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  dNoise = digitalRead(ky_digital);
  aNoise = analogRead(ky_analog);
  if(dNoise == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);  
  }
  Serial.println(aNoise);
  delay(1);                      
}
