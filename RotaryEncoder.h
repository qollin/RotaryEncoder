/*
 * RotaryEncoder.h
 *
 *  Created on: Feb 13, 2015
 *      Author: collin
 */

#ifndef ROTARYENCODER_H_
#define ROTARYENCODER_H_

#include "PinBank.h"
#include <stdint.h>

class RotaryEncoder {
public:
	RotaryEncoder(uint8_t pinA, uint8_t pinB, PinBank* pinBank);
	void callback();
	int8_t getValue() const;
private:
	uint8_t pinA, pinB;
	PinBank* pinBank;
	uint8_t lastValueA;
	uint8_t value;
};

#endif /* ROTARYENCODER_H_ */
