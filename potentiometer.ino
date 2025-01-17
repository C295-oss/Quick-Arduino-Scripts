int analogPin = A2;
int readVal;
float V2;

int delay_amt = 500;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{

  readVal = analogRead(analogPin);
  V2 = (5./1023.)*readVal;

  Serial.println(V2);
  delay(delay_amt);
}
