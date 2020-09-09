
int sensorPin = 2;
int counter = 0;

void setup() 
{
 // setup serial - diagnostics - port
 Serial.begin(9600);
 pinMode(sensorPin, INPUT);
}

void loop() 
{
 counter++;
 int sensorValue = digitalRead(sensorPin);
 Serial.print(counter);
 Serial.print(" ");
 Serial.println(sensorValue);
 delay(1000);
}
