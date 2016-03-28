// Put a nice header here with your name, date, and lab description

#include <avr/io.h>		// Always include this
#include <stdio.h>		// If you want to use printf
#include "lcd.h"

static FILE lcd_stdout=FDEV_SETUP_STREAM(lcd_putc,NULL,_FDEV_SETUP_WRITE);

// Put your "#define" directives here.
// These "#defines" will allow you to say for example, 
//	if (RIGHT_BUTTON == PUSHED) {do something}

#define PUSHED 1
#define RIGHT_BUTTON ((PINA&_BV(PIN3)) >> 3)
#define LEFT_BUTTON ((PINA&_BV(PIN0)) >> 0)

#define LEFTMOST 0b10000000
#define RIGHTMOST 0b00000001

int main(void) {
// put your "enum" for "left_serve", "right_serve", etc. here


// Include the following variable declarations here 
	char state;		// This variable holds the current state 
	char leds;		// Current "court" --- inverse of PORTC

	lcd_init();		// If you want to write to the LCD
	stdout=&lcd_stdout;

// Required setup for I/O pins	
	DDRD = 0xFF;		// All PORTD pins are outputs
	DDRA = 0x10;		// PORTA pin 4 is an output, rest inputs
	PORTA |= 0x10;		// Only pin 4 is important - should be 1

// Initialize "state" to "left_serve" here	

	
//
//  Your main code goes here - Simply put the body of the functions from CodeLab
//  here, that is, put code to adjust the "state", adjust the LED pattern, write
//  to the LEDs and delay into an infinite loop.
//
		
}		// Don't forget this ending brace
