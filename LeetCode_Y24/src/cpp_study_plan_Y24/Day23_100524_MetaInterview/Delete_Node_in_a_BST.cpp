/*
 * Delete_Node_in_a_BST.cpp
 *
 *  Created on: Oct 5, 2024
 *      Author: Rajeev Sawant
 *
 *
 *      450. Delete Node in a BST
 *
 *      Given a root node reference of a BST and a key, delete the node with the given key in the BST.
 *      Return the root node reference (possibly updated) of the BST.

Basically, the deletion can be divided into two stages:

Search for a node to remove.
If the node is found, delete the node.


 */


#include <iostream>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


  int findminfromright(TreeNode* root){
        while(root->left != nullptr)
            root = root->left;
        return root->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;

        if(key > root->val)
        {
            root->right = deleteNode(root->right,key);
        }else if( key < root->val)
        {
            root->left = deleteNode(root->left,key);
        }else
        { // we are at the key
           if(!root->left and !root->right)
           {
               delete(root);
               return NULL;
           }
           else if (!root->left or !root->right)
           {
               if(root->left)
               {
                   auto temp = root->left;
                   delete(root);
                   return temp;
               }
               else
               {
                   auto temp = root->right;
                   delete(root);
                   return temp;
               }
           }else
           {
                root-> val = findminfromright(root-> right);
                root-> right = deleteNode(root-> right, root -> val);
           }
        }

        return root;
    }


