/*
 * Search-a-2D-matrix.cpp
 *
 *  Created on: Sep 25, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.


 */


#include <vector>
#include <iostream>
using namespace std;

bool serachMatrix(vector<vector<int>>& matrix, int target){

	int rows = matrix.size();
	int cols = matrix[0].size();

	int row = 0, col = cols - 1;

	while (row < rows && col > -1){
		int curr = matrix[row][col];

		if(curr == target){
			return true;
		}


		if (target > curr){
			row++;
		}else{
			col--;
		}
	}

	return false;
}
