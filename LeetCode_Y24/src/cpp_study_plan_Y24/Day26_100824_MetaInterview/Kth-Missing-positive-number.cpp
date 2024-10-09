/*
 * Kth-Missing-positive-number.cpp
 *
 *  Created on: Oct 8, 2024
 *      Author: Rajeev Sawant
 *
 *
 *      1539. Kth Missing Positive Number
 *
 *
 *      Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.



Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 */



    int findKthPositive(vector<int>& arr, int k) {
        for (int num: arr){
            if (num <= k){
                k++;
            }else{
                break;
            }
        }

        return k;
    }


/*
 *
Approach 1: Brute Force, O(N) time
The first idea is to solve the problem in a linear time by parsing all array elements.
We iterate through the given array arr, which contains sorted positive integers.
For each element num in the array, if it is less than or equal to k, it means one less number is missing, so we increment k.
If num is greater than k, we stop because the missing number lies outside the range of the current numbers in arr.
By the end of the loop, we return the k-th missing number.

img
Figure 1. Approach 1. Iterate over the array and compute the number of missing numbers in-between the elements.

Algorithm

Iterate through each number num in the array arr:

If the current num is less than or equal to k, increment k.
This step accounts for the missing positive integers.
If the number is less than or equal to k, it means we've encountered an actual element of the sequence,
so the k-th missing positive integer is pushed further by one.
If the current num is greater than k, break out of the loop.
This happens because there’s no need to continue iterating once we’ve passed the range where the k-th missing integer could exist.
Return the updated value of k as the final result, which represents the k-th missing positive integer.
 */
