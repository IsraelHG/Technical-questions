#include <iostream>
#include <fstream>
#include <cassert>
#include "searchBST.h"
using namespace std;

inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {

    BST obj("numbers.txt");
    test(obj.returnSearchBST(4) == 4);
    test(obj.returnSearchBST(2) == 2);
    test(obj.returnSearchBST(7) == 7);
    test(obj.returnSearchBST(1) == 1);
    test(obj.returnSearchBST(3) == 3);
    test(obj.returnSearchBST(10) != 10);
    obj.insert(10);
    test(obj.returnSearchBST(10) == 10);
    //If above test cases are met, the "Program works" would print on screen.
    cout << "Program works!\n";
    obj.printTree();

    return 0;
}