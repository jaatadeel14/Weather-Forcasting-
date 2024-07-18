# Weather-Forcasting-<br/>
# Wireless Temperature and Humidity Monitoring System Using Arduino and Bluetooth <br/>
# Introduction <br/>
This project demonstrates the implementation of a wireless temperature and humidity monitoring system using an Arduino Uno, DHT11 sensor, and HC-05/HC-06 Bluetooth module. Real-time data is transmitted to an Android application created with MIT App Inventor, which displays the temperature and humidity readings.  <br/>
# Table of Contents
•Introduction <br/>
•Components Used <br/>
•Circuit Diagram <br/>
•Arduino Code <br/>
•MIT App Inventor Setup <br/>
•Designing the User Interface <br/>
•Blocks for Bluetooth Communication <br/>
•Testing the System <br/>
•Results and Data Analysis <br/>
•Future Enhancements <br/>
# Components Used <br/>
•Arduino Uno  <br/>
•DHT11 Temperature and Humidity Sensor  <br/>
•HC-05/HC-06 Bluetooth Module  <br/>
•Breadboard and Jumper Wires  <br/>
•10k Ohm Resistor  <br/>
# Designing the User Interface <br/>
# Label for Temperature: <br/>

# Rename to LabelTemperature. <br/>
Set initial text to "Temperature: - °C". <br/>
Label for Humidity: <br/>

# Rename to LabelHumidity.<br/>
Set initial text to "Humidity: - %".<br/>
Button for Connect/Disconnect:<br/>

# Rename to ButtonConnect.<br/>
Set text to "Connect".<br/>
ListPicker for Bluetooth Devices:<br/>

# Rename to ListPickerDevices. <br/>
Set text to "Select Bluetooth Device". <br/>
# BluetoothClient:<br/>

Drag and drop a BluetoothClient from the Connectivity section to the Viewer. This will be a non-visible component.<br/>
Blocks for Bluetooth Communication <br/>
 # Testing the System <br/>
 The system was tested in various indoor and outdoor environments to ensure reliable performance. Data was collected and analyzed for accuracy and consistency.<br/>
# Indoor Testing: <br/>
•Rooms: Living room, kitchen, bathroom. <br/>
•Observations: Consistent temperature and humidity readings.<br/>
# Outdoor Testing: <br/>
•Conditions: Sunny, shaded, humid environments.<br/>
•Observations: Stable performance in different weather conditions.<br/>
# Controlled Environment: <br/>
•Adjustable thermostat and humidifier used to test sensor accuracy. <br/>
•Observations: DHT11 sensor provided accurate readings within the expected range.<br/>
# Results and Data Analysis <br/>
Data collected from different environments were analyzed to verify the accuracy and consistency of the sensor readings. The sensor's performance was found to be reliable within an acceptable range (±2°C for temperature and ±5% for humidity).

Graphs and charts were created to represent temperature and humidity trends over time, confirming the system's reliability and accuracy.<br/>

# Future Enhancements <br/>
 #Remote Monitoring via Cloud Integration:<br/>

Adding cloud services for remote access and monitoring of the data.<br/>
#Additional Sensors:<br/>

Integrating more sensors (e.g., air quality, light sensors) for comprehensive environmental monitoring.<br/>
#Enhanced Mobile Application Features:<br/>

Adding data logging, alerts, and historical data analysis to the mobile application for improved functionality.<br/>
# Conclusion
The Wireless Temperature and Humidity Monitoring System successfully measures and transmits environmental data wirelessly. The integration of Arduino, DHT11 sensor, HC-05/HC-06 Bluetooth module, and MIT App Inventor application provides a reliable and user-friendly solution for real-time environmental monitoring. Thorough testing confirmed the system's accuracy and reliability, making it a valuable tool for various applications. Future enhancements can further extend its capabilities and applications.











 
