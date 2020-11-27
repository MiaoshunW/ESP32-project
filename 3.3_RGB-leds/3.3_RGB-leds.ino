/**********************************************************************
  Filename    : meteor leds
  Description : Using PWM Control RGB led light 
  Auther      : Miaoshun WU
  Modification: 2020/11/27
**********************************************************************/
const byte ledpin[]={15,2,4};   //define the RGBled pin
const byte CHN[]={0,1,2};       //define the pwm channel 0-2
int red,green,blue;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PIN_LED as an output.
    for (int i = 0; i < 3; i++) 
    { //setup the pwm channels
      ledcSetup(CHN[i],1000,8);
      ledcAttachPin(ledpin[i], CHN[i]);
    }
      
}
// the loop function runs over and over again forever
void loop()
{ 

        ledcWrite(ledpin[0],255);
        ledcWrite(ledpin[1],255);
        ledcWrite(ledpin[2],255);
  
}
