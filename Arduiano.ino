String readstring; //declares a string called readstring
int tunes = 600; //declares that tunes is = 300 which is the duration of the note and a delay
int speakerPin = 9; //declaring a pin for the piezo 
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600); // initialize serial communications at 9600 bps
pinMode (speakerPin, OUTPUT); //tells the pin that it will output so that it can create sounds
Serial.println("the middle octave just input the note, and to input the high octave captilize the letters of the notes"); //instructions for each octave
}
void loop() {
  // put your main code here, to run repeatedly:
readstring = Serial.readString(); //declares that readstring is equal to the reading of the serial monitor
while (readstring.length()==0) //if the length of the string value is 0 then read the serial monitor
{
  readstring = Serial.readString();
}
for (int z= 0; z < readstring.length()+1; z++)//declare z = 0 and that continue the loop until z is greater than the length of the string value added by 1, and if the loop is finished increase z by 1 and run the loop again
{
  if (readstring[z] == 'c') //if the incoming data from the serial monitor has a text of c contiue, if not skip the loop
  {
    tone(speakerPin,262,tunes);  //play the piezo speaker, with a frequency of 262 and with a beat of tunes
    delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 
 if (readstring[z]== 'd')//if the incoming data from the serial monitor has a text of d contiue, if not skip the loop
 {
  tone(speakerPin,294,tunes); //play the piezo speaker with a frequency of 294 and with a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'e') //if the input from the serial monitor has a text of e then continue, if not skip the loop
 {
  tone(speakerPin,330,tunes); //play the speaker with a frequency of 330 and with a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'f') //if the input from the serial monitor has a text of f then continue, if not skip the loop
 {
  tone(speakerPin,349,tunes); //play the speaker with a frequency of 349 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'g') //if the input from the serial monitor has a text of g then continue, if not skip the loop
 {
  tone(speakerPin,392,tunes); //play the speaker with a frequency of 392 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'a') //if the input from the serial monitor has a text of a then continue, if not skip the loop

 {
  tone(speakerPin,440,tunes); //play the speaker with a frequency of 440 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'b') //if the input from the serial monitor has a text of b then continue, if not skip the loop
 {
  tone(speakerPin,494,tunes); //play the speaker with a frequency of 494 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z]== 'C') //if the input from the serial monitor has a text of C then continue, if not skip the loop
 {
  tone(speakerPin,523,tunes); //play the speaker with a frequency of 523 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'D') //if the input from the serial monitor has a text of D then continue, if not skip the loop
 {
  tone(speakerPin,587,tunes); //play the speaker with a frequency of 587 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'E') //if the input from the serial monitor has a text of E then continue, if not skip the loop
 {
  tone(speakerPin,659,tunes); //play the speaker with a frequency of 659 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'F') //if the input from the serial monitor has a text of F then continue, if not skip the loop
 {
  tone(speakerPin,698,tunes); //play the speaker with a frequency of 698 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z]== 'G') //if the input from the serial monitor has a text of G then continue, if not skip the loop
 {
  tone(speakerPin,784,tunes); //play the speaker with a frequency of 784 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z]== 'A') //if the input from the serial monitor has a text of A then continue, if not skip the loop
 {
  tone(speakerPin,880,tunes); //play the speaker with a frequency of 880 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
 if (readstring[z] == 'B') //if the input from the serial monitor has a text of B then continue, if not skip the loop
 {
  tone(speakerPin,988,tunes); //play the speaker with a frequency of 988 and a beat of tunes
  delay(tunes); //delay after the playing the tune by 3 milliseconds to give distiction to notes
 }
}
}
