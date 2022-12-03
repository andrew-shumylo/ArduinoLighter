//Project of road litghter for cars

//Output Pin-number
int green = 8;
int yellow = 9;
int red = 10;

void setup() 
{
  pinMode (green, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (red, OUTPUT);
}

//Loop for the metod to execute on the board
void loop() 
{
  changeLights();
}

//Basic method for lighter
void changeLights()
{

//Red light ON
  digitalWrite (red, HIGH);
  delay (4000);

//Warning signal before change the light
  digitalWrite (yellow, HIGH);
  delay (2000);
  digitalWrite (red, LOW);
  digitalWrite (yellow, LOW);

//Green light ON
  digitalWrite (green, HIGH);
  delay (4000);
  digitalWrite (green, LOW);

  //Loop for blink GREEN light 5 times
  for (int i=0; i<4; i++)
  {
    digitalWrite (green, HIGH);
    delay (500);
    digitalWrite (green, LOW);
    delay (500);
  }

//Warning before RED light
  digitalWrite (yellow, HIGH);
  delay (2000);
  digitalWrite (yellow, LOW);
}
