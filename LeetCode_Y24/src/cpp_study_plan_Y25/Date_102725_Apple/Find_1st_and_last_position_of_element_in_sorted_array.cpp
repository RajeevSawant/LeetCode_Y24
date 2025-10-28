/*
 * Find_1st_and_last_position_of_element_in_sorted_array.cpp
 *
 *  Created on: Oct 27, 2025
 *      Author: Rajeev Sawant
 */


/*
 *
 *
34. Find First and Last Position of Element in Sorted Array



Solved
Medium
Topics
conpanies icon
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 */



#include <vector>
#include <iostream>
using namespace std;

int searchPos(vector<int>& nums, int target){

	int hi = nums.size() - 1, lo = 0, mid = 0;


	while(lo <= hi){

		mid = lo + (hi - lo)/ 2;

		if (nums[mid] < target){
			lo = mid + 1;
		}else{
			hi = mid - 1;
		}

	}

	return lo;
}


vector<int> searchRange(vector<int>& nums, int target){

	int first = searchPos(nums, target);
	int second = searchPos(nums, target + 1) - 1;

	if (first <= second){
		return {first, second};
	}else{
		return {-1, -1};
	}
}






