int sensorPin = A0;
int sensorValue = 0;
int fadeValue = 0;
int DownValue = 4;
int scaleValue = 4;
int newArray[6];  
int downArray[3];
void setup()
{
Serial.begin(9600);
}
void loop()
{
sensorValue = analogValue(sensorPin)
fadeValue = sensorValue/scaleValue;
downArray [2] = downArray [1];
downArray [1] = downArray [0];
newArray [5] = newArray [4];
newArray [4] = newArray [3];
newArray [3] = newArray [2];
newArray [2] = newArray [1];
newArray [1] = newArray [0];
newArray [0] = fadeValue;
if (((newArray [0] > newArray [2]) && ((new array[4]))||((newArray [1] > newArray [3] && (newArray[3] > newArray[5])))
{
   downArray [0] = 1;
   serial.println(“down”);
}
if (((newArray [0] > newArray [2]) && ((new array[4]))||((newArray [1] > newArray [3] && (newArray[3] > newArray[5])))
{
    downArray [0] = 1;
    serial.println(“up”);
}
if (((newArray [0] > newArray [2]) && ((new array[4]))||((newArray [1] > newArray [3] && (newArray[3] > newArray[5])))
{ 
   downArray [0] = 0;
   serial.println(“hold”);
}
else
{ 
    Serial.println(“.”);
}
/* else 
{
    If ((downArray [0]== 1)|| (downArray [2] ==1))
  {
       Serial.println(“down2”);
  }
  downArray [0] = 2;
   serial.println(“hold”);
}*/
delay(70);
}
