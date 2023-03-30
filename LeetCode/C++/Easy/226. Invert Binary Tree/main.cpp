#include "invertTree.h"
#include <iostream>

inline void _test(const char* expression, const char* file, int line){
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))
using namespace std;

void printTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

int main() {
    Solution solution;
    TreeNode* root = nullptr;

    // Push nodes onto the tree
    solution.push(root, 4);
    solution.push(root, 2);
    solution.push(root, 7);
    solution.push(root, 1);
    solution.push(root, 3);
    solution.push(root, 6);
    solution.push(root, 9);

    printTree(root);
    cout << endl;

    // Invert the tree
    root = solution.invertTree(root);
    printTree(root);
    cout << endl;

    //Test the inverted tree
    test(root->val == 4);
    test(root->left->val == 7);
    test(root->right->val == 2);
    test(root->left->left->val == 9);
    test(root->left->right->val == 6);
    test(root->right->left->val == 3);
    test(root->right->right->val == 1);

    cout << "All test cases passed." << endl;
    return 0;
}