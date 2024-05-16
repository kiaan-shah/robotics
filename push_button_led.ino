int data = 0;
void setup ()
{
  pinMode(5, INPUT);
  pinMode(11, OUTPUT);
}

void loop()  {

    data = digitalRead(5);

    if(data == 1)  {
      digitalWrite(11, HIGH);
    } else {
      digitalWrite(11, LOW);
    }
}
