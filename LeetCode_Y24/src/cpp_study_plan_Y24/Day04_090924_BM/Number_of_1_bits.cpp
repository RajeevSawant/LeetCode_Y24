/*
 * Number_of_1_bits.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: Rajeev
 *
 *
 *
 *
 *
 *
 *
Write a function that takes the binary representation of a positive integer and returns the number of
set bits
 it has (also known as the Hamming weight).



Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Example 2:

Input: n = 128

Output: 1

Explanation:

The input binary string 10000000 has a total of one set bit.

Example 3:

Input: n = 2147483645

Output: 30

Explanation:

The input binary string 1111111111111111111111111111101 has a total of thirty set bits.



Constraints:

1 <= n <= 231 - 1


Follow up: If this function is called many times, how would you optimize it?
 *
 *
 *
 *
 *
 *
 *
 * Appr:
 *
 * a. Traverse through all 32 bits.
 * 		aa. check if the bit is set , if bit is set than increase the count.
 *
 */



#include <iostream>
using namespace std;


int hammingWeight(int n){

	int nBitCount = 0;

	for (int pos = 0; pos < 32; pos++){

		if(n & 0x01){
			nBitCount++;
		}

		n = n >> 1;
	}

	return nBitCount;
}




int main(){

	int val = 2147483645;

	int res = hammingWeight(val);

	cout << res << endl;

	return 0;
}
