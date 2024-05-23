int x = 0;
int y = x%2;
void setup()
{
  pinMode(5, OUTPUT);
}
void loop(){
  if (y == 0) {
  digitalWrite(5, HIGH);
}
else{
  digitalWrite(5, LOW);
}

}
