/*
 * Longest_Nice_Substring.cpp
 *
 *  Created on: Sep 21, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *A string s is nice if, for every letter of the alphabet that s contains, it appears both in uppercase and lowercase.
 *A For example, "abABB" is nice because 'A' and 'a' appear, and 'B' and 'b' appear. However, "abA" is not because 'b' appears, but 'B' does not.

Given a string s, return the longest substring of s that is nice. If there are multiple, return the substring of the earliest occurrence.
If there are none, return an empty string.



Example 1:

Input: s = "YazaAay"
Output: "aAa"
Explanation: "aAa" is a nice string because 'A/a' is the only letter of the alphabet in s, and both 'A' and 'a' appear.
"aAa" is the longest nice substring.

 */


#include <iostream>
#include <string>
using namespace std;

bool check(string s){

	for (int i = 0; i < s.size(); i++){
		char c = s[i];

		if (c <= 90) c += 32;
		else{
			c -= 32;
		}

		if (s.find(c) == string::npos) return false;
	}

	return true;

}

string longestNiceSubstring(string s){
	string ans = "";

	for(int i = 0; i < s.size(); i++){
		string res = "";
		res += s[i];

		for (int j = i + 1; j < s.size(); j++){
			res += s[j];

			if (check(res) && (res.size() > ans.size())){
				ans = res;
			}
		}

	}

	return ans;

}
