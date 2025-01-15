// For Analog, only some of the PINS will work.
// Any pin with a '~' in front.
// Ex: ~11

uint8_t analogPIN = 9;
uint8_t brightness = 5;

void setup() 
 {
  pinMode(analogPIN, OUTPUT);
}

void loop() 
{
  if (brightness > 100) 
  {
    brightness = 5;
  }

  analogWrite(analogPIN, brightness);
  delay(500);

  brightness +=5;
}
