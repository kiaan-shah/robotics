int a = 1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(a);
  Serial.print("Hello");
  a = a + 1;
  delay(5);
}
