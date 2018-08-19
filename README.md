
I am adapting the project on this website to ATTINY85:

https://www.swharden.com/wp/2011-08-06-ridiculously-simple-avr-mcu-am-radio-transmitter/

To do so, I need to program the ATTINY85 clkout pin and a regular digital io pin as output. This website was useful in teaching how to use regular arduino C functions to program the ATTINY85.

https://www.hackster.io/arjun/programming-attiny85-with-arduino-uno-afb829

But it does not teach how to configure the clkout pin. So, I found a different way to program the ATTINY85, hoping that it will give me the ability to configure the pins for alternative functions (e.g. clkout) the same way I did for my TM4C123. These websites below are a guide on how to do so.

http://forum.arduino.cc/index.php?topic=335453.0
https://www.instructables.com/id/AVR-Programming-with-Arduino-AVRdude-and-AVR-gcc/

This forum question asking how to send system clock output to a pin might come in handy too.

https://www.avrfreaks.net/forum/sending-system-clock-output
