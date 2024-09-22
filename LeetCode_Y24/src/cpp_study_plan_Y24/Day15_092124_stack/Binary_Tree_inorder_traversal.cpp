/*
 * Binary_Tree_inorder_traversal.cpp
 *
 *  Created on: Sep 21, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *      Given the root of a binary tree, return the inorder traversal of its nodes' values.



Example 1:

Input: root = [1,null,2,3]

Output: [1,3,2]

Explanation:



Example 2:

Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,2,6,5,7,1,3,9,8]
 */

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{

	int val;
	TreeNode *right;
	TreeNode *left;
};

vector<int> res;

vector<int> inorderTraversal(TreeNode *root){

	if (root){
		inorderTraversal(root -> left);
		res.push_back(root -> val);
		inorderTraversal(root -> right);
	}

	return res;
}



