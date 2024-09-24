/*
 * Container_with_most_water.cpp
 *
 *  Created on: Sep 23, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 You are given an integer array height of length n.
 There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.



Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7].
In this case, the max area of water (blue section) the container can contain is 49.
 */


#include <iostream>
using namespace std;

int maxArea (int *height, int height_size){

	int lo = 0, hi = height_size - 1, maxValue = INT_MIN;

	while(lo < hi){

		maxValue = max(maxValue , ((hi - lo)*min(height[hi], height[lo])));

		if (height[lo] < height[hi]){
			lo++;
		}else{
			hi--;
		}
	}


	return maxValue;
}
