#define trigger 2
#define echo 3
#define max_distance 200
void setup() {
  // put your setup code here, to run once:
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger,LOW);
  delay(2);
  digitalWrite(trigger,HIGH);
  delay(10);
  digitalWrite(trigger,LOW);
  unsigned int dist = pulseIn(echo,HIGH);
  int nota=map(dist, 0, max_distance, 100,880);
  tone(8,nota);

}
