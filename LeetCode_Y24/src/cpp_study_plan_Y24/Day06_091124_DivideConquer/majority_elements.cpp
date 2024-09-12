/*
 * majority_elements.cpp
 *
 *  Created on: Sep 11, 2024
 *      Author: Rajeev Sawant
 *
 *
 Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 *
 *
 *
 *Appr:
 *	1. check if the array is even or odd
 *		a. incase of odd , if a value appears more than n/2 times then return the number
 *
 *
 */


int majorityElements(int *nums , int size){

		int count = 0, major = 0;


		for (int pos = 0; pos < size; pos++){

			if(!count){
				count = 1;
				major = nums[pos];
			}else{
				count += (major == nums[pos])? 1 : -1;
			}
		}

		return major;

}



