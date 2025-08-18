// C++ code
//
int leds[]={6,5,4,3,2};
void setup()
{
  for(int i=0;i<5;i++){
  pinMode(leds[i], OUTPUT);
  }
}

void loop()
{
  
  for(int i=0;i<5;i++){
    digitalWrite(leds[i], HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(leds[i], LOW);
    delay(100); // Wait for 1000 millisecond(s)
  }
  for(int i=4;i>=0;i--){
    digitalWrite(leds[i], HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(leds[i], LOW);
    delay(100); // Wait for 1000 millisecond(s)
  }
}