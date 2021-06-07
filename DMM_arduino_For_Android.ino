
int value, i;

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  
  value = 0;
  
   for (i=0;i<10;i++)
    value += analogRead(A3);
    
    value /= 10;
    
    //delay(5);
 
    //Serial.flush();
    Serial.write( "Start");
    Serial.flush();
  
    Serial.write( (value >> 8) & 0x03);
    Serial.write( value & 0xff);
  
}

