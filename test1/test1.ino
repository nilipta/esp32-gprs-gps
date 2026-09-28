HardwareSerial modem(1);

void cmd(const char *s, int waitms = 2000)
{
  Serial.print("\n>> ");
  Serial.println(s);

  modem.println(s);
  delay(waitms);

  while (modem.available())
    Serial.write(modem.read());
}

void setup()
{
  Serial.begin(115200);
  modem.begin(115200, SERIAL_8N1, 12, 13);

  delay(5000);

  cmd("AT");
  cmd("AT+CGDCONT=1,\"IP\",\"airtelgprs.com\"");
  cmd("AT+QIACT=1", 5000);
  cmd("AT+QIACT?");
}

void loop()
{
}