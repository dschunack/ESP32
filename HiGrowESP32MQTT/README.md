The program HiGrowESP32MQTT.ino refers to the following two posts

https://ckblog2016.wordpress.com/2018/03/18/higrow-sensor-sorgt-fuer-das-wohl-der-pflanzen/
https://ckblog2016.wordpress.com/2018/03/19/higrow-sensor-daten-erfassen-und-versenden/

describing the use of HiGrow sensor for plant monitoring.
   
Here the temperature and humdity of the air, the soil moisture and light were measured by the HiGrow
sensor and were published as MQTT message. 
   
I use the CloudMQTT as MQTT Broker offered by the Swedish company 84codes AB in Stockholm.
   
You have to change the file credentials.h to your conditions - WiFi and MQTT access.

(c) Claus Kuehnel 2018-03-19 info@ckuehnel.ch



Installation instructions using Arduino IDE Boards Manager
==========================================================

Starting with 1.6.4, Arduino allows installation of third-party platform packages using Boards Manager. We have packages available for Windows, Mac OS, and Linux (32 and 64 bit).

- Install the current upstream Arduino IDE at the 1.8 level or later. The current version is at the [Arduino website](http://www.arduino.cc/en/main/software).
- Start Arduino and open Preferences window.
- Enter ```https://dl.espressif.com/dl/package_esp32_index.json``` into *Additional Board Manager URLs* field. You can add multiple URLs, separating them with commas.
- Open Boards Manager from Tools > Board menu and install *esp32* platform (and don't forget to select your ESP32 board from Tools > Board menu after installation).

Stable release link: `https://dl.espressif.com/dl/package_esp32_index.json`

Development release link: `https://dl.espressif.com/dl/package_esp32_dev_index.json`


Needed Libaries
- PubSubClient
- Adafruit Unified Sensor
- DHT sensors libary
