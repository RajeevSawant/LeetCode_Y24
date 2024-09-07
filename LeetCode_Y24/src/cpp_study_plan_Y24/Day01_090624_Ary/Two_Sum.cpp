/*
 * Two_Sum.cpp
 *
 *  Created on: Sep 6, 2024
 *      Author: Rajeev Sawant
 *
 *
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 */






#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> twoSums(vector<int>& nums, int target){

	vector<int> res;

	unordered_map<int, int> mp;

	int numx = 0, numsSize = nums.size();

	for(int val = 0; val < numsSize; val++){
		numx = target - nums[val];

		if(mp.find(numx) != mp.end()){
			res.push_back(val);
			res.push_back(mp[numx]);
		}

		mp[nums[val]] = val;
	}

	return res;
}


int main(){

	vector<int> input {2, 7, 11, 15};
	int target = 9;

	vector<int> res = twoSums(input, target);

	cout << "Indices of the two number  [ ";
	for(int val: res){
		cout << val << " ";
	}
	cout <<"]"<< endl;

	return 0;
}
