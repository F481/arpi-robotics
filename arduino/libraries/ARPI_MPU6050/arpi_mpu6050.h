#define MPU6050_INCLUDE_DMP_MOTIONAPPS20

#ifndef ARPI_MPU6050_h

   #define ARPI_MPU6050_h

   #if defined(ARDUINO) && ARDUINO >= 100
   	#include <Arduino.h>
   #else
   	#include <WProgram.h>
   	#include <pins_arduino.h>
   #endif

   #include <helper_3dmath.h>

   // Arduino Wire library is required if I2Cdev I2CDEV_ARDUINO_WIRE implementation
   // is used in I2Cdev.h
   #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
       #include "Wire.h"
   #endif


   #define OUTPUT_READABLE_YAWPITCHROLL

   #define LED_PIN 13 // (Arduino is 13, Teensy is 11, Teensy++ is 6)

   class ARPI_MPU6050 {
   	public:
   		ARPI_MPU6050();
   		int setup();
   		void run();
   		float getYaw();
   		float getPitch();
   		float getRoll();
   };

#endif
