arduino-sound-encoding
======================

Sound Encoding through the Arduino &amp; Processing for IPD-568


================ READ ME================

Michael Rivera
IPD 568 - Cultures of Making
Response 1 - Encoding Sound to Images
3/2/2013
============================================


+----Light Encoder Instructions ------------
    - Hardware: Arduino LilyPad, Light Sensor

    - LightToSerial (Arduino): 
        1) Load the LightToSerial sketch onto an Arduino.
        2) Light intensity will be collected while the Arduino is still connected to the USB port of a computer. The data will be sent on the Serial Port (9600);

    -CreateLightImage (Processing):
        1) After loading the LightToSerial Arduino sketch, run the CreateLightImage in Processing.
        2) Press the space-bar to start data collection from the serial port. The data that is collected is sent from the Arduino.
        3) While data collection is occurring, an image will be generated using the light intensity values.
        4) Once the process have filled in the image, the number '399' will appear in the Processing console. Press 'S' to save the image.
        5) The image output name will be provided in the processing console.
        6) To playback the image to the Arduino LilyPad Speaker, press 'P' in the Processing image window. The values encoded will then print in the Processing console and be sent to the Arduino on the Serial Port.
        7) The sounds will play until all sounds have been  read from the image and sent from Processing to the Arduino.

+----Sound Encoder Instructions ------------

    - Hardware: Arduino Uno, Rugged Audio Shield, 
              RadioShack Microphone, Micro SD Card

    - Recording Sounds:
        1) Connect Micro SD Card, Rugged Audio Shield, Arduino Uno, and Microphone to record a wav file sound.
        2) Load the RecordToWav file onto the Arduino.
        3) To begin recording, open the serial monitor, type anything, the press the 'Send' button.
        4) The audio will record for five seconds. If an output device is connected to the shield, the sound will loop playback.
        5) Remove the SD card and connect it to your computer to obtain the WAV sound file.

    - Java Encoding:
        1) Put an image and a wav (RIFF-type) file in the same folder as the ImageToWavEncoder.java file.
            NOTE: You may have to run 'javac ImageToWavEncoder' & 'javac WavToImageDecoder' to compile the java files before use.
        2) In Terminal run the command: 'java ImageToWavEncoder <input-wav-name> <image-name>'
            Ex: java WavToImageEncoder h.WAV decoded.wav
        3) The encoded image file will be the same image file you have provided to the command above.

    - Java Decoding:
        NOTE: The Decoding Process results in some static/noise being added to the originally encoded sound file. This is demonstrated by playing the example file 'h.wav' and its decoded version 'output.wav'.
        
        1) In Terminal run the command: 'java ImageToWavDecoder <Encoded-Image-Name> <output-wav-name>'
            Ex: java ImageToWavDecoder hello.jpg decoded.wav
        2) The decoded wav file will be in the same folder with the name <output-wav-name> you have provided.





