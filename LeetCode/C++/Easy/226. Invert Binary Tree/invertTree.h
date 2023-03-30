#pragma once
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        this->val = x;
        left = right = nullptr;
    }
};

class Solution {
    public:
        TreeNode* invertTree(TreeNode* root);
        void push(TreeNode*& root, int x);
    private:
        void push_recurse(TreeNode*& root, int x);
};