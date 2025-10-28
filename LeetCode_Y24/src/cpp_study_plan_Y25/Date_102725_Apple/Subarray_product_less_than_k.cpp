/*
 * Subarray_product_less_than_k.cpp
 *
 *  Created on: Oct 27, 2025
 *      Author: Rajeev Sawant
 */




/*
 * 713. Subarray Product Less Than K

Hint
Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.



Example 1:

Input: nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.
Example 2:

Input: nums = [1,2,3], k = 0
Output: 0
 */



    /*
        - negative numbers ?
        - can number be 0 ?
    */
#include <vector>
#include <iostream>
using namespace std;

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0, right = 0, product = 1, count = 0;

        if (k <= 1) return 0;
        int n = nums.size();

        while(right < n){

            product *= nums[right];
            while (product >= k) {product /= nums[left++];}
            count += 1 + (right  - left);
            right++;
        }

        return count;
    }
