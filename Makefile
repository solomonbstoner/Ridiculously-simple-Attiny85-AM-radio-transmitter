avr-gcc -Os -mmcu=attiny85 -c test.c 
avr-gcc -mmcu=attiny85 -o test.elf test.o
avr-objcopy -O ihex test.elf test.hex
sudo avrdude -c stk500v1 -p attiny85 -P /dev/ttyACM0 -b 19200 -U lfuse:w:0b00100010:m -U flash:w:test.hex
