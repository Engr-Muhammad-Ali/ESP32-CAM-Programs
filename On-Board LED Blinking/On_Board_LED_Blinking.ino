int D = 1000;
int LED = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode (LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED, 1);
  delay (D);

  digitalWrite (LED, 0);
  delay (D);
}
