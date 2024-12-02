const int ACT_IN1 = 8;
const int ACT_IN2 = 9;
const int ACT_ENA = 10;
const int ROBOT = 4;

void setup() {
  pinMode(ACT_IN1, OUTPUT);
  pinMode(ACT_IN2, OUTPUT);
  pinMode(ACT_ENA, OUTPUT);

  pinMode(ROBOT, INPUT);
}

void loop() {
  digitalWrite(ACT_IN1, LOW);   
  digitalWrite(ACT_IN2, HIGH);
  analogWrite(ACT_ENA, 150);   // VELOCITY
  delay(30000);          // TIME!!! RETRACT TIME (150 - 13000 MILSEG // 70 - 45000 MILSEG // 100 - 20000 MILSEG // 120 - 17000 MILSEG)

  analogWrite(ACT_ENA, 0); //LOAD PAINT
  delay(5000);            

  digitalWrite(ACT_IN1, HIGH); 
  digitalWrite(ACT_IN2, LOW);
  analogWrite(ACT_ENA, 255);   
  delay(20000);            //PUSH TIME

  analogWrite(ACT_ENA, 0);
  delay(5000);            
}
