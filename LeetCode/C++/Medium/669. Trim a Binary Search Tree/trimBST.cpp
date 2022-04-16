#include "trimBST.h"
#include <cassert>

//public function
BST::BST(string filename) {
    ifstream inFile;
    inFile.open(filename);
    assert(inFile.is_open());
    int inVal;
    
    while(!inFile.eof()) {
        while (inFile >> inVal) {
            insert(inVal);
        }
    }
}

//public function
void BST::insert(int x) {
    if(root == nullptr) {
        root = new TreeNode(x); 
        return;
    }
    insertFunction(x, root);
}

//public function
void BST::printTree() {
    printTreeFunction(root);
}

//public function
void BST::printTrimBST(int low, int high) {
    TreeNode* temp = root;
    temp = trimBST(temp, low, high);
    return;
}


//private function
void BST::insertFunction(int insert_val, TreeNode* root) {
    if(root->val == insert_val) { //When the value already exist in the tree.
        return;
    }
    if(root->val < insert_val) {
        if(root->right != nullptr) { //Recurse right when root->right has a node.
            insertFunction(insert_val, root->right);
        }
        else {
            root->right = new TreeNode(insert_val); //Insert a new node at root->right when NULL.
        }
    }
    else {
        if(root->left != nullptr) { //Recurse left when root->left has a node.
            insertFunction(insert_val, root->left);
        }
        else {
            root->left = new TreeNode(insert_val); //Insert a new node at root->left when NULL.
        }
    }
}

//****************************************************************************************************//
//private function
BST::TreeNode* BST::trimBST(TreeNode* root, int low, int high) {
    //Solution
    if (root == nullptr || low > high) {
        return nullptr;
    }
    if (root->val < low) {
        return trimBST(root->right, low, high);
    }
    if (root->val > high) {
        return trimBST(root->left, low, high);
    }
    root->left = trimBST(root->left, low, root->val-1);
    cout << root->val << " ";
    root->right = trimBST(root->right, root->val+1, high);
    return root;
}
//****************************************************************************************************//

//private function
void BST::printTreeFunction(TreeNode* root) {
    if(root == nullptr) {
        return;
    }
    else {
        printTreeFunction(root->left);
        cout << root->val << " ";
        printTreeFunction(root->right);
    }
}