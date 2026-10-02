# PPPoS simple client example

(See the README.md file in the upper level 'examples' directory for more information about examples.)

## Overview
This example shows how to act as a MQTT client after the PPPoS channel created by using [ESP-MQTT](https://docs.espressif.com/projects/esp-idf/en/latest/api-reference/protocols/mqtt.html) APIs.

## How to use this example

See the README.md file in the upper level `pppos` directory for more information about the PPPoS examples.

### USB DTE support

For USB enabled targets (ESP32-S2, ESP32-S3, or ESP32-P4), it is possible to connect to the modem device via USB.
1. In menuconfig, navigate to `Example Configuration->Type of serial connection to the modem` and choose `USB`.
2. Connect the modem USB signals to your ESP chip (pin 19 (DATA-) and 20 (DATA+) for ESP32-S2/S3).

USB example uses Quactel BG96 modem device. BG96 needs a positive pulse on its PWK pin to boot-up.

This example supports USB modem hot-plugging and reconnection.


idf.py menuconfig
Example Configuration
    ->
Choose supported modem device (DCE)

    Type of serial connection to the modem (UART)  --->                                                                                       Choose supported modem device (DCE) (Custom device)  --->                                                                             (airtelgprs.com) Set MODEM APN                                                                                                            [ ] Short message (SMS)                                                                                                                   [ ] SIM PIN needed                                                                                                                            UART Configuration  --->                                                                                                              (mqtt://test.mosquitto.org) MQTT Broker URL                                                                                               (/topic/esp-pppos) MQTT topic to publish/subscribe                                                                                        (esp32-pppos) MQTT data to publish/receive                                                                                                [ ] Demonstrate netif pause                                                                                                               [ ] Detect mode before 
	
( ) SIM800                                                                                                                                ( ) BG96                                                                                                                                  ( ) SIM7000                                                                                                                               ( ) SIM7070                                                                                                                               ( ) SIM7600                                                                                                                               (X) Custom device                                                                                                                                            
SIM800
BG96
SIM7000
SIM7070
SIM7600
device (X) Custom


(13) TXD Pin Number                                                                                                                       (12) RXD Pin Number                                                                                                                       (27) RTS Pin Number                                                                                                                       (23) CTS Pin Number                                                                                                                       (2048) UART Event Task Stack Size                                                                                                         (5) UART Event Task Priority                                                                                                              (30) UART Event Queue Size                                                                                                                (20) UART Pattern Queue Size                                                                                                              (512) UART TX Buffer Size                                                                                                                 (1024) UART RX Buffer Size                                                                                                                    Set preferred modem control flow (No control flow)