/*
 * Add_String.cpp
 *
 *  Created on: Oct 7, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
 *      415. Add Strings
 *
 *      Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger).
You must also not convert the inputs to integers directly.



Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"

 */


    string addStrings(string nums1, string nums2) {
        int i = nums1.size() -1, j = nums2.size() -1, carry = 0;
        string result = "";

        while(i >= 0 || j >= 0){
            if (i >= 0) {carry += nums1[i--] - '0';}
            if (j >= 0) {carry += nums2[j--] - '0';}

            result = to_string(carry % 10) + result;
            carry /= 10;
        }

        return carry ? to_string(carry) + result : result;
    }

