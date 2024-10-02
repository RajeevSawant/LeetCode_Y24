/*
 * Longest-consecutive-sequence.cpp
 *
 *  Created on: Sep 29, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *      128. Longest Consecutive Sequence

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.



Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
 */



#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums){
	unordered_set<int> num_set(nums.begin(), nums.end());

	int longestStreak = 0;

	for (int num: num_set){
		if (!num_set.count(num - 1)){
			int currentNum = num;
			int currentStreak = 1;

			while(num_set.count(currentNum + 1)){
				currentStreak++;
				currentNum++;
			}

			longestStreak = max(longestStreak, currentStreak);
		}
	}

	return longestStreak;


}



// T: O(N) , S: O(N)
