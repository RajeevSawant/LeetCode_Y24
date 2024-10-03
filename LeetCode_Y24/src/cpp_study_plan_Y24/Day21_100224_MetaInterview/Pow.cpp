/*
 * Pow.cpp
 *
 *  Created on: Oct 2, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 Implement pow(x, n), which calculates x raised to the power n (i.e., xn).



Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
 */



double myPow(double x, int n){

	if (n == 0)
		return 1;

	if (n == 1)
		return x;

	if (n == -1)
		return 1/x;


	return myPow(x, n%2) * myPow(x*x, n/2);
}
