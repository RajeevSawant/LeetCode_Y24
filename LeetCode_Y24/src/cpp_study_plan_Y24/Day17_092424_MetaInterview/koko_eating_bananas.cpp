/*
 * koko_eating_bananas.cpp
 *
 *  Created on: Sep 24, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
875. Koko Eating Bananas

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas.
The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k.
Each hour, she chooses some pile of bananas and eats k bananas from that pile.
If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.



Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], h = 6
Output: 23
 */

#include <cmath>
#include <iostream>
using namespace std;

int max_elements(int *piles, int pilesSize){

	int max = 0;

	for(int i = 0; i < pilesSize; i++){
		if (piles[i] > max){
			max = piles[i];
		}
	}

	return max;
}

int getHoursToEatAll(int *piles, int pilesSize, int bananasPerHour){
	long long totalhours = 0;

	for (int i = 0; i < pilesSize; i++){
		totalhours += ceil(piles[i]/bananasPerHour);
	}

	return totalhours;
}


int minEatingSpeed(int *piles, int pilesSize, int targetHours){

	int low =  1, high = max_elements(piles, pilesSize);

	int ans = -1;

	while(low <= high){
		int mid = low + (high - low)/2;

		long long hoursToEatAll = getHoursToEatAll(piles, pilesSize, mid);

		if (hoursToEatAll <= targetHours){
			ans = mid;
			high = mid - 1;
		}else{
			low = mid + 1;
		}

	}

	return ans;

}


