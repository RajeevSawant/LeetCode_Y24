/*
 * valid_palindrome.cpp
 *
 *  Created on: Sep 13, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
 *
 *
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 *
 *
 *
 *
 *
 *
 *Approach:
 *	a. convert the input string to a valid string
 *		aa. valid string converts all upper case letter to lower case and removes all spaces or additional characters.
 *		bb. Once valid string is generated we return the valid string.
 *	b. checks if the valid string is palindrome.
 */

#include<iostream>
using namespace std;


bool isAlnum(char c){


	if ((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		return true;
	}

	return false;
}


char tolower(char c){

	if (c >= 'A' && c <= 'Z'){
		return c + ('a' - 'A');
	}

	return c;
}

bool valid_paranthesis(string s){

	int start = 0, end = s.size() - 1;


	for (; start < end; start++, end--){

		while(isAlnum(s[start]) == false && start < end) start++;
		while(isAlnum(s[end]) == false && start < end) end--;

		if (tolower(s[start]) != tolower(s[end])){
			return false;
		}

	}

	return true;
}





