/*
 * Cut_Wood.cpp
 *
 *  Created on: Sep 25, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 * Given an int array wood representing the length of n pieces of wood and an int k.
 *  It is required to cut these pieces of wood such that more or equal to k pieces of the same length len are cut.
 *  What is the longest len you can get?

Example 1:

Input: wood = [5, 9, 7], k = 3
Output: 5
Explanation:
5 -> 5
9 -> 5 + 4
7 -> 5 + 2
Example 2:

Input: wood = [5, 9, 7], k = 4
Output: 4
Explanation:
5 -> 4 + 1
9 -> 4 * 2 + 1
7 -> 4 + 3
Example 3:

Input: wood = [1, 2, 3], k = 7
Output: 0
Explanation: We cannot make it.
Example 4:

Input: wood = [232, 124, 456], k = 7
Output: 114
Explanation: We can cut it into 7 pieces if any piece is 114 long, however we can't cut it into 7 pieces if any piece is 115 long.
 */

int max_element(int *wood, int wood_len){
	int max = 0;

	for (int i = 0; i < wood_len; i++){
		if (wood[i] > max){
			max = wood[i];
		}
	}

	return max;
}


int getWoodtoCut(int *wood, int wood_len, int minPiecelen){

	int count = 0;

	for (int i = 0; i < wood_len; i++){
		if (wood[i] >= minPiecelen){
			count += wood[i];
		}
	}

	return count;
}


int cutWood (int *wood, int wood_len, int k){

	int low = 1, high = max_element(wood , wood_len);

	int ans = -1;

	while(low <= high){
		int mid = low + (high - low)/2;

		int cutLen = getWoodtoCut(wood, wood_len, mid);

		if (cutLen >= k){
			ans = mid;
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}

	return ans;
}


