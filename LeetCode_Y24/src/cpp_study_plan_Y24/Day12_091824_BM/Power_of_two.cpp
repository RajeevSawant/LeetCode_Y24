/*
 * Power_of_two.cpp
 *
 *  Created on: Sep 18, 2024
 *      Author: Rajeev Sawant
 *
 *
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.



Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false



approach:
- if there is only 1 bit set in the input integer
	- then is a power of 2
	- else its not

 */

#include <iostream>
using namespace std;

bool isPowerofTwo(int nums){

	int count = 0;

	while(nums){

		if (nums & 0x1){
			count++;
		}

		nums >>= 1;
	}

	return (count == 1);
}


