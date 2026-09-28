#include <esp_netif.h>
#include <WiFi.h>

void setup() {
  Serial.begin(115200);

#ifdef ESP_NETIF_DEFAULT_PPP
  Serial.println("PPP Available");
#else
  Serial.println("PPP NOT Available");
#endif
}

void loop() {
}

///PPP Available
