/*

        
            Autor: Diana Avanesian (student number: 200421248)
            Lab 2 RGB Blink (level 3)
            Title: The program flashes my personal light show to the music " Seven Nation Army " by The White Stripes.
            Date: 08/09/2019 
    
*/

int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.
int waitTime = 30; //Sets the amount of time to wait between color changes.
int waitTime0 = 4450; //Sets the amount of time to wait between color changes.
int waitTime01 = 4300;
int waitTime02 = 4000;
int waitTime02half=2000;


void setup() { //The Setup function runs once.
    pinMode(RGBRedPin, OUTPUT);    //Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);   //Setup blue RGB LED pin as an output pin.
}

void loop() { //The loop function runs forever.

    // Display Red for 4 sec
    digitalWrite(RGBRedPin, HIGH); //Turn on RED
    delay(waitTime0);               //Wait for 4 seconds
    digitalWrite(RGBRedPin, LOW);  //Turn off Red
    
    // Display Blue for another 4.5 sec
    digitalWrite(RGBBluePin, HIGH); //Turn on RED
    delay(waitTime01);               //Wait for 4.5 seconds
    digitalWrite(RGBBluePin, LOW);  //Turn off Red

    // Alternate between blue and red 
    for (int i = 0; i <= 45; i++) {
        //Display Blue
        digitalWrite(RGBBluePin, HIGH); //Turn on RED
        delay(waitTime);                //Wait
        digitalWrite(RGBBluePin, LOW);  //Turn off RED
        
        //Display Red 
        digitalWrite(RGBRedPin, HIGH); //Turn on RED
        delay(waitTime);               //Wait
        digitalWrite(RGBRedPin, LOW);  //Turn off RED
    }
        
    ///Display  Magenta  (Red + Blue)
    digitalWrite(RGBRedPin, HIGH); //Turn on RED
    digitalWrite(RGBBluePin, HIGH); //Turn on RED
    delay(waitTime02half);              //Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);  //Turn off Red
    digitalWrite(RGBBluePin, LOW); //Turn on RED

    // Alternate between magenta and white

  for (int i = 0; i <= 33; i++) {
        ///Display  Magenta
        digitalWrite(RGBRedPin, HIGH); //Turn on RED
        digitalWrite(RGBBluePin, HIGH); //Turn on RED
        delay(waitTime);              //Wait for 4 seconds
        digitalWrite(RGBRedPin, LOW);  //Turn off Red
        digitalWrite(RGBBluePin, LOW); //Turn on RED
        
        //Display White  (Red + Blue + Green)
        digitalWrite(RGBRedPin, HIGH); //Turn on RED
        digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
        digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
        delay(waitTime);               //Wait for 2 seconds
        digitalWrite(RGBRedPin, LOW);  //Turn off RED
        digitalWrite(RGBBluePin, LOW); //Turn off BLUE
        digitalWrite(RGBGreenPin, LOW); //Turn off GREEN

     }

    
 
 
    //Display Green
     digitalWrite(RGBGreenPin, HIGH); //Turn on RED
     delay(waitTime0);               //Wait 
     digitalWrite(RGBGreenPin, LOW);  //Turn off Red

    //Display  Cyan  (Blue + Green) 
    digitalWrite(RGBRedPin, HIGH); //Turn on RED
    digitalWrite(RGBGreenPin, HIGH); //Turn on RED
    delay(waitTime01);               //Wait
    digitalWrite(RGBRedPin, LOW);  //Turn off Red
    digitalWrite(RGBGreenPin, LOW); //Turn of RED

    //Alternate between green and cyan
    for (int i = 0; i <= 45; i++) {
      //Display Green
      digitalWrite(RGBGreenPin, HIGH); //Turn on RED
      delay(waitTime);               //Wait 
      digitalWrite(RGBGreenPin, LOW);  //Turn off Red

      //Display  Cyan  (Blue + Green) 
      digitalWrite(RGBRedPin, HIGH); //Turn on RED
      digitalWrite(RGBGreenPin, HIGH); //Turn on RED
      delay(waitTime);               //Wait
      digitalWrite(RGBRedPin, LOW);  //Turn off Red
      digitalWrite(RGBGreenPin, LOW); //Turn of RED
     }

      ///Display  Magenta  (Red + Blue)
      digitalWrite(RGBRedPin, HIGH); //Turn on RED
      digitalWrite(RGBBluePin, HIGH); //Turn on RED
      delay(waitTime02half);              //Wait for 2 seconds
      digitalWrite(RGBRedPin, LOW);  //Turn off Red
      digitalWrite(RGBBluePin, LOW); //Turn on RED


       //Alternate between green and cyan
       for (int i = 0; i <= 33; i++) {
        ///Display  Magenta
        digitalWrite(RGBRedPin, HIGH); //Turn on RED
        digitalWrite(RGBBluePin, HIGH); //Turn on RED
        delay(waitTime);              //Wait for 4 seconds
        digitalWrite(RGBRedPin, LOW);  //Turn off Red
        digitalWrite(RGBBluePin, LOW); //Turn on RED
        
        //Display White  (Red + Blue + Green)
        digitalWrite(RGBRedPin, HIGH); //Turn on RED
        digitalWrite(RGBBluePin, HIGH); //Turn on BLUE
        digitalWrite(RGBGreenPin, HIGH); //Turn on GREEN
        delay(waitTime);               //Wait for 2 seconds
        digitalWrite(RGBRedPin, LOW);  //Turn off RED
        digitalWrite(RGBBluePin, LOW); //Turn off BLUE
        digitalWrite(RGBGreenPin, LOW); //Turn off GREEN

     }


     
   }
