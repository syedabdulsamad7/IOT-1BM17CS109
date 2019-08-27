int led=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
    char data=Serial.read();
    if(data=='H')
    {digitalWrite(led, HIGH);
    }
    delay(1000);
    if(data=='L')
    {digitalWrite(led,LOW);
    }
    delay(1000);
  }
  // put your main code here, to run repeatedly:

}
