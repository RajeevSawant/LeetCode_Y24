/*
 * single_number.cpp
 *
 *  Created on: Sep 14, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.



Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 */




int singleNumber(int *nums, int size){

	int local = nums[0];

	for(int pos = 1; pos < size; pos++){
		local ^= nums[pos];
	}

	return local;
}
