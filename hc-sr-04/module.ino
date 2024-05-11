const int outPin; /* Trigger pin */
const int inPin; /* Echo pin */

float duration, distance;

void setup()
{
  Serial.begin(9600);

  pinMode(outPin,OUTPUT);
  pinMode(inPin,INPUT);
}

void loop()
{
  digitalWrite(outPin, LOW);
  delayMicroseconds(2);
  digitalWrite(outPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(outPin, LOW);

  duration = pulseIn(inPin, HIGH);
  distance = (duration*.0343)/2;

  Serial.println("Distance: " + distance);
}
