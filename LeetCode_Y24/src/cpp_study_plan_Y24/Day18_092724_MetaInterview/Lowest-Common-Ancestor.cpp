/*
 * Lowest-Common-Ancestor.cpp
 *
 *  Created on: Sep 27, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *      Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia:
“The lowest common ancestor is defined between two nodes p and q as the lowest node in T
that has both p and q as descendants (where we allow a node to be a descendant of itself).”



Example 1:


Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.


approach:

 - Recursive approach


 	 - Base case
 	 	 - if root == NULL , then return NULL
 	 	 - if root == p || root == q , the return root.


 	 - Recursive call
 	 	 - when we move to left of tree , we save response to a NODE named LEFT
 	 	 - when we move to right of tree, we save response to a NODE named RIGHT

 	 - return
 	 	 - if LEFT and RIGHT both exist, then return root
 	 	 - if neither of LEFT and RIGHT exist, then we return NULL
 	 	 - if either exist than we return the node that exist.

 */

#include <iostream>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
};



TreeNode* LowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q){

	if (!root) return NULL;

	if (root == p || root == q) return root;

	TreeNode *LEFT = LowestCommonAncestor(root -> left, p, q);
	TreeNode *RIGHT = LowestCommonAncestor(root -> left, p, q);

	if (LEFT && RIGHT)
		return root;

	if (!LEFT && !RIGHT)
		return NULL;

	return  (LEFT != NULL ? LEFT: RIGHT);
}

