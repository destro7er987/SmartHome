void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(2, INPUT);
Serial.begin(9600);
}
void loop()
{
  if(digitalRead(2)==HIGH){
    Serial.println("alert");
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    tone(8,1000,500);
    delay(250);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    tone(8,750,500);
    delay(250);

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    tone(8,500,500);
    delay(250);
    
}
  else {
    Serial.println("normal");
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(250);
  }

}
