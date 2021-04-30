# Embedded_C

##  Activity - Seat Heating Application 

---
# Introduction:
This Application is designed to control the temperature of the Seat in a Vehicle. The application checks the presence of a person inside the vehicle i.e., is the person seated on the seat or not. Simultaneously it also check if the heater switch is on or off. If both the switches are on, the LED glows. The ADC measures the temperature reading. This temperature reading is further utilized to set the PWM duty cycle which will control the temperature of the seat according to the table shown below.

|ADC value|Output PWM(Duty Cycle)|Temperature|
|:--:|:--:|:--:|
|0-200|20%|20°C|
|210-500|40%|25°C|
|510-700|70%|29°C|
|710-1024|90%|33°C|

The whole Activity is divided into 4 sub-activities as mentioned:


### Activity 1
 Turn on led when the passenger is seated on the seat and the heater is turned on.
### Activity 2
 Measure the temperature using the temperature sensor annd the ADC of the microcontroller.
### Activity 3
 Generate PWM pulses according to the ADC values and displaying it on a CRO.

### Activity 4
 Send temperature data serially from the micro-controller to external Display using UART protocol.
 
### Final Image of program
 ![Final image](https://github.com/SMIT17021/259893_Embedded/blob/main/Simulation/Embedded.png)

CI and Code Quality
---
|Cppcheck|Code Quality|
|:--:|:--:|
|[![CI](https://github.com/SMIT17021/259893_Embedded/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/SMIT17021/259893_Embedded/actions/workflows/cppcheck.yml)|https://www.code-inspector.com/project/22147/status/svg |
