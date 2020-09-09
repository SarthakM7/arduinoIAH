
void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT)
}

void loop() 
{
  static int delayPeriod=100;
  static int countDir=1;
  
  digitalWrite(13,HIGH);
  delay(delayPeriod);
  digitalWrite(13,LOW);
  delay(delayPeriod); 
  
  countDir=checkDirChange(delayPeriod,countDir);   

  delayPeriod+=100*countDir;
  Serial.print("time:");
  Serial.println(delayPeriod);
}  
int checkDirChange(int delayPeriod, int countDir)
{
  if((delayPeriod==1000)||delayPeriod==0))
  {
    countDir = -countDir;
    if(countDir < 0)
    Serial.println("going down");
    else
    Serial.println("going up  ");
  }
  return countDir;
}
