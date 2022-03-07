
## Abstract

A heating system is a mechanism for maintaining temperatures at an acceptable level ,by using thermal energy within Everywhere like home , cars etc. It helps the system to raise the temperature of an enclosed space for the primary purpose of ensuring the comfort of the occupants.The Seat Heating control system is mostly  used to control the temperature of a car seat. When a passenger or a driver of the car sits on the car seat, the button sensor gets activated (which acts as one switch). After that, the user has to turn on the heater(It's called the recirculation button, and it plays an important role in the heat).The temperature sensors work by measuring the temperature that's being given off by the thermostat and/or the coolant itself, and it also  keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through  USART(universal synchronous and asynchronous receiver and transmitter).

## Components used
- ATMEGA 328
- Temperature Sensors
- LCD ( liquid crystal display)
- LED (Light-emitting diode) 
- Heater core
- Thermostat

# SWOT Analysis

## Strength
- Energy Saving
- Increased Comfort
- Enhanced Air Quality
- Lower Cost of Repairs
- Reliable

## Weakness
- maintenance requirements that it takes to operate these more complex systems.
- Its not energy-efficient

## Threats
- The system cannot be used for high Temperature.
- High electric Resistance can make the heater pad to get over heat.

## Opportunties
- require little time and expense to implement.
- will consume less energy.
- cost less money to operate.

# 4W and 1H
## What
Heated seats can make cars  more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car's seat warmer is close to your body allowing you to warm up faster.

## When
Heated front seats not only offer luxurious comfort, relaxation and benefits for physical health, but also increase safety. Heating seats and backrests ensures a high level of well-being and prevents a cramped posture. Winter clothes limiting freedom of movement can be dispensed with. This also results in better operation of the restraint system by reducing the slack in safety belts. People with back or kidney problems benefit from a possible reduction of pain. It is mostly used in cars.

## Where
The car seats

## Why
Heating system in our vehicle is designed to keep us warm, comfortable, and many more advantages. It helps to reduce the pain for the old persons & in  relaxation of body.

## How
The longer the seat cushion stays on, the hotter it gets. If it  stayed "on" for too long, it would get hot enough to become uncomfortable or even dangerous to sit in. It could even start a fire in the cushion. To prevent this, most car seat heaters have a thermostat. The thermostat closes to keep the coolant inside the engine from travelling through the entire cooling system. Once the engine warms up enough, the thermostat opens and helps in cooling down the engine.

## Details requirements
### High Level Requirements:
| ID | Description | Status |
|------| ------| ------|
| HLR1 | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. | |
|HLR2  | Next the analog input from the temperature sensor is received and digitized.| |
|HLR3  | The hard disk must be 4 GB . |	|
|HLR4  | The web browser must be Microsoft Internet Explorer with a resolution of at least 800 \* 600. |	|

#### Low Level Requirements:

| ID | Description | Status |
|-------|------|------|
| LLR1 | The digitized temperature input is visualized using Pulse Width Modulation.| 
| LLR2 | The system runs effectively on Windows 2000 server but it will also run equally well on compatible operating systems.  | |
| LLR3 | The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.| | 
 



