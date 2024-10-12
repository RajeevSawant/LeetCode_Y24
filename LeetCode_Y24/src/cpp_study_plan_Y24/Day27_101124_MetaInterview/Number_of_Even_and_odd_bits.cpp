/*
 * Number_of_Even_and_odd_bits.cpp
 *
 *  Created on: Oct 12, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
		2595. Number of Even and Odd Bits
 *
 *
 *      You are given a positive integer n.

Let even denote the number of even indices in the binary representation of n with value 1.

Let odd denote the number of odd indices in the binary representation of n with value 1.

Note that bits are indexed from right to left in the binary representation of a number.

Return the array [even, odd].
 *
 *
 */

#include <iostream>
#include <vector>
using namespace std;


    vector<int> evenOddBit(int n) {
        int even  = 0, odd = 0, count = 0;
        vector<int> result;
        while(n){
            if (n & 1){
                if (!(count % 2)){
                    even++;
                }else{
                    odd++;
                }
            }
            count++;
            n >>= 1;
        }

        return {even, odd};
    }
