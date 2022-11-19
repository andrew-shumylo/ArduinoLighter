//Project of road litghter for cars



int green = 8;
int yellow = 9;
int red = 10;

void setup() 
{
  pinMode (green, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (red, OUTPUT);
}

void loop() 
{
  changeLights();
}

void changeLights()
{

  digitalWrite (red, HIGH);
  delay (4000);
  digitalWrite (yellow, HIGH);
  delay (2000);
  digitalWrite (red, LOW);
  digitalWrite (yellow, LOW);
  digitalWrite (green, HIGH);
  delay (4000);
  digitalWrite (green, LOW);
  for (int i=0; i<4; i++)
  {
    digitalWrite (green, HIGH);
    delay (500);
    digitalWrite (green, LOW);
    delay (500);
  }
  digitalWrite (yellow, HIGH);
  delay (2000);
  digitalWrite (yellow, LOW);
}
