/*
 * Kth_largest_element_in_an_array.cpp
 *
 *  Created on: Sep 21, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?



Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
 */


#include <vector>
#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(vector<int>& nums, int lo, int hi){

	int pivot = nums[hi];

	int i = lo - 1;

	for(int j = lo; j <= hi - 1; j++){

		if (nums[j] <= pivot){
			i++;
			swap(&nums[i], &nums[j]);
		}
	}

	swap(&nums[i + 1], &nums[hi]);

	return (i + 1);
}

void quicksort(vector<int>&  nums , int lo, int hi){

	if (lo < hi){

		int pi = partition(nums, lo, hi);

		quicksort(nums, lo, pi - 1);
		quicksort(nums, pi + 1, hi);
	}
}


int findKthlargest (vector<int>& nums, int k){
	int n = nums.size();

	quicksort(nums, 0, n - 1);

	return nums[n - k];
}

