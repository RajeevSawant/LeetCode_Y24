/*
 * isomorhic_strings.cpp
 *
 *  Created on: Sep 15, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters.
No two characters may map to the same character, but a character may map to itself.



Example 1:

Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
Example 2:

Input: s = "foo", t = "bar"

Output: false

Explanation:

The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

 */


#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    int m[256] = {0}, n[256] = {0};

    if (s.size() != t.size())
        return false;

    for (int i = 0; i < s.size(); i++){
        if (m[s[i]] != n[t[i]])
            return false;

        m[s[i]] = i + 1;
        n[t[i]] = i + 1;
    }

    return true;
}

