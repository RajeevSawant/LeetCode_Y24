/*
 * spiral_matrix.cpp
 *
 *  Created on: Sep 19, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *      Given an m x n matrix, return all elements of the matrix in spiral order.
 *
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
 *
 */


#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> matrix){

	int T = 0, D = matrix.size() - 1, L = 0 , R = matrix[0].size() - 1, dir = 0, i = 0;

	vector<int> res;


	while((T <= D)&&(L <= R)){


		if (dir == 0){
			for (int i = L; i <= R; i++){
				res.push_back(matrix[T][i]);
			}
			T++;

		}else if (dir == 1){
			for (int i = T; i <= D; i++){
				res.push_back(matrix[i][R]);
			}
			R--;
		}else if (dir == 2){
			for (int i = R; i > L; i--){
				res.push_back(matrix[D][i]);
			}
			D--;
		}else if (dir == 3){
			for (int i = D; i > T; i--){
				res.push_back(matrix[i][L])
			}
			L++;
		}

		dir = (dir + 1) % 4;

	}


	return res;
}

