const byte led_rosa = 13;
const byte led_branco = 12;
unsigned long time1 = 0;
unsigned long time2 = 0;
const unsigned long intervalo1 = 1000;
const unsigned long intervalo2 = 500;
bool rosa = LOW;
bool branco = LOW; 

void setup() {
  pinMode(led_rosa, OUTPUT);
  pinMode(led_branco, OUTPUT);
}

void loop() {
   unsigned long atual = millis();

if (atual - time1 >= intervalo1) {
    time1 = atual;      
    rosa = !rosa;        
    digitalWrite(led_rosa, rosa);
  }

  if (atual - time2 >= intervalo2) {
    time2 = atual;
    branco = !branco;             
    digitalWrite(led_branco, branco);
  }
}
