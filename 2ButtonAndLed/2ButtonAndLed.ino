/**********************************************************************
  Filename    : ButtonAndLed
  Description : Control led by button.
  Auther      : Miaoshun WU
  Modification: 2020/11/27
**********************************************************************/
#define PIN_LED    2
#define PIN_BUTTON 13  //this pin can not set pin12 or pin15  influence the serial bootloader mode
// the setup function runs once when you press reset or power the board

void setup() {
  // initialize digital pin PIN_LED as an output.
   pinMode(PIN_LED,OUTPUT);
   pinMode(PIN_BUTTON,INPUT);
}
// the loop function runs over and over again forever
void loop() {
  if (digitalRead(PIN_BUTTON)==LOW) //when pressed pin13 connect to GND
    {
      delay(40);
      if (digitalRead(PIN_BUTTON)==LOW)
      {
        reverseLED(PIN_LED);
        }
     while( digitalRead(PIN_BUTTON)==LOW);
     delay(30);
     while( digitalRead(PIN_BUTTON)==LOW);
      }
}
void reverseLED(int pin){
  
  digitalWrite(pin,!digitalRead(pin));
  }
