#define LED 13
#define LED2 12
int i;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}
 
void loop()
{
  digitalWrite(LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) 
  digitalWrite(LED2, LOW);
  delay(200); 
  digitalWrite(LED, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED, LOW); 
  digitalWrite(LED2, LOW);
  delay(200);
}
