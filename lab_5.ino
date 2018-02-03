// Jared Prather, Ethan Sayles, Augdan Wilson
//Lab 5(Analog)
//Experiment with a potentiometer
int analogvalue = 0;   //the value read from the potentiometer
float pinvolt;         // the number of volts passing through the potentiometer
void setup() {

//Step 5
Serial.begin(9600);      //Set up the serial monitor
}

void loop() {
//Step 4 
analogvalue = analogRead(0);         //Get the value from the potentiometer
pinvolt = (analogvalue * 5.0)/1024; // Convert this value to olts

//Step 5
Serial.print(analogvalue);        //Print the value read from the potentiometer
Serial.println(" analog value");  // Label what the value is, so that it has meaning 
delay(500);                       // Delay, so the monitor is slow enough to be read
Serial.print(pinvolt);            // Print the voltage flowing through the potentiometer
Serial.println(" Volts");         // Labe the units, so it has meaning
delay(500);                       // Delay, so the monitor is slow enough to be read

//Step 6
if (pinvolt > 2.5){          // If the voltage is above 2.5;
  analogWrite(13, 255);      // Turn the LED on;
}
else {                       // Otherwise;
  analogWrite(13,0);         // Turn the LED off.
  
}

//Step 7
analogWrite(10,analogvalue/4);// Set the voltage on pin 10 equal to the voltage flowing through the potentiometer
}
