/*
 * longest-common-prefix.cpp
 *
 *  Created on: Sep 7, 2024
 *      Author: Rajeev
 *
 *
 *
 *
 *
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


Ques:
	-> if not string return empty string
	-> how big can the i/p be

Appr:
	-> copy the 1st entry of the array , in a temp string.
	-> compare the characters from 2nd string with temp string
		a. if the character match then keep checking , if they dont then resize the temp string.
		b. check if the temp string has some size left.
 */


#include <iostream>
using namespace std;

typedef long long size_strs;

string longestCommonPrefix(string* strs, size_strs size){

	if (size <= 0) return "";

	string vars = "", res = "";

	res = strs[0];
	for(int val = 1; val < size; val++){
		vars = strs[val];

		for(int vars_ec = 0; vars_ec < vars.size(); vars_ec++){

			if (res[vars_ec] != vars[vars_ec]){
				res.resize(vars_ec);
				continue;
			}
		}

		if (res.size() <= 0) return "";
	}

	return res;
}
