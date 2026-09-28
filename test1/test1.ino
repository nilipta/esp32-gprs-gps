#include <WiFi.h>
#include <esp_netif.h>

extern "C" {
#include "esp_netif_ppp.h"
}

void setup()
{
    Serial.begin(115200);
    Serial.println("PPP Header Found");
}

void loop()
{
}