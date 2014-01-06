# ARPi-Rover
The PiRover itself is a robot based on the Raspberry Pi and Arduino.

## Required Hardware
* Raspberry Pi with the Camera Module
* USB Power Bank: Choose carefully! It should provide a 5V 2A or at least 1.5A usb out to power up the Raspberry Pi.
The Raspberry Pi needs a lot of current for the camera module, wifi, and arduino is also powered by the Raspberry Pi
that's why choose a powerbank with at least 5000mAh! Ideally it has some status led so we can read the battery life with a photo resistor.
* Photo resistor + 10k Resistor: To read the battery life of your powerbank
* micro usb cable 0.6ft: To connect the powerbank with Rapsberry Pi
* usb A-to-B cable 0.6ft: To connect the Raspberry Pi with the Arduino
* Arduino Uno or Mega
* Motor Shield (for example: Adafruit: http://www.adafruit.com/products/81)
* LiPo Battery (for example: Hacker LiPo Akku 11.1 V / 1800 mAh (30 C))
* Chassis with DC Motors and wheels: just google "robot chassis 4wd"
* Servo Motor: for a 180° view
* UltraSonic Range Finder: to measure distance
* one LED: to use it as a status led
* some wire

## Get your Arduino ready
After you checked out the project locally install these two dependencies:
- [Adafruit-Motor-Shield-library](https://github.com/adafruit/Adafruit-Motor-Shield-library)
- [NewPing](http://playground.arduino.cc/Code/NewPing)

```bash
mkdir ~/sketchbook/libraries && cd ~/sketchbook/libraries
git clone https://github.com/adafruit/Adafruit-Motor-Shield-library && mv Adafruit-Motor-Shield-library/ AF_Motor_Shield
wget https://arduino-new-ping.googlecode.com/files/NewPing_v1.5.zip && unzip NewPing_v1.5.zip
```
(if wget and unzip isn't installed you can manually download and unzip the NewPing.zip archive to ~/sketchbook/libraries)
