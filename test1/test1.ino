#include <WiFi.h>

void setup() {
  Serial.begin(115200);

  WiFi.softAP("DC10120-Test", "12345678");

  Serial.println("AP Started");
  Serial.print("IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {}