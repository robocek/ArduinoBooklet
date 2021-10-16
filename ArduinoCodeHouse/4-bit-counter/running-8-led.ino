unsigned const short int array[] = {2,3,4,9,8,7,6,5,4,9,10,12};
unsigned const short int size = 12;
unsigned short int current = 0;

void setup(){

  //setup the pins
  for(current = 0; current < size; current++){
    pinMode(array[current],OUTPUT);
    digitalWrite(array[current],LOW);
  }
}
void loop(){
  if(current == size){
    for(current = 0; current < size; current++)
    	 	digitalWrite(array[current],HIGH);

    delay(1000);

    for(current = 0; current < size; current++)
    	 	digitalWrite(array[current],LOW);

    current=0;
    delay(500);
  }
  digitalWrite(array[current],HIGH);
  delay(500);
  digitalWrite(array[current],LOW);
  current++;
}
