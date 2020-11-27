/**********************************************************************
  Filename    : ButtonAndLed
  Description : Control led by button.
  Auther      : Miaoshun WU
  Modification: 2020/11/27
**********************************************************************/
#define LedPIN 2
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PIN_LED as an output.

      pinMode(LedPIN,OUTPUT);

      
}
// the loop function runs over and over again forever
void loop() {

    digitalWrite(LedPIN,HIGH);
    delay(1000);
    digitalWrite(LedPIN,LOW);
    delay(1000);
    
}
