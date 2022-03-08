
## Description

A heating system is a mechanism for maintaining temperatures at an acceptable level ,by using thermal energy within Everywhere like home , cars etc. It helps the system to raise the temperature of an enclosed space for the primary purpose of ensuring the comfort of the occupants.The Seat Heating control system is mostly  used to control the temperature of a car seat. When a passenger or a driver of the car sits on the car seat, the button sensor gets activated (which acts as one switch). After that, the user has to turn on the heater(It's called the recirculation button, and it plays an important role in the heat).The temperature sensors work by measuring the temperature that's being given off by the thermostat and/or the coolant itself, and it also  keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through  USART(universal synchronous and asynchronous receiver and transmitter).

## Components used
- ATMEGA 328
- Temperature Sensors
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
| HLR1 | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. | Implemented |
|HLR2  | Next the analog input from the temperature sensor is received and digitized.|Implemented |
|HLR3  | The hard disk must be 4 GB . |Implemented	|
|HLR4  | The web browser must be Microsoft Internet Explorer with a resolution of at least 800 \* 600. |Implemented	|

#### Low Level Requirements:

| ID | Description | Status |
|-------|------|------|
| LLR1 | The digitized temperature input is visualized using Pulse Width Modulation.| Implemented |
| LLR2 | The system runs effectively on Windows 2000 server but it will also run equally well on compatible operating systems.  | Implemented|
| LLR3 | The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.| Implemented |

# Behavioural Diagram

![Diagram](https://user-images.githubusercontent.com/98817564/155674552-f3e555a1-4a21-4144-8e57-7bbd622dc833.png)

## Microcontroller
Microcontroller enables to measure the heat output as well as control a circulation pump.

# Sensors
 If your vehicle has automatic climate control, it uses sensors to monitor the cabin, and then opens or closes the blend doors and outside flap as needed to maintain the         temperature have Been set.
 
## Temperature Sensors
Within heating systems, temperature sensors are used to measure the current temperature. They forward the information to a central control where it is compared to the target or set values.

## Power Supply
 The purpose of a mains power supply is to convert the power delivered to its input by the sinusoidally alternating mains electricity supply into power available at its output in the form of a smooth and constant direct voltage.Power supply operates on an AC input voltage and generates a DC output voltage.
 
 ## Heater Core
 Heater Core basically acts as a heat exchanger. It allows coolant to flow through, and this flow of coolant is regulated by the heater control valve. As the engine's heat is carried by coolant into the heater core, the device starts to get warm.
 
 ## Actuator
actuators are those which helps in  operating the blend doors correctly.

 ## LED
 When this Led flicks , it means that the coolant level is running low. It may also mean the possibility of the engine overheating and you need to stop your vehicle immediately.. 
 
## Fan
When you turn on the fan, a blower motor sends the air warmed by the heater core into the cabin.

# Structural Diagram 


### Low Level Diagram

![Structural Diagram png](https://user-images.githubusercontent.com/98817564/155724258-2d726c05-09fd-43ea-8878-25d478d96fbb.png)

## Heating Core
Heater Core used in heating the cabin of a vehicle. The heater core is a small 'radiator' that is connected to the engine cooling system.

## Heating Control Engine
The warmth from the engine goes from the radiator to the heater core, which basically acts as a heat exchanger. It allows coolant to flow through, and this flow of coolant is regulated by the heater control valve. As the engine's heat is carried by coolant into the heater core, the device starts to get warm.

## Water Pump
A working water pump is vital for the engine; if the water pump doesn't work, the engine will overheat. water pump doesn't need to be changed in regular mileage intervals.The water pump delivers the flow of coolant through the system.

## Hot Coolant
The hot coolant passes down through the radiator, it cools down.

## Thermistor
When the engine reaches normal operating temperature, the thermostat opens, allowing the flow of hot coolant through the radiator. 
The thermistor controls the temperature of the boiler water. On one terminal, it connects to the temperature setting or the potentiometer. Depending on the temperature, it provides a given amount of resistance. 

## Radiators
Radiators work through a heat transfer process called convection. When water in the radiator is heated, the surrounding air is also heated up via convection and this hot air is then moved around the room as the air circulates.

## Blower Motor
The blower motor turns the blower fan, sending the air through your air ducts and into the car . 

#3 Hot Water Valve
 It Desires water temperature and then the valve mixes hot water from your tank with regular cold water until it gives you the temperature you want.
 
 ## Cabin Air Filter
 An air cabin filter is an important component in any vehicle's heating System. It helps protect the passengers from contaminants in the air they breathe.
 
 ## Fresh Air
 Adding fresh air to a heating system accomplishes two primary indoor air quality goals. It pressurizes a building and increases indoor air quality by diluting  polluted or stale indoor air.
 
 ## Coolant Expansion Tank
  It allows the coolant, the antifreeze, and the air in the system to expand with rising temperature and pressure.
  
  # Imagesandvideos
  
  #### Process 1:

|OFF|OFF|
|:--:|:--:|
|![Simulation1](https://user-images.githubusercontent.com/98817564/157196953-2bc1f0d4-3c7b-4faf-8151-17c8f328ff19.png) | ![simulation off](https://user-images.githubusercontent.com/98817564/157197515-68c2a6fa-0d89-408f-8045-c6c3fe965829.jpg)|




|OFF|ON|
|:--:|:--:|
| ![p1-3](https://user-images.githubusercontent.com/98817564/157233744-40059401-8f8c-4d78-9912-0233205c581d.jpg)| ![process_1 on](https://user-images.githubusercontent.com/98817564/157198937-4c792a2d-6dd7-44c0-9116-e36e564e02e5.jpg) |



#### Process 2:


|OFF|ON|
|:--:|:--:|
| ![p2 -1](https://user-images.githubusercontent.com/98817564/157215012-1d29d3ad-3ffb-4936-a668-ed30c4288a55.jpg)| ![p2-2](https://user-images.githubusercontent.com/98817564/157215286-735a1692-7153-468b-a06f-d0b0514ecb38.jpg) |

|OFF|ON|
|:--:|:--:|
|![p2-3](https://user-images.githubusercontent.com/98817564/157215786-efef3e8c-a5a7-4e64-99d4-df8fbec78fb3.jpg)| ![p2-4](https://user-images.githubusercontent.com/98817564/157215803-fdc75517-91f7-4022-9b61-97a6a73b7c3e.jpg) |


#### Process 3:

|OFF|ON|
|:--:|:--:|
|![p3-1](https://user-images.githubusercontent.com/98817564/157217173-1e2f9325-b7de-496e-b0ad-c5656f898e52.jpg)| ![p3-2](https://user-images.githubusercontent.com/98817564/157217183-72650b4d-85b4-471d-aefd-cb95f28d4a96.jpg) |


|OFF|ON|
|:--:|:--:|
|![p3-3](https://user-images.githubusercontent.com/98817564/157217500-aaebc33e-9206-40de-95d6-db37214fe268.jpg)| ![p3-4](https://user-images.githubusercontent.com/98817564/157217506-c1a52980-0ec6-48a2-92aa-62505056d31f.jpg) |


#### Process 4:

|OFF|ON|
|:--:|:--:|
|![p4-1](https://user-images.githubusercontent.com/98817564/157218166-892a08a2-1ca5-47c6-a053-e96a596689a9.jpg)| ![p4-2](https://user-images.githubusercontent.com/98817564/157218186-7a74c523-7461-4e2a-8294-0a5bbb9b61aa.jpg) |

|OFF|ON|
|:--:|:--:|
|![p4-3](https://user-images.githubusercontent.com/98817564/157218201-46f59f7d-7190-4f6e-a1c8-89d3650324b9.jpg)|![p4-4](https://user-images.githubusercontent.com/98817564/157218213-3247b174-3566-40b8-8371-1a7d47a0dad6.jpg) |







#### TEST PLAN:
### High Level Test plan:
| ID    | Description                             | Expected O/P | Actual O/P | Type of Test |
|-------|-----------------------------------------| ------------ | ---------- | ------------ |
| HL_01  |Front page                   |  Passed   | Successful   |Requirement |
| HL_01  |sensing                          |   Passed     | Successful     | Scenario|
| HL_03  |enable blinking led             | Passed     |Successful    | Boundary   |


### Low Level Test Plan:
| ID    | Description           | Expected O/P | Actual O/P | Type of Test | 
|-------|-----------------------| ------------ | -----------| ------------ |
| LL_01  |Open the app           |   Passed    |    Successful  | Requirement  |
| LL_02  |View the board| Passed        |    Successful | Scenario     |
| LL_03  |Reserve your possible seat     |  Passed      | Successful  | Boundary     |

















 



