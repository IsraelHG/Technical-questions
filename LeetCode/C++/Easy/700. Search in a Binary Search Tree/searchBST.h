#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <cassert>
using namespace std;

class BST {
    //Public for the users
    public:
        // Creates a tree of nodes and associated values,
	    // using the textfile as the source.
	    // the following format will be:
	    //
	    // value1
	    // value2
	    // ...
	    // valueN
        BST(string filename);

        // Add val to the tree. 
        //Runtime: O(n). O(logn) if its a balanced tree.
        void insert(int val);

        //Prints all of the values in the tree. 
        //Runtime: O(n).
        void printTree();

        //Finds the node in the tree given a value of "x".
        //Returns -1 if node was not found.
        //Runtime: O(n). O(logn) if its a balanced tree.
        int returnSearchBST(int x);

    //Private for the users, except programmer
    private:
        class TreeNode {
            public:
                TreeNode() {
                    left = right = nullptr;
                }
                TreeNode(int val) {
                    this->val = val;
                    left = right = nullptr;
                }
                TreeNode(int val, TreeNode* left, TreeNode* right) {
                    this->val = val;
                    this->left = left;
                    this->right = right;
                }
                int val;
                TreeNode* left;
                TreeNode* right;
                
        };
        TreeNode* root = nullptr;
        TreeNode* searchBST(TreeNode* root, int val);
        void insertFunction(int val, TreeNode* root);
        void printTreeFunction(TreeNode* root);
};