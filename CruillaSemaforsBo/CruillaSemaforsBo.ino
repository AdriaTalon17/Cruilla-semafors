/**********************************************************************************
**                                                                               **
**                              Cruilla semafors                                 **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledR0 = 5;          // donar nom al pin 5 de l’Arduino
const int ledY1 = 6;          // donar nom al pin 6 de l’Arduino
const int ledG2 = 7;          // donar nom al pin 7 de l’Arduino
const int ledR3 = 8;          // donar nom al pin 8 de l’Arduino
const int ledY4 = 9;          // donar nom al pin 9 de l’Arduino
const int ledG5 = 10;         // donar nom al pin 10 de l’Arduino

unsigned long retard = 500;

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledR0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledY1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledG2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledR3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledY4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledG5, OUTPUT);     // definir el pin 10 com una sortida
  

}
   
  

//********** Loop *****************************************************************
void loop()
{ delay(retard),
  digitalWrite(ledR0,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,LOW); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
  delay(retard);

  delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(retard);

     delay(retard);
  digitalWrite(ledR0,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,HIGH);
    digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(retard);

    delay(retard);
  digitalWrite(ledR0,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,HIGH);
    digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(retard);

    delay(retard);
  digitalWrite(ledR0,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,HIGH);
    digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(retard);

    delay(retard);
  digitalWrite(ledR0,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,HIGH);
    digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(retard);

    delay(retard);
  digitalWrite(ledR0,LOW);
  digitalWrite(ledY1,HIGH);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(retard);


    delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,LOW); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,HIGH);
   delay(retard);

   

    delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,LOW); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,HIGH);
   delay(retard);

   

    delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,LOW); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,HIGH);
   delay(retard);

   

    delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,LOW); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,HIGH);
   delay(retard);

   

    delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,LOW); 
  digitalWrite(ledY4,HIGH);
  digitalWrite(ledG5,LOW);
   delay(retard);

   

    delay(retard);
  digitalWrite(ledR0,HIGH);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR3,HIGH); 
  digitalWrite(ledY4,LOW);
  digitalWrite(ledG5,LOW);
   delay(100);

   


  
  
  }





