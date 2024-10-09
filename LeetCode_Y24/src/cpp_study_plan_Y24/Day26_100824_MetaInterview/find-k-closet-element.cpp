/*
 * find-k-closet-element.cpp
 *
 *  Created on: Oct 8, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *      Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array.
 *      The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b


Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3

Output: [1,2,3,4]

Example 2:

Input: arr = [1,1,2,3,4,5], k = 4, x = -1

Output: [1,1,2,3]
 */



    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int r=arr.size()-k;
        while(l<r){
            int m= l + (r-l)/2;
            if(x-arr[m]<=arr[m+k]-x){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        return vector<int>(arr.begin()+l, arr.begin()+l+k);
    }
