#include "searchBST.h"

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
int BST::returnSearchBST(int x) {
    if(searchBST(root, x) == nullptr) {
        return -1;
    }
    return searchBST(root, x)->val;
}

//****************************************************************************************************//
//private function
BST::TreeNode* BST::searchBST(TreeNode* root, int val) { 
    

    //Uncomment the solution that you want to try out and comment the rest.
    //
    //Solution 1: Iterative solution. Runtime: O(n)
    while (root != nullptr && root->val != val) { //While the conditions do not meet,
    //then choose the corresponding route. Right when root->val < val. Left when root->val > val.
        root = root->val < val ? root->right : root->left; 
    }
    return root;


    //Uncomment the solution that you want to try out and comment the rest.
    //
    //Solution 2: Recursive solution. Runtime: O(n)
    if(root == nullptr) { //Base case, when the tree is empty OR when the value was not found.
        return root;
    }
        if(root->val > val) { //If the value in the node is greater than the value we inputted,
            root = searchBST(root->left, val); //Recursively go down towards the left
        }
        else if(root->val < val) { //If the vakue in the node is less than the value we inputted,
            root = searchBST(root->right, val); //Recursively go down towards the right
        }
        return root; //If none of the above cases meet, return the node its, in if the value was found.
}
//****************************************************************************************************//

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