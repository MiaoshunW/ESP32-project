/**********************************************************************
  Filename    : breath led
  Description : Using PWM Control led light breath one by one
  Auther      : Miaoshun WU
  Modification: 2020/11/27
**********************************************************************/
#define PIN_LED 0 //define the led pin
#define CHN 0 //define the pwm channel 0 
#define PIN_LED1 15 //define the led pi
#define PIN_LED2 2 //define the led pin
#define FRQ 1000 //define the pwm frequency
#define PWM_BIT 8 //define the pwm precision

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PIN_LED as an output.
      ledcSetup(CHN, FRQ, PWM_BIT); //setup pwm channell
      ledcAttachPin(PIN_LED, CHN); //attach the led pin to pwm channel0
      ledcAttachPin(PIN_LED1, CHN); //attach the led pin to pwm channel0
      ledcAttachPin(PIN_LED2, CHN); //attach the led pin to pwm channel0
      
}
// the loop function runs over and over again forever
void loop()
{
      for (int i = 0; i < 255; i++)
        { //make light fade in
          ledcWrite(CHN, i);
          
          delay(10);
            }
      for (int i = 255; i > -1; i--)
        { //make light fade out
            ledcWrite(CHN, i);
            delay(10);
          }
}
