/*
 * Trapping_Rain_Water.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.


Example 1:
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]

Output: 6

Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
In this case, 6 units of rain water (blue section) are being trapped.


Example 2:

Input: height = [4,2,0,3,2,5]

 */


#include <vector>
using namespace std;

int trap(vector<int>& heights){

	int ans = 0;
	int size = heights.size();

	for (int i = 1; i < size - 1; i++){
		int left_max = 0, right_max = 0;


		for(int j = i; j >= 0; j--){
			left_max = max(left_max, heights[j]);
		}

		for(int j = i; j < size; j++){
			right_max = max(right_max, heights[j]);
		}

		ans += min(left_max, right_max) - heights[i];
	}

	return ans;

}


// T: O(N^2) S: O(1)

