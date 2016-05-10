# Vehicle Ignition Mode Indicator Module

            I have made PCB layout for vehicle ignition mode indicator module . This repo contains :-
                     
                     1> Switch.dsn ( Circuit simulation file for Proteus ISIS )
                     2> Switch.lyt ( PCB Layout file for Proteus ARES )
                     3> Switch.ino ( arduino code for Atmega328P Microcontroller )
                     4> Switch.hex ( generated HEX file for Atmega328P )
                     5> Switch ( without terminal block ).dsn
                    
## Components Used

            1> Atmega328P Microcontroller.
            2> Resistors :- 430 ohm , 180 ohm , 10k ohm
            3> Red Led ( 20 mA , 1.9 V )
            4> OptoCoupler
            5> Zener Diode ( 2.4 V )
                     
## Circuit Descripion

This module is divided into two isolated circuits . One is input from Car ignition switch and other is output circuit . 
Two port device , optocoupler isolates the two circuits . It is for safety of microcontroller . 2.4 V Zener diode is used for safety of optocoupler Led and to remove noise . Red LED is used as indicator .

## Working

When car is in ignition mode , optocoupler act as input to microcontoller . This device takes noisy +12 V input . 2.4 V voltage drop across zener diode . Optocoupler switches on and microcontroller senses LOGIC LOW on pin 3 . It turns output pin 4 from HIGH to LOW which glows LED .


###NOTE :

If model for terminal block is not available in your proteus ISIS then " Switch.dsn " will not simulate . Use " Switch ( without terminal block ) .dsn " for simulation .
