# CS 207 Project #

This is project is basically the installation and calibration of the uspeech library on to the arduino in order to do simple commands such as turning off and one LEDs or Turning a servo motor in a certain directions based on the commands spoken into the microphone. 

## Repository Contents ##

* **/src** - Contains the source used for the arduino (.ino, .cpp)
* **/libraries** - Any and all libraries needed to
* **/img** -All images used in the readme files
* **/LICENSE** - License file
* **/README.md** - Read me file

## Requirements and Materials ##

Dependencies:
* The uSpeech library http://arjo129.github.io/uSpeech/ - The project relies on said library

Bill of Materials:

* 1x AdaFruit Electret Microphone Amplifier - MAX4466 with Adjustable Gain (note: any microphone with pre amp can suffice)
* 1X Red LED
* 1X Green LED
* 2x 220 ohm resistors
* 1x Arduino Uno
* 1x breadboard


## Build Instructions ##

Since most of the brunt work is in the code itself, the circuit is rather small in size

![alt text][pic1]

[pic1]: https://github.com/Ashirdavid/CS207/blob/master/Img/Project_bb.jpg "Logo Title Text 2"

![alt text][pic2]

[pic2]: https://github.com/Ashirdavid/CS207/blob/master/Img/Project_schem.jpg "Logo Title Text 2"

It should be noted however that the adafruit microphone has to be soldered on to connectors in order for to be used.

## Firmware Installation ##

First the Uspeech Library must be installed (more on that here https://github.com/arjo129/uSpeech/wiki/Installation)
(Also if you are not using an Arduino compatible board then https://github.com/arjo129/uSpeech/wiki/Porting is also required)

Second, Calibration is required for different types of microphones. The process for which is outlined here https://github.com/arjo129/uSpeech/wiki/Before-you-start

(Note: There is also a nice youtube video on calibration by the creator of uspeech: https://www.youtube.com/watch?v=BctPULWywYY&list=PL3w3hv5y0WElFP5O4oShEj51Ur0D6h_D4)

## Usage ##

For use by other people, the src folder contains two .ino files. One being for calibration and the other is the actual code itself. Firstly the ProjectCalibration.ino which is written the specifications of my microphone (it easily changable to suit any microphone).
Secondly, The project.ino which contains the actual code to light the LEDs. This file is easier to use as it all that needs to be done is to compile and  upload the file onto the Arduino. If calibration was done correctly, it should work smoothly

## Author ##

Ashir David Judah

## License ##

This project is licensed under the MIT License - see the LICENSE.md file for details

## References ##
Chakravarty, Arjo 2012, µSpeech, GitHub, accessed on 3rd March 2017, <http://arjo129.github.io/uSpeech/>

Perera, Rashika 2014, Voice Recognition with Arduino, BlogSpot, accessed on 4th April 2017, <http://tiriboy.blogspot.ca/2014/08/voice-recognition-with-arduino.html>

## Acknowledgements ##
Arjo Chakravarty - For building the code the entire project is based on

Rasika Perera  - Whose code I modified and used to make this project work which can be found here

Trevor Tomesh- For teaching the class and an all around great guy (I guess)
