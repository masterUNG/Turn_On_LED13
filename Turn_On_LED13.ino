void setup(){

  pinMode(13, OUTPUT);  //Pin13 output

}  //initiallize digital pin output

void loop(){

  digitalWrite(13, HIGH);  //Set up LED ON
  delay(1000);             //Wait One Second
  digitalWrite(13, LOW);   //Set up LED OFF
  delay(1000);             //Wait One Second

}  // loop
