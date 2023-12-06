# External-Button-and-LED-Usage-with-STM32F407-Driver-File
This application is an example of using an external push button and external LED with STM32F407xx series microcontroller. <br />
It toggles the LED whenever the button is pressed.<br />

The source code was written using the created STM32 Driver File. The STM32 Driver File will be loaded seperately when the GPIO section is completed.<br />

Used equipments<br />
---------------<br />
1 x External Push Button<br />
1 x External LED<br />
STM32-DISC1 Development Kit<br />
2 x MM, 3xMF Jumper<br />
1 x 180-500 Ohm Resistor( for diode protection )<br />
<br />
<br />
!!!!! Pins below must not be used for STM32F407xx series microcontrollers. ( Check the datasheet and reference manual for details. ) !!!!!!<br />
PA15: JTDI in pull-up<br />
PA14: JTCK/SWCLK in pull-down<br />
PA13: JTMS/SWDAT in pull-up<br />
PB4: NJTRST in pull-up<br />
PB3: JTDO in floating state<br />
<br />
Circuit Diagram ( TincerCad )<br />
![image](https://github.com/muhammedceberli/External-Button-and-LED-Usage-with-STM32F407-Driver-File/assets/93437771/4a61c1c2-3d3b-49a3-9714-a80c4c5f65f2)<br />

Breadboard Connections and Results<br />
![image](https://github.com/muhammedceberli/External-Button-and-LED-Usage-with-STM32F407-Driver-File/assets/93437771/401c75cc-35ae-4dff-8d52-53ea85361dc5)<br />
( before the button is pressed )<br />

![image](https://github.com/muhammedceberli/External-Button-and-LED-Usage-with-STM32F407-Driver-File/assets/93437771/4aa6e859-ad4d-445a-86be-4bddd4c7c50c)<br />
( after the button is pressed )



