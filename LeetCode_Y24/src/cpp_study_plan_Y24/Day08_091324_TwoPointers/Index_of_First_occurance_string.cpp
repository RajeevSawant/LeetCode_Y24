/*
 * Index_of_First_occurance_string.cpp
 *
 *  Created on: Sep 13, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
 Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.



Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.





Appr:

1. traverse through the string
	a. if 1st character matches , note the pos , increment the count
	b. if the count is not equal to the size of needle -1 , the return false


 */


#include <iostream>
using namespace std;



int strStr(string haystack, string needle){

	int h_size = haystack.size(), n_size = needle.size();


	for (int i = 0; i <= (h_size - n_size); i++){
		int j= 0;

		for(; j < n_size; j++){
			if (haystack[i + j] != needle[j]){
				break;
			}
		}

		if (j == n_size){     // Mistake made j in last for loop becomes equal to n_size, in case when needle is present in haystack.
			return i;
		}
	}

	return -1;
}
