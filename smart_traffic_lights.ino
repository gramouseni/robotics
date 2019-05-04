int red=11, green=9, yellow=10, red2=6, green2=5, yellow2=3;
int echoPin = 12; // Echo Pin
int trigPin = 13; // Trigger Pin
int maximumRange = 3;
int minimumRange = 0;
float duration, distance;
 
void setup () 
{
   pinMode (red, OUTPUT);
   pinMode (green, OUTPUT);
   pinMode (yellow, OUTPUT);
   pinMode (red2, OUTPUT);
   pinMode (green2, OUTPUT);
   pinMode (yellow2, OUTPUT);
   digitalWrite (green, LOW);
   digitalWrite (red, LOW);
   digitalWrite (yellow, LOW);
   digitalWrite (green2, LOW);
   digitalWrite (red2, LOW);
   digitalWrite (yellow2, LOW);
   pinMode (trigPin, OUTPUT);
   pinMode (echoPin, INPUT);
}
 
//Για την προσομοίωση ενός πραγματικού φαναριού οι χρόνοι αναμονής πρέπει να πολαπλασιαστούν με 10 (δηλαδή να προστεθεί ένα ακόμη 0 σε όλα τα delay()) 
void loop (){
 digitalWrite (green2,HIGH);
 digitalWrite (red,HIGH);
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = duration/58.138;
 if (distance <= maximumRange) {
   digitalWrite (yellow2,HIGH);
   digitalWrite (green2,LOW);
   delay(400);
   digitalWrite (yellow2,LOW);
   digitalWrite (red2,HIGH);
   digitalWrite (red,LOW);
   digitalWrite (green,HIGH);
   delay(5600);
   digitalWrite (yellow,HIGH);
   digitalWrite (green,LOW);
   delay(400);
   digitalWrite (red,HIGH);
   digitalWrite (yellow,LOW);
   digitalWrite (green2,HIGH);
   digitalWrite (red2,LOW);
   delay(5600);
 }
}
