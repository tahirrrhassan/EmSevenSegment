/*
EmSevenSegment
by Suhrid Srivastava
Arduino library to drive multiple-digit 7-segment LED displays using HEF4094B, CD4094B,  CD4094BMS, MC74HCT4094A and other 4094 shift registers.
https://github.com/ssuhrid/EmSevenSegment/
*/

#ifndef CharacterEncoding_h
#define CharacterEncoding_h

// encoding for characters segments (common cathode with LSBFIRST)
const byte NUMBERS[] = {
	//ABCDEFG
	 B01111110, // 0
	 B01001000, // 1
	 B00111101, // 2
	 B01101101, // 3 
	 B01001011, // 4
	 B01100111, // 5
	 B01110111, // 6
	 B01001100, // 7
	 B01111111, // 8
	 B01101111,  // 9 
	 B00000000 // Blank
};

const byte LETTERS[] = {
	//ABCDEFG
	 B11101110, // a
	 B00111110, // b
	 B10011100, // c
	 B01111010, // d
	 B00110111, // e
	 B10001110, // f
	 B10111100, // g
	 B01101110, // h
	 B00001100, // i
	 B01111000, // j
	 B10101110, // k
	 B00011100, // l
	 B11101100, // m
	 B00101010, // n
	 B01111110, // o
	 B00011111, // p
	 B11100110, // q
	 B10001100, // r
	 B10110110, // s
	 B00011110, // t
	 B00111000, // u
	 B01111100, // v
	 B01111110, // w
	 B01101100, // x
	 B01110110, // y
	 B11011010, // z
	 B00000000 // Blank
};

const byte MINUS = B00000010;
const byte BLANK = B00000000;

// encoding for each index in display (common anode with LSBFIRST)
const byte INDEXES[] = {
	B10000000,
	B01000000,
	B00100000,
	B00010000,
	B00001000,
	B00000100,
	B00000010,
	B00000001
};

#endif
