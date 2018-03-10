void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Buenos Dias Estrellitas C:");
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char letra = Serial.read()
    Serial.print(letra);
    if (letra == "H"){
      digitalWrite(13,1);
    }
    else if (letra == "L"){
      digitalWrite(13,0);  
    }
    }
}
