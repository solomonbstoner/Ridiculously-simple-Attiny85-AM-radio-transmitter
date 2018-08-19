#include <avr/io.h>
#include <util/delay.h>

int main (void){
    DDRB |= 8;    
    while(1){
        PORTB ^= 8;
        _delay_ms(1000);    
    }
}

