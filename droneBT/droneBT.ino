void setup()
{
    Serial.begin(9600);        //set ur boud rate  Supported rates: 9600, 19200,38400,57600,115200. (115200 maybe is the one)
}
void loop()
{
  if (Serial.available())
    Serial.write(Serial.read());
}
