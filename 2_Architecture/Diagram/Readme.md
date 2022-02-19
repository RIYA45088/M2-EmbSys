
![Diagram drawio](https://user-images.githubusercontent.com/98817564/154796454-1713245a-df23-42b3-aa4c-e12ac3da555f.png)

 ## RFID Reader 
 Full form of RFID is “Radio Frequency Identification”. Wireless communication is used between RFID tags and RFID Reader. Reader does not require line of sight communication with tags. It means that Reader detects the RFID tag even if there is some object between Card and Reader. Thus it is a non-contact type of reader. The Radio frequency used in our reader is 125 kHz which is a Low Frequency (LF). RFID reader interfacing with Microcontroller is done using serial port. RFID reader will communicate with Microcontroller using serial communication. When RFID tag comes in the range of Reader module, then RFID reader detects RFID card. And at that time RFID reader sends out a series of alphanumeric unique codes on the serial port. So while adding the employees/student card number in the program memory. First we need to store this series of alphanumeric code into program memory and later on this unique series of codes will be compared with the incoming card number. RFID card reader module requires 9 volt power supply and output is given on DB9 connector port.

## RFID cards:
  There are two main types of RFID cards, Passive and Active. In this project we have used Passive RFID tags. As given in introduction, we can use normal RFID cards which are of the size of credit card. These are rectangular in shape and white in color and can be attached with the ID-card. Or even we can use RFID tags which can be attached with keychain

## Microcontroller:
It is the main component of the project. It is the heart of the system. Microcontroller communicates with all input and output devices. Various functions of Microcontroller are as follows:
1. Displaying clock on LCD
2. Reading input from RFID reader
3. Comparing it with the data / RFID card number stored in Microcontroller memory
4. Turning on buzzer if the cards does not match
5. Logging/Storing time into memory if cards match
6. Reading input from keypad and adjusting time according to the keypad entry given by user.
7. Sending data to computer.

## Keypad
  We have used 4by 1 keypad. It is a simple type of keypad. It gives low output to Microcontroller when key is pressed. It has 4 keys. Functions of these keys are Increment, Decrement, Enter and Escape. These are used in Time setting mode.

## Buzzer 
 We have used 12 volt buzzer for demonstration purpose. Buzzer will be turned on for invalid card access.

## Liquid Crystal Display
It is used to show current time and various messages. These messages are Invalid card, Valid card, attendance of student. We have used 16 by 2 alphanumeric display.
