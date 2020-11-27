/**********************************************************************
  Filename    : flowing led
  Description : Control led light one by one
  Auther      : Miaoshun WU
  Modification: 2020/11/27
**********************************************************************/
byte ledpin[]={15,2,0,4,5,18,19,21,22,23};
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PIN_LED as an output.
      for (int i=0;i<10;i++)
      {
      pinMode(ledpin[i],OUTPUT);
      }
      
}
// the loop function runs over and over again forever
void loop() {
  for(int i=0;i<10;i++)
  {
    digitalWrite(ledpin[i],HIGH);
    delay(100);
    digitalWrite(ledpin[i],LOW);
  } 
    for(int i=9;i>0;i--)
  {
    digitalWrite(ledpin[i],HIGH);
    delay(100);
    digitalWrite(ledpin[i],LOW);
  } 
}
