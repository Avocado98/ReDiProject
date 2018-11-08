// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>

#define TRIGGER_PIN  7  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 300 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  pinMode(9, OUTPUT) ;
}

void loop() {
  int distance = sonar.ping_cm() ;
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");


  if (distance > 10 || distance == 0 )
  {
    digitalWrite (9, HIGH) ;
    delay (5000) ;
    digitalWrite (9, LOW) ;
    delay (5000) ;

  }

 

  else
  {
    

    digitalWrite (9, HIGH) ;
    delay (500) ;
    digitalWrite (9, LOW) ;
    delay (500) ;
    digitalWrite (9, HIGH) ;
    delay (500) ;
    digitalWrite (9, LOW) ;
    delay (500) ;
    digitalWrite (9, HIGH) ;
    delay (500) ;
    digitalWrite (9, LOW) ;
    delay (500) ;

    digitalWrite (9, HIGH) ;
    delay (2000) ;
    digitalWrite (9, LOW) ;
    delay (1000) ;
    digitalWrite (9, HIGH) ;
    delay (2000) ;
    digitalWrite (9, LOW) ;
    delay (1000) ;
    digitalWrite (9, HIGH) ;
    delay (2000) ;
    digitalWrite (9, LOW) ;
    delay (1000) ;


  }
}
