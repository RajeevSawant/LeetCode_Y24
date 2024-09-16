/*
 * add_binary.cpp
 *
 *  Created on: Sep 15, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
Given two binary strings a and b, return their sum as a binary string.


Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 */

#include <iostream>
#include <string>
using namespace std;

string add_string(string a, string b){

	int i = a.size() -1, j = b.size() -1;

	int c = 0;
	string res = "";

	while ((i >= 0) || (j >= 0) || c){
		c += (i >= 0) ? a[i--] - '0' : 0;
		c += (j >= 0) ? b[j--] - '0' : 0;
		res = to_string (c % 2) + res;
		c /= 2;
	}

	return res;
}
