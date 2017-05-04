int led       = 7;
int numero = -5;

void setup() {
 Serial.begin(9600);
 pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    numero = Serial.read();
  }
    if (numero > 0 ){
      if (numero == '1'){
          digitalWrite(led, HIGH);
          delay(500);       
        }else if(numero == '0'){
          digitalWrite(led, LOW);
          delay(500);
          }
          numero = -5;
    }
}
