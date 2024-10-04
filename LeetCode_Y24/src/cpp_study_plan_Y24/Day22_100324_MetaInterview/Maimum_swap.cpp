/*
 * Maimum_swap.cpp
 *
 *  Created on: Oct 3, 2024
 *      Author: Rajeev Sawant
 *
 *
 You are given an integer num.
 You can swap two digits at most once to get the maximum valued number.

Return the maximum valued number you can get.



Example 1:

Input: num = 2736
Output: 7236
Explanation: Swap the number 2 and the number 7.
Example 2:

Input: num = 9973
Output: 9973
Explanation: No swap.
 */




#include <iostream>
#include <string>
using namespace std;


static int getmax(string s, int i){
	int max = i;

	for (int j = i; j < s.length(); j++){
		if (s[max] <= s[j]){
			max = j;
		}
	}

	return max;
}


int maximumSwap(int num){

	string s = to_string(num);
	string s1 = s;

	for(int i = 0; i < s.length(); i++){
		int max_val = getmax(s, i);
		swap(s[i], s[max_val]);

		if (s1 != s){
			break;
		}
	}

	int number = stoi(s);

	return number;
}



// T: O(log(n))

/*
 *
 * We will follow a greedy approach in this problem. We will convert the number to a string. We can make atmost 1 swaps so we will try to get the max digit present in that number.

We can create a helper function to do the same. Then, we start iteration and as we get our first element in string, we swap it with the max digit. If after swap, we get the same string as we had before, it means the digit at current index was also the max one. So, we need to keep checking with the second number.

If those two are unequal then we break out and return the new number. But if they are equal, we search for maximum digit again but this time only from that index till last, we will not consider any digit before that index as it will spoil our intentions. So, basically we need to search for max element in the string from index i till end.

We keep swapping and checking at each step. And this way, we can easily solve this problem. This also enables us to solve problems which allows more than one swap by simply counting the number of swaps we did and breaking the loop when we exceed our allowed number of swaps.

Hope you find it insightfull. Any improvements are welcome!
 */
