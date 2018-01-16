int b = 0;
void setup() {
    pinMode(8,OUTPUT);
    Serial.begin(9600);
}
 
void loop() {
    if(Serial.available() > 0) b = Serial.read() - 48;
    if(b == 1) digitalWrite(8,HIGH);
    if(b == 0) digitalWrite(8,LOW);
}
