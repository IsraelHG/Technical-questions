#include "invertTree.h"
#include <iostream>

// ###########################################################
// #################### SOLUTION #############################
// ###########################################################

TreeNode* Solution::invertTree(TreeNode* root) {
    // Recursive approach
    // Time complexity: O(n), where n is the # of nodes
    // Space complexity: O(h), where h is the height of the tree
    if (root == nullptr) {
        return nullptr;
    }
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    
    root->left = right;
    root->right = left;

    return root;
}

void Solution::push(TreeNode*& root, int x) {
    push_recurse(root, x);
}

//---------------------------------------------

void Solution::push_recurse(TreeNode*& root, int x) {
    if (root == nullptr) {
        root = new TreeNode(x);
        return;
    }
    if (root->val > x) {
        push_recurse(root->left, x);
    }
    else if (root->val <= x) {
        push_recurse(root->right, x);
    }
    else {
        return;
    }
}