/*
 * subarray_sum_equals_k.cpp
 *
 *  Created on: Oct 5, 2024
 *      Author: Rajeev Sawant
 *
 *
560. Subarray Sum Equals K

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.



Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 */


#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k){

	unordered_map<int, int> hash;

	int sum = 0, res = 0;
	hash[0] = 1;

	for(int i = 0; i < nums.size(); i++){

		sum += nums[i];

		if (hash[sum - k]){
			res += hash[sum - k];
		}

		hash[sum]++;
	}

	return res;

}

