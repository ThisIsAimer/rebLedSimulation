// C++ code
//

//Button constants
const int BUTTON_RED = 13;
const int BUTTON_BLUE = 12;
const int BUTTON_GREEN = 11;

//Led constants
const int LED_RED = 5;
const int LED_BLUE = 4;
const int LED_GREEN = 3;


void setup()
{
  //initialising variables
  pinMode(BUTTON_RED, INPUT);
  pinMode(BUTTON_BLUE, INPUT);
  pinMode(BUTTON_GREEN, INPUT);
  
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop()
{
  //taking inputs
  int redPress = digitalRead(BUTTON_RED);
  int bluePress = digitalRead(BUTTON_BLUE );
  int greenpress = digitalRead(BUTTON_GREEN);
  
  
  if(!redPress){
  	digitalWrite(LED_RED,HIGH);
  }
  
  else digitalWrite(LED_RED,LOW);
  
  
  if(!bluePress){
  	digitalWrite(LED_BLUE,HIGH);
  }
  
  else digitalWrite(LED_BLUE,LOW);
  
  if(!greenpress){
  	digitalWrite(LED_GREEN,HIGH);
  }
  
  else digitalWrite(LED_GREEN,LOW);
  
  
  delay(300);
  
}