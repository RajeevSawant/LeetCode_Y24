/*
 * Largest_Unique_Number.cpp
 *
 *  Created on: Oct 2, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 * Given an integer array nums, return the largest integer that only occurs once.
 * If no integer occurs once, return -1.



Example 1:

Input: nums = [5,7,3,9,4,9,8,3,1]
Output: 8
Explanation: The maximum integer in the array is 9 but it is repeated. The number 8 occurs only once, so it is the answer.
Example 2:

Input: nums = [9,9,8,8]
Output: -1
Explanation: There is no number that occurs only once.
 */


#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;





int partition(vector<int>& nums, int low, int high){
	int pivot = nums[high];

	int i = (low - 1);


	for (int j = low; j <= high - 1; j++){
		if (nums[j] <= pivot){
			i++;
			swap(nums[i], nums[j]);
		}
	}


	swap(nums[i + 1], nums[high]);

	return (i + 1);
}


void quickSort(vector<int>& nums, int low , int high){

	if (low < high){

		int pi = partition(nums, low, high);

		quickSort(nums, low, pi - 1);
		quickSort(nums, pi + 1, high);
	}
}



int largestUniqueNumber(vector<int>& nums){

	int count[1001] = {0};


	for (int num: nums){
		count[num]++;
	}

	quickSort(nums, 0, nums.size() - 1);


	int largestNumber = -1;
	for(int i = nums.size() - 1; i >= 0; i--){
		if (count[nums[i]] == 1){
			largestNumber = nums[i];
			break;
		}
	}

	return largestNumber;


}

