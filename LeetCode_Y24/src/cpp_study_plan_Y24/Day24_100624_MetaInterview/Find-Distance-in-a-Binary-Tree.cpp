/*
 * Find-Distance-in-a-Binary-Tree.cpp
 *
 *  Created on: Oct 6, 2024
 *      Author: Rajeev Sawant
 *
 *
 *      1740. Find Distance in a Binary Tree
 *
 *      Given the root of a binary tree and two integers p and q, return the distance between the nodes of value p and value q in the tree.

The distance between two nodes is the number of edges on the path from one to the other.
 */



/*

 appr:
 	 - Find the LCA
 	 - Find the depth from LCA to p + depth from LCA to q

 */


int findDistance(TreeNode* root, int p , int q){
	TreeNode *lca = LCA(root, p, q);
	return (depth(lca , p) + depth(lca , q));
}


TreeNode* LCA(TreeNode* root, int p , int q){

	if (root == NULL) return NULL;

	if ((root -> val == p) || (root -> val == q)) return root;

	TreeNode *LEFT = LCA(root -> left, p, q);
	TreeNode *RIGHT = LCA(root -> right, p, q);


	if (LEFT && RIGHT){
		return root;
	}

	if (!LEFT && !RIGHT){
		return NULL;
	}

	return (LEFT != NULL ? LEFT : RIGHT);
}




int depth(TreeNode* root, int p, int currentDepth = 0){

	if (root == NULL) return -1;


	if (root -> val == p){
		return currentDepth;
	}

	int LeftDepth = depth(root -> left, p, currentDepth + 1);

	if (LeftDepth != -1){
		return currentDepth;
	}

	return depth(root -> right, p, currentDepth + 1);
}
