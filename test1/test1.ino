#include <WiFi.h>

#include <esp_netif.h>
#include <esp_netif_ppp.h>

#include "esp_modem_api.h"
#include "esp_modem_config.h"
#include "esp_modem_netif.h"

void setup()
{
    Serial.begin(115200);
    Serial.println("All Modem Headers Found");
}

void loop()
{
}