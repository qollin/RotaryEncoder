/*
 * RotaryEncoder.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: collin
 */

#include <RotaryEncoder.h>

RotaryEncoder::RotaryEncoder(uint8_t pinA, uint8_t pinB, PinBank* pinBank) : pinA(pinA), pinB(pinB), pinBank(pinBank) {
}

void RotaryEncoder::callback() {
	int8_t a = pinBank->digitalRead(pinA);
	int8_t b = pinBank->digitalRead(pinB);

	if (a != b) {
		lastValueA = a;
	}  else {
		  if (a == 0) {
			  if (lastValueA == 1) {
				  value++;
			  } else {
				  value--;
			  }
		  } else {
			  if (lastValueA == 0) {
				  value++;
			  } else {
				  value--;
			  }
		  }
	  }
}

int8_t RotaryEncoder::getValue() const {
	return value;
}
