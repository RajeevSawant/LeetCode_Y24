/*
 * Divide_two_integers.cpp
 *
 *  Created on: Sep 18, 2024
 *      Author: Rajeev Sawant
 *
 *
 Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.



Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2.




 */

#include <iostream>
#include <cstdlib>
using namespace std;

int divide (int dividend, int divisor){

	if (!divisor || (dividend == INT_MIN && divisor = -1))
		return INT_MAX;

	int sign = ((dividend > 0) ^ (divisor > 0)) ? -1 : 1;


	long long dvd = labs(dividend);
	long long dvr = labs(divisor);
	long long res = 0;


	while (dvd >= dvr){
		long long temp = dvr, multiple = 1;

		while(dvd >= (temp << 1)){
			temp = temp << 1;
			multiple <<= 1;
		}

		dvd -= temp;
		res += multiple;
	}


	return sign * res;

}


