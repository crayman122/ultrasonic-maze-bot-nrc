//made by red in 2017
void setup(){
  //start serial
  Serial.begin(9600);
  //print lines for future people using this robot
  Serial.println("Maze bot by Red");
  Serial.println("");
  Serial.println("For the source code and documentation, please visit");
  Serial.println("");
  Serial.println("http://redthedragon.tk/portfolio.html");
  Serial.println("");
  //constants
  const int echoPin1 = 9;
  const int triggerPin1 = 10;
  const int echoPin2 = 11;
  const int triggerPin2 = 12;
  const int echoPin3 = 13;
  const int triggerPin3 = 14;
  const int motorLF = 15;
  const int motorLB = 16;
  const int motorRF = 17;
  const int motorRB = 18;
  const int ledR = 19;
  const int ledG = 20;
  const int ledB = 21;
  //pinModes
  pinMode(triggerPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(triggerPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(triggerPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(motorLF, OUTPUT);
  pinMode(motorLB, OUTPUT);
  pinMode(motorRF, OUTPUT);
  pinMode(motorRB, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  //led test
  digitalWrite(ledR, HIGH);
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledB, LOW);
}
void loop(){
  //do loop stuff
  
}
int getDistance(int trigPin, int echoPin){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5); //Change to 10 if not working correctly
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  
  return microsecondsToCentimeters(duration);
}

long microsecondsToCentimeters(long microseconds){
  return microseconds / 29 / 2;
}

