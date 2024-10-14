/*
 * Largest_Number.cpp
 *
 *  Created on: Oct 13, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *      179. Largest Number
 *
 *      Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.



Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
 */

#include <string>
#include <iostream>
#include <vector>
using namespace std;


    static bool mycomp(string a, string b){
        string s1 = a + b;
        string s2 = b + a;

        return s1 > s2;
    }


    string largestNumber(vector<int>& nums) {
        vector<string> ans;

        for(int i = 0; i < nums.size(); i++){
            ans.push_back(to_string(nums[i]));
        }

        sort(ans.begin(), ans.end(), mycomp);

        if (ans[0] == "0"){
            return "0";
        }

        string main = "";

        for(int i = 0; i < ans.size(); i++){
            main += ans[i];
        }

        return main;
    }
