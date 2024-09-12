/*
 * sorted_array_to_BST.cpp
 *
 *  Created on: Sep 11, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
 *
 *
 Given an integer array nums where the elements are sorted in ascending order, convert it to a
height-balanced
 binary search tree.



Example 1:


Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

Example 2:


Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
 *
 *
 *
 * Appr:
 * 	1. check the size of the array,
 * 		a. if its odd then get the middle number and start creating left and right branch from there.
 * 		b. if its even then get the lost of the middle number and start creating branch from there.
 *
 *
 *
 *
 */

#include <iostream>
using namespace std;

typedef long long size_array;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(NULL), right(NULL) {}
	TreeNode(int x) : val(x), left(NULL) , right(NULL) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left) , right(right) {}
};

TreeNode* arrayToBST(int *sortedarray, int start, int end){

	 	 if (end <= start) return NULL; // Mistake made to return NULL
	 	 int mid = (end + start)/2;

	 	 TreeNode *root = new TreeNode(sortedarray[mid]);
	 	 root -> left = arrayToBST(sortedarray, start, mid);
	 	 root -> right = arrayToBST(sortedarray, mid + 1, end);

	 	 return root; // Mistake made to return root
}

 TreeNode* sorted_array_to_BST(int *sortedarray, size_array size){

	 return arrayToBST(sortedarray, 0, size);
 }

int main(){



}

