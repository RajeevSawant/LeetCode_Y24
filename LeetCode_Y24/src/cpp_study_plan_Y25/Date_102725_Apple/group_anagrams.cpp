/*
 * group_anagrams.cpp
 *
 *  Created on: Oct 27, 2025
 *      Author: Rajeev Sawant
 */




/*
 * 49. Group Anagrams

Given an array of strings strs, group the anagrams together. You can return the answer in any order.



Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:

Input: strs = [""]

Output: [[""]]

Example 3:

Input: strs = ["a"]

Output: [["a"]]
 */


#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string , vector<string>> mp;

        for(string st: strs){
            string sorted = st;
            std::sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(st);
        }

        unordered_map<string , vector<string>> :: iterator o = mp.begin();

        while(o != mp.end()){
            res.push_back(o -> second);
            o++;
        }

        return res;
    }
