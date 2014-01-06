# ARPi-Robotics

ARPi-Robotics itself is a ready-to-use micro-framework based on Python, C++, JavaScript and HTML5.  
It provides several robot models based on the Arduino and Raspberry Pi.

## Features

* Communication over Wifi
* A user friendly and beautiful web-interface - no app is needed!
* Video streaming in real time (up to 1080p@30fps - yes, its full hd!)
* Based on arch linux - no limits

## Supported robot models
- [ARPi-Rover](docs/arpi-rover.md)

## How to install

### Step 1: Checkout the project locally

```bash
git clone git@github.com:arpi-robotics/arpi-robotics.git
```

### Step 2: Get your Arduino ready
The setup of the arduino is model specific, so take a look under the docs folder.
- [Arduino setup for ARPi-Rover](https://github.com/arpi-robotics/arpi-robotics/blob/master/docs/arpi-rover.md#get-your-arduino-ready)


Then open the arduino/<model type>/<model type>.ino in your Arduino IDE and upload it to your Arduino.

The Arduino is now ready.

### Step 3: Checkout the project remotely on your raspberry pi

ssh to your raspi and then:

```bash
git clone git@github.com:arpi-robotics/arpi-robotics.git
cd pi-rover/
virtualenv-2.7 venv
source venv/bin/activate
./venv/bin/pip-2.7 install -r requirements.txt
./venv/bin/python2.7 runserver.py
```

Open this in browser:
```
http://<ip-of-your-raspi>:5000/
```

## Contribute

## TODOs / Planned Features

- lag free video streaming to the browser (for now we are using netcat, tried vlc, ffmpeg, gstreamer and mjpeg-stream - all with lags >2s)
- run with the fast python interpreter "pypy" (gevent is here the problem)
- implement json rpc over websockets to be able to call functions remotely in javascript (https://github.com/brainrape/jsonrpcws)
- handle wifi connections directly in python
- create a basis to work with opencv
