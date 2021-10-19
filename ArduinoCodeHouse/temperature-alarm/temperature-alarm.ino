const int LED[4] = {4,5,6,7};
const int POT = A1;
const int BUZZER = 8;
const int TEMP = A0;

const int min_temp = 50;
const int max_temp = 90;

float buz_trig;
float celcius;
float ledON;
int i;

void setup(){
  for(i=0;i<4;i++){
    pinMode(LED[i],OUTPUT);
  }
  pinMode(POT,INPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(TEMP,INPUT);

  Serial.begin(9600);
}

void loop(){

  //Reading temperature
  celcius = analogRead(TEMP);
  celcius = celcius *5/1024;        //voltage felt
  celcius = celcius - 0.5;          //Subtract the offset
  celcius = celcius * 100;          //Convert to degrees
  Serial.print("| Current temp=");Serial.print(celcius);


  //Igniting LED
  if(celcius<min_temp)ledON = 0;
  else if(celcius>=max_temp)ledON = 4;
  else ledON = 5*((celcius-min_temp)/(max_temp-min_temp));



  for(i=0;i<ledON;i++)digitalWrite(LED[i],HIGH);
  for(i=ledON;i<4;i++)digitalWrite(LED[i],LOW);
  Serial.print("| LED_ON=");Serial.print(ledON);

  //Reading POT
  buz_trig = map(analogRead(POT),0,1024,min_temp,max_temp);
  Serial.print("| Trigger_at=");Serial.print(buz_trig);

  //triggering buzzer
  Serial.print("| BUZZER=");
  if(celcius>=buz_trig){
    digitalWrite(BUZZER,HIGH);
    Serial.print("ON");
  }
  else {
    digitalWrite(BUZZER,LOW);
    Serial.print("OFF");
  }


  Serial.println();
  delay(500);
}
