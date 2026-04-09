// Define the pin connections
const int mq2Pin = 4;
const int buzzerPin = 5;
const int ledPin = 6;

void setup() {
  // Initialize serial communication for debugging in the Serial Monitor
  Serial.begin(9600);

  // Set pin modes
  pinMode(mq2Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  // Ensure buzzer and LED are initially off
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);

  Serial.println("MQ2 Sensor Warming Up...");
  delay(3000); // Give the sensor a brief moment to stabilize
  Serial.println("System Ready.");
}

void loop() {
  // Read the digital signal from the MQ2 sensor
  int smokeState = digitalRead(mq2Pin);

  // Check if smoke is detected
  // NOTE: If your sensor works backwards (detects smoke but turns off), 
  // change 'HIGH' to 'LOW' in the line below.
  if (smokeState == HIGH) { 
    Serial.println("ALERT! Smoke detected!");

    // Turn on the buzzer
    digitalWrite(buzzerPin, HIGH);

    // Blink the LED
    digitalWrite(ledPin, HIGH);
    delay(200); // LED ON for 200 milliseconds
    digitalWrite(ledPin, LOW);
    delay(200); // LED OFF for 200 milliseconds

  } else { 
    // No smoke detected
    Serial.println("Air is clear.");

    // Turn off buzzer and LED
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);

    // Add a short delay to prevent flooding the Serial Monitor
    delay(500); 
  }
}
