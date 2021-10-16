unsigned const short int spin[]={12,11,10};
unsigned const short int size = 3;
unsigned short int current;

void setup()
{

  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);

  for(current = 0; current<size; current++)
  {
    pinMode(spin[current],OUTPUT);
    digitalWrite(spin[current],LOW);
  }
  current = 0;
  digitalWrite(spin[current],HIGH);

}

void loop()
{
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);

  digitalWrite(spin[current],LOW);
  current++;
  if(current == size)current = 0;
  digitalWrite(spin[current],HIGH);

  delay(500);
}
