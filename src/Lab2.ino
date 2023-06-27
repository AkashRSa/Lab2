SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup()
{

  // Put initialization like pinMode and begin functions here.
  pinMode(D5, OUTPUT);
  Serial.begin(9600);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  uint16_t x = analogRead(A5);// The core of your code will likely live here.
  Serial.println(x);
  digitalWrite(D5, HIGH);
  delay(x);
  digitalWrite(D5, LOW);
  delay(x);
}