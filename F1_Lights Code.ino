#define RED1 12
#define RED2 11
#define RED3 10
#define RED4 9
#define RED5 8
#define GREEN 7
#define BUZZ 6
void setup() 
{
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(RED3, OUTPUT);
  pinMode(RED4, OUTPUT);
  pinMode(RED5, OUTPUT);
  pinMode(GREEN, OUTPUT);
  F1Lights();
}
void loop() 
{
  
}
void F1Lights()
{
  digitalWrite(RED1, HIGH);
  tone(BUZZ, 200);
  delay(200);
  noTone(BUZZ);
  delay(1000);
  digitalWrite(RED2, HIGH);
   tone(BUZZ, 200);
  delay(200);
  noTone(BUZZ);
  delay(1000);
  digitalWrite(RED3, HIGH);
  tone(BUZZ, 200);
  delay(200);
  noTone(BUZZ);  
  delay(1000);
  digitalWrite(RED4, HIGH);
  tone(BUZZ, 200);
  delay(200);
  noTone(BUZZ);  
  delay(1000);
  digitalWrite(RED5, HIGH);
  tone(BUZZ, 200);
  delay(200);
  noTone(BUZZ);  
  delay(2000);
  digitalWrite(RED1, LOW);
  digitalWrite(RED2, LOW);
  digitalWrite(RED3, LOW);
  digitalWrite(RED4, LOW);
  digitalWrite(RED5, LOW);
  digitalWrite(GREEN, HIGH);  
  tone(BUZZ, 500);
  delay(400);
  noTone(BUZZ);    
}
