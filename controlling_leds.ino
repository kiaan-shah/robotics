int a = 0;

void setup()
{
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  a = digitalRead(6);
  Serial.println(a);
  delay(500);
  }
