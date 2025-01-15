// Init for calculations
uint16_t curr_num = 1;
uint16_t remainder = 0;

// Pins for each LED
uint8_t pin_red =   13;
uint8_t pin_green = 12;
uint8_t pin_blue =  11;
uint8_t pin_white = 10;


void setup()
{
  pinMode(pin_red, OUTPUT);
  pinMode(pin_green, OUTPUT);
  pinMode(pin_blue, OUTPUT);
  pinMode(pin_white, OUTPUT);
}

void count() 
{
  // Reset all values
  remainder = curr_num;

  digitalWrite(pin_red, LOW);
  digitalWrite(pin_green, LOW);
  digitalWrite(pin_blue, LOW);
  digitalWrite(pin_white, LOW);

  // Calculate which LEDs light up
  for (int i = 0; i < 4; i++)
  {
    if (remainder % 2 == 1)
    {
      switch(i) {
        case 0:
          digitalWrite(pin_red, HIGH);
          break;
        case 1:
          digitalWrite(pin_green, HIGH);
          break;
        case 2:
          digitalWrite(pin_blue, HIGH);
          break;
        case 3:
          digitalWrite(pin_white, HIGH);
          break;
        default:
          break;
      }
    }
    remainder = remainder / 2;
  }
}

void loop()
{
  count();
  delay(1000);

  curr_num += 1;

  if (curr_num > 15)
    curr_num = 1;
}
