int led=9;
int btn=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(btn);
  if(val==HIGH)
  {
    digitalWrite(led,HIGH);
    Serial.println(val);
  }
  if(val==LOW)
  {
    digitalWrite(led,LOW);
    Serial.println(val);
  }
 
  // put your main code here, to run repeatedly:

}
