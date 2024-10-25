int led_pin = 7;
float rest_time_1 = 100;
float rest_time_2 = 500;
float rest_time_3 = 1000;


void setup()
{
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  // dit dit dit
  digitalWrite(led_pin, HIGH);
  delay(rest_time_1);
  digitalWrite(led_pin, LOW);
  delay(rest_time_1);

  digitalWrite(led_pin, HIGH);
  delay(rest_time_1);
  digitalWrite(led_pin, LOW);
  delay(rest_time_1);

  digitalWrite(led_pin, HIGH);
  delay(rest_time_1);
  digitalWrite(led_pin, LOW);
  delay(rest_time_2);



  // dash dash dash
  digitalWrite(led_pin, HIGH);
  delay(rest_time_2);
  digitalWrite(led_pin, LOW);
  delay(rest_time_2);

  digitalWrite(led_pin, HIGH);
  delay(rest_time_2);
  digitalWrite(led_pin, LOW);
  delay(rest_time_2);

  digitalWrite(led_pin, HIGH);
  delay(rest_time_2);
  digitalWrite(led_pin, LOW);
  delay(rest_time_2);

  // dit dit dit
  digitalWrite(led_pin, HIGH);
  delay(rest_time_1);
  digitalWrite(led_pin, LOW);
  delay(rest_time_1);

  digitalWrite(led_pin, HIGH);
  delay(rest_time_1);
  digitalWrite(led_pin, LOW);
  delay(rest_time_1);

  digitalWrite(led_pin, HIGH);
  delay(rest_time_1);
  digitalWrite(led_pin, LOW);
  delay(rest_time_1);

  delay(rest_time_3);
}