/*
 * Kith-largest-element-in-an-array.cpp
 *
 *  Created on: Sep 27, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *      **** We are trying to solve the same problem without using sorting algorithm.
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




approach:
Quickselect, also known as Hoare's selection algorithm, is an algorithm for finding the k
th
  smallest element in an unordered list. It is significant because it has an average runtime of O(n).

Quickselect uses the same idea as Quicksort. First, we choose a pivot index. The most common way to choose the pivot is randomly. We partition nums into 3 sections: elements equal to the pivot, elements greater than the pivot, and elements less than the pivot.

Next, we count the elements in each section. Let's denote the sections as follows:

left is the section with elements less than the pivot
mid is the section with elements equal to the pivot
right is the section with elements greater than the pivot
Quickselect is normally used to find the k
th
  smallest element, but we want the k
th
  largest. To account for this, we will swap what left and right represent - left will be the section with elements greater than the pivot, and right will be the section with elements less than the pivot.

If the number of elements in left is greater than or equal to k, the answer must be in left - any other element would be less than the k
th
  largest element. We restart the process in left.
 */


#include <vector>
#include <iostream>
using namespace std;


int quickSelect(vector<int>& nums, int k){

	int pivot = nums[rand() % nums.size()];

	vector<int> left;
	vector<int> right;
	vector<int> mid;

	for (int num: nums){

		if (num > pivot){
			right.push_back(num);
		}else if (num < pivot){
			left.push_back(num);
		}else{
			mid.push_back(num);
		}

	}

	if (k <= right.size()){
		return quickSelect(right, k);
	}

	if (right.size() + mid.size() < k){
		return quickSelect(left, k - right.size() - mid.size());
	}

	return pivot;
}

int findKthLargest(vector<int>& nums, int k){

	return quickSelect(nums, k);

}
