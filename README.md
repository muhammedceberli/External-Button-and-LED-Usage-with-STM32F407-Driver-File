# External-Button-and-LED-Usage-with-STM32F407-Driver-File
This application is an example of using an external push button and external LED with STM32F407xx series microcontroller. 
It toggles the LED whenever the button is pressed.

The source code was written using the created STM32 Driver File. The STM32 Driver File will be loaded seperately when the GPIO section is completed.

Used equipments
---------------
1 x External Push Button
1 x External LED
STM32-DISC1 Development Kit
2 x MM, 3xMF Jumper
1 x 180-500 Ohm Resistor( for diode protection )


!!!!! Pins below must not be used for STM32F407xx series microcontrollers. ( Check the datasheet and reference manual for details. ) !!!!!!
PA15: JTDI in pull-up
PA14: JTCK/SWCLK in pull-down
PA13: JTMS/SWDAT in pull-up
PB4: NJTRST in pull-up
PB3: JTDO in floating state

Circuit Diagram ( TincerCad )
![image](https://github.com/muhammedceberli/External-Button-and-LED-Usage-with-STM32F407-Driver-File/assets/93437771/4a61c1c2-3d3b-49a3-9714-a80c4c5f65f2)

Breadboard Connections and Results
![image](https://github.com/muhammedceberli/External-Button-and-LED-Usage-with-STM32F407-Driver-File/assets/93437771/401c75cc-35ae-4dff-8d52-53ea85361dc5)
( before the button is pressed )

![image](https://github.com/muhammedceberli/External-Button-and-LED-Usage-with-STM32F407-Driver-File/assets/93437771/4aa6e859-ad4d-445a-86be-4bddd4c7c50c)
( after the button is pressed )



