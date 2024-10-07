/*
 * Range-Sum-Of-BST.cpp
 *
 *  Created on: Oct 6, 2024
 *      Author: Rajeev Sawant
 *
 *
 *      938. Range Sum of BST
 *
 *      Given the root node of a binary search tree and two integers low and high,
 *      return the sum of values of all nodes with a value in the inclusive range [low, high].


 */




    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeBST(root, low , high);
    }

    int rangeBST(TreeNode* root, int low, int high, int TotalSum = 0){
        if (root == NULL) return 0;

        if ((root -> val >= low ) && (root -> val <= high) ){
            TotalSum +=  root -> val;
        }

        int Left = rangeSumBST(root -> left, low, high);
        int Right = rangeSumBST (root -> right, low, high);

        return TotalSum + Left + Right;
    }
