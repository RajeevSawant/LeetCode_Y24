/*
 * reverse_bits.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: Rajeev
 *
 *
 *
 *
Reverse bits of a given 32 bits unsigned integer.

Note:

Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type.
They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
In Java, the compiler represents the signed integers using 2's complement notation.
Therefore, in Example 2 above, the input represents the signed integer -3 and the output represents the signed integer -1073741825.


Example 1:

Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.
Example 2:

Input: n = 11111111111111111111111111111101
Output:   3221225471 (10111111111111111111111111111111)
Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.


Constraints:

The input must be a binary string of length 32


Follow up: If this function is called many times, how would you optimize it?
 *
 *
 *
 *
 *
 *
 * Appr:
 * Repeat below iteration 32 times.
	 * a. Perform & operation with 0x1 , since & of any binary number with 1 is that number.
	 * b. save the result in res.
	 * c. shift the result to the left by 1.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */




#include <iostream>
#include <cstdint>
using namespace std;


uint32_t reverse_bits(uint32_t val){

	uint32_t res = 0;

	for(int pos = 0; pos < 32; pos++){

		res = res << 1;
		res |= val & 0x1;    // mistake made , save the old value while trying to get the new value.
		val = val >> 1;
	}

	return res;
}


int main(){

	uint32_t inpt = 43261596;

	uint32_t res = reverse_bits(inpt);

	cout << res << endl;
}
