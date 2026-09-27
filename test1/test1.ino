HardwareSerial modem(1);

void setup() {
  Serial.begin(115200);

  modem.begin(115200, SERIAL_8N1, 12, 13);

  delay(3000);

  Serial.println("Sending AT...");
  modem.println("AT");
}

void loop() {
  while (modem.available()) {
    Serial.write(modem.read());
  }
}