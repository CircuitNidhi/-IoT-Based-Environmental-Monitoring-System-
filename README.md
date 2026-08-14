**IoT-Based Environmental Monitoring System**


📌 Project Overview

This project is an Arduino-based Environmental Monitoring System designed and simulated using Tinkercad Circuits. The system monitors important environmental parameters such as temperature, gas level, and light intensity using different sensors.

The collected sensor data is processed by the Arduino UNO and displayed on a 16×2 LCD. The system also provides visual and audible alerts when abnormal environmental conditions are detected.

**✨ Features**
🌡️ Temperature monitoring using TMP36

🌫️ Gas level monitoring

💡 Light intensity monitoring using a photoresistor

📺 Real-time data display on 16×2 LCD

🟢 Green LED for normal conditions

🔴 Red LED for warning conditions

🔔 Buzzer for abnormal conditions

🧪 Complete circuit simulation using Tinkercad


**🛠️ Components Used**


Arduino UNO

TMP36 Temperature Sensor

Gas Sensor

Photoresistor

16×2 LCD

Potentiometer

Green LED

Red LED

Buzzer

Resistors

Breadboard

Jumper Wires


**⚙️ Working Principle**

The sensors continuously provide environmental readings to the Arduino UNO.

The TMP36 measures temperature, the gas sensor provides a gas-level reading, and the photoresistor measures light intensity. Arduino processes these readings and displays them on the LCD and Serial Monitor.

If the temperature exceeds 30°C or the gas sensor value exceeds 600, the system enters warning mode. The red LED and buzzer are activated, while the green LED turns OFF.


**💻 Software and Tools**


Arduino C/C++

Tinkercad Circuits

Arduino UNO



**🚀 Future Scope**

The system can be further developed by adding Wi-Fi connectivity using an ESP32, cloud-based data monitoring, data logging, additional environmental sensors, and automatic control mechanisms.

**📌 Conclusion**

The project successfully demonstrates real-time environmental monitoring using Arduino and Tinkercad simulation. It provides a basic platform for developing more advanced IoT-based environmental monitoring and control systems.
