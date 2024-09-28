/*
 * dot-product-of-two-spare-vector.cpp
 *
 *  Created on: Sep 27, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
 *
Given two sparse vectors, compute their dot product.

Implement class SparseVector:

SparseVector(nums) Initializes the object with the vector nums
dotProduct(vec) Compute the dot product between the instance of SparseVector and vec
A sparse vector is a vector that has mostly zero values,
you should store the sparse vector efficiently and compute the dot product between two SparseVector.

Follow up: What if only one of the vectors is sparse?



Example 1:

Input: nums1 = [1,0,0,2,3], nums2 = [0,3,0,4,0]
Output: 8
Explanation: v1 = SparseVector(nums1) , v2 = SparseVector(nums2)
v1.dotProduct(v2) = 1*0 + 0*3 + 0*0 + 2*4 + 3*0 = 8
Example 2:

Input: nums1 = [0,1,0,0,0], nums2 = [0,0,0,0,2]
Output: 0
Explanation: v1 = SparseVector(nums1) , v2 = SparseVector(nums2)
v1.dotProduct(v2) = 0*0 + 1*0 + 0*0 + 0*0 + 0*2 = 0
Example 3:

Input: nums1 = [0,1,0,0,2,0,0], nums2 = [1,0,0,0,3,0,4]
Output: 6









1. Understanding/Clarify and think about edge cases.
2. Find Solution

HashMap<Index, NonZeroNumberForTheIndex>

3. coding
4. testing




 */

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Sparsevector{

public:
	Sparsevector(vector<int>& nums){
		this -> sparse = nums;
	}



	int dotProduct(Sparsevector& vec){

		int total = 0;

		for (int i = 0; i < sparse.size(); i++ ){
			total += vec.sparse[i] * sparse[i];
		}

		return total;
	}


private:
	vector<int> sparse;
};

/*
 * TC: O(N) SC : O(1)
 */




