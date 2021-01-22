const int LED = 4;
const int button = 3;

void setup() {
  // put your setup code here, to run once:

pinMode(LED,OUTPUT);
pinMode(button,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:


//if(button==digitalRead(HIGH)){
digitalWrite(LED,HIGH);
//}

}
