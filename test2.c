// designed for and tested with ATTiny44A
#include <avr/io.h>
#define F_CPU 1000000UL
#include <avr/delay.h>
#include <avr/interrupt.h>

void beep(){
	for(char i=50;i;i--){
		PORTB|=_BV(3);_delay_ms(1);
		PORTB&=~_BV(3);_delay_ms(1);
	}
}

void rest(){_delay_ms(100);}

void dot(){beep();rest();}
void dash(){beep();beep();beep();rest();}
void space(){rest();rest();}
void space2(){space();space();}

FUSES=
{
	.low = LFUSE_DEFAULT & FUSE_CKOUT,
	.high = HFUSE_DEFAULT,
	.extended = EFUSE_DEFAULT,
};

int main(){
	DDRB|=_BV(3);
	for(;;){
		dot();dot();dot();space(); 			// S
		dash();dot();dash();dot();space(); 	// C
		dash();dash();dash();space(); 		// O
		dash();space(); 					// T
		dash();space(); 					// T
		space2();
		dot();dash();dot();space();			// R
		dash();dash();dash();space(); 		// O
		dash();dot();dash();dot();space(); 	// C
		dash();dot();dash();space();		// K
		dot();dot();dot();space(); 			// S
		_delay_ms(1000); // silence
	}
	return 0;
}
