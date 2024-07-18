#include <nRF24L01.h>
#include <RF24.h>
#include <DHT.h>
// #include <SoftwareSerial.h>

#define DHTPIN 5 // Pin for DHT sensor
#define DHTTYPE DHT11 // Define DHT type

DHT dht(DHTPIN, DHTTYPE);
RF24 transmit(2, 3); // Define RF24 object for transmission
byte address[5] = "00001"; // Define address

// SoftwareSerial bluetooth(8, 9);  // RX, TX

struct package {
  float temperature;
  float humidity;
};

typedef struct package Package;
Package data;

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
  // bluetooth.begin(9600);  // Initialize Bluetooth serial communication
  dht.begin(); // Initialize DHT sensor
  transmit.begin(); // Initialize RF24 module
  transmit.openWritingPipe(address); // Open writing pipe to address 00001
  transmit.setPALevel(RF24_PA_MAX); // Set RF power output to maximum
  transmit.setDataRate(RF24_250KBPS); // Set data rate to 250kbps
  transmit.setChannel(100); // Set frequency channel to 100
  transmit.stopListening(); // Set module as transmitter

  // Serial.println("Transmitter setup complete.");
  // Serial.println("Bluetooth serial communication initialized.");
}

void loop() {
  data.temperature = dht.readTemperature();
  data.humidity = dht.readHumidity();

  // Print sensor data to serial monitor
  // Serial.print("Temperature: ");
  // Serial.print(data.temperature);
  // Serial.print(" °C, Humidity: ");
  // Serial.print(data.humidity);
  // Serial.println(" %");

  // Send data via RF24 module
  bool success = transmit.write(&data, sizeof(data));
  if (success) {
    // Serial.println("Data sent successfully via RF24.");
    // Send data via Bluetooth
    // bluetooth.print(data.temperature);
    // bluetooth.print(",");
    // bluetooth.println(data.humidity);
    // Serial.println("Data sent successfully via Bluetooth:");
    // Serial.print("Temperature: ");
    // Serial.print(data.temperature);
    // Serial.print(" °C, Humidity: ");
    // Serial.print(data.humidity);
    // Serial.println(" %");
    Serial.print((int) data.temperature); //send distance to MIT App
    Serial.print(";");
    Serial.print((int) data.humidity); //send distance to MIT App 
    Serial.println(";");
  } else {
    Serial.print((int) 40.4); //send distance to MIT App
    Serial.print(";");
    Serial.print((int) 40.4); //send distance to MIT App 
    Serial.println(";");
    // Serial.println("Data sending failed via RF24.");
  }

  delay(1000); // Wait for 1 second before next reading
}
