/**********************************************************************
  Filename    : meteor leds
  Description : Using PWM Control led light like meteors gradually light up and out from left to right
  Auther      : Miaoshun WU
  Modification: 2020/11/27
**********************************************************************/
const byte ledpin[]={15,2,0,4,5,18,19,21,22,23};   //define the led pin
const byte CHN[]={0,1,2,3,4,5,6,7,8,9};            //define the pwm channel 0-9
const int FRQ[]={0,   0,  0,  0,  0, 0, 0, 0,0,0,
                 1023,512,256,128,64,32,16,8,4,2,
                 0,   0,  0,  0,  0, 0, 0, 0,0,0}; //define the pwm frequency
int ledCounts;                               
int delayTimes=50;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PIN_LED as an output.
    ledCounts=sizeof(ledpin);  //get the led counts
    for (int i = 0; i < ledCounts; i++) 
    { //setup the pwm channels
      ledcSetup(CHN[i], 1000, 10);
      ledcAttachPin(ledpin[i], CHN[i]);
    }
      
}
// the loop function runs over and over again forever
void loop()
{
  for (int i = 0; i < 20; i++) {        //flowing one side to other side
    for (int j = 0; j < ledCounts; j++) {
      ledcWrite(CHN[j], FRQ[i + j]);
    }
    delay(delayTimes);
  }
  for (int i = 0; i < 20; i++) {      //flowing one side to other side
    for (int j = ledCounts - 1; j > -1; j--) {
      ledcWrite(CHN[j], FRQ[i + (ledCounts - 1 - j)]);
    }
    delay(delayTimes);
  }
}
