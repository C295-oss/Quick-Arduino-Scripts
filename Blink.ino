uint16_t pin = 13;
uint32_t blink_count = 5;

uint32_t dot_delay = 100;
uint32_t dash_delay = 500;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); // Red 
  pinMode(12,OUTPUT); // Blue

  pinMode(11, INPUT);

}

void blink() 
{
  for (uint32_t i = 0; i < blink_count; i++)
  {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(100);
  }
  // blink_count += 5;

  if (pin == 13)
    pin = 12;
  else
    pin = 13;
}

void loop() 
{
  // put your main code here, to run repeatedly:
  blink();
}
