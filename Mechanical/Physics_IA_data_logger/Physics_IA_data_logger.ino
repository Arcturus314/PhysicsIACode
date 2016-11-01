
const int potA = A0;
const int potB = A2;
const int ledPin = 9;

int potAValue = 0;
int potAStart = 0;

int potAVcc = 7;
int potBVcc = 6;

int potBValue = 0;
int potBStart = 0;

int timeCount = 0;

void setup() {
  //Setting up pot power supply
  pinMode(potAVcc, OUTPUT);
  digitalWrite(potAVcc, HIGH);
  
  pinMode(potBVcc, OUTPUT);
  digitalWrite(potBVcc, HIGH);

  //sampling initial pot values
  
  potAStart = analogRead(potA);
  potBStart = analogRead(potB);
  Serial.print("pot A start: ");
  Serial.println(potAStart);
  Serial.print("pot B start: ");
  Serial.println(potBStart);
  
  // initiating serial connection
  Serial.begin(9600);
  // led to illustrate calibration
  pinMode(13, OUTPUT);

  Serial.println("time (s), potA, potB");
}

void loop() {
  potAValue = analogRead(potA);

  potBValue = analogRead(potB);
  
  Serial.print(timeCount);
  Serial.print(",");
  Serial.print(potAValue);
  Serial.print(",");
  Serial.println(potBValue);

  delay(100);

  timeCount++;

  
}
