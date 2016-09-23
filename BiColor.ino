// test script to run bicolor LED
int i;

void setup()
{
  Serial.begin(115200);
  
  pinMode (A2, OUTPUT);
  pinMode(A1,OUTPUT);
  i = 0;
}

void TurnOnLED (int first, int second) {
  analogWrite (A2, first);
  analogWrite (A1, second);
  delay(1000);
}

void TurnOnYellow () {
  int i = 0;
  
  for (i=0; i < 80; i++)
  {
  analogWrite (A2, 0);
  analogWrite (A1, 255);
  delay(10);
  analogWrite (A2, 255);
  analogWrite (A1, 0);
  delay(10);
  }
}

void loop(){
  //Serial.println(i);
  // red = A2 < 128  A1 > 128
  // flat side toward A1
  //analogWrite (A2, i);
  //analogWrite (A1, 255 - i);
  //delay(100);
  //i++;
  //if (i > 255) i = 0;
  
  TurnOnLED (0,255);   // red
  //TurnOnLED (64, 192);
  //TurnOnLED (128,128);  // off
  //TurnOnLED (192,64);   // green
  //TurnOnLED (29,131);   // still red
  TurnOnYellow();
}


