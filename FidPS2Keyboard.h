/*
	PS/2 library for Arduino

	Copyright (c) 2014 Freedelity

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
 */

#ifndef _FREEDELITY__PS2_KEYBOARD_H_
#define _FREEDELITY__PS2_KEYBOARD_H_

#include "Arduino.h"

/*
 * This file contains functions to control a PS/2 keyboard.
 * It gives access to the keyboard input and can write commands to it
 */

void fid_ps2kb_20us();
void fid_ps2kb_init(int dataPin, int clockPin);
void fid_ps2kb_write(uint8_t b);
bool fid_ps2kb_read(uint8_t* b);

#endif
