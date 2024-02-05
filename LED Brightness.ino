int led=11; 
int brightness=0; 
int x=5; 

void setup() {
  pinMode(led,1); 
}

void loop() {
  analogWrite(led,brightness); 
  brightness+=x; 
  if (brightness==0 || brightness==255){ 
    x=-x ; 
  }
  delay(50); 
}