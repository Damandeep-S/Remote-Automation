#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[ ] = "AuthToken";

char ssid[ ] = "NetworkName";
char pass[ ] = "Password";

// WidgetLED led1(V1);
// BlynkTimer timer;


// void blinkLedWidget()  // function for switching off and on LED
// {
//   if (led1.getValue()) {
//     led1.off();
//     Serial.println("LED on V1: off");
//   } else {
//     led1.on();
//     Serial.println("LED on V1: on");
//   }
// }

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  //timer.setInterval(1000L, blinkLedWidget);
}

//In the loop function include Blynk.run() command.
void loop()
{
  Blynk.run();
  //timer.run();
}