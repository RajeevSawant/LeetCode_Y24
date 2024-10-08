/*
 * remove-all-Adjacent-duplciates-in-string.cpp
 *
 *  Created on: Oct 8, 2024
 *      Author: Rajeev Sawant
 *
 *
 *1047. Remove All Adjacent Duplicates In String
 *
 *
 *      You are given a string s consisting of lowercase English letters.
 *      A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.



Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.
The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
 */

#include <string>
#include <iostream>
using namespace std;

string removeDuplicates(string s) {
	string ans;
	ans.push_back(s[0]);

	for(int i=1 ; i<s.length() ; i++){

		if(!ans.empty() && s[i] == ans.back()){
			ans.pop_back();
		}
		else{
			ans.push_back(s[i]);
		}
	}

	return ans;

}

