/*
Based on the sample code "Blink".
Inspired by the wonderful cult TV series Fringe (Seasons 1 and 2).
Green green green red sequence.
Attach LED lights as directed by their board pin numbers,

WILL TOU GET HYPNOTISED AND EXPERIENCE A TIME GAP?
WILL YOUR AUDIENCE OR FRIENDS BE? FIND OUT!

@author Salocin.TEN (www.salocinten.net)
@version 0.01
 */
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(8, OUTPUT);  //Init pin 8 for the GREEN light / LED.
  pinMode(13, OUTPUT); //Init pin 13 for the RED light / LED!
  //Note that some boards have an ORANGE LED alreaady built in, you can use that linked to pin 13. :)
}

// the loop routine runs over and over again forever:
void loop() {
  //Start by using the RED / ORANGE light.
  int i;
  for(i=0;i<=2;i++) { //Loop 3 times! LOL! :D
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // on for 100 ms
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(100);               // off for 100 ms
  }
  //Now turn on the orange / red light
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);               // on for two seconds
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // off for a second  
  //Go round..
}
