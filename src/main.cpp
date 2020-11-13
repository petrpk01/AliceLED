#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <wifi_config.h>

#define LED_PIN D4

// Для реле с обратной логикой 1(это выключено)
// Для реле с прямой логикой 0 (это выключено)
bool rele = 1;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = SicretAUTH;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = SicretSSID;
char pass[] = SicretPASS;

BlynkTimer timer;

// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  int sensorData = analogRead(A0);
  float voltage = sensorData * 3.3; 
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100;
  Blynk.virtualWrite(V5, temperatureC);
  Serial.print(temperatureC);
  Serial.println(" degrees C");  
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
   pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
   pinMode(LED_PIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
   digitalWrite(LED_PIN, rele);
  // Setup a function to be called every second
  timer.setInterval(1000L, myTimerEvent); 
}

BLYNK_WRITE(V4) // запрос данных с датчика
{
rele= param.asInt();
digitalWrite(LED_PIN, rele);  
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on by making the voltage LOW
  //delay(1000);                      // Wait for a second
  //digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  //delay(2000);
  Blynk.run();
  timer.run(); // Initiates BlynkTimer
}