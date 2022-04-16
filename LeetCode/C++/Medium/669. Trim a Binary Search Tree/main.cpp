#include <iostream>
#include <fstream>
#include <cassert>
#include "trimBST.h"
using namespace std;

inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {

    BST obj("numbers.txt");

    int low, high;
    cout << "Enter a low and a high number: ";
    cin >> low >> high;

    cout << "\nNumbers printed between " << low << " and " << high << ": ";
    obj.printTrimBST(low, high); //Trimmed tree printed in-order.
    cout << "\nOriginal numbers in tree: ";
    obj.printTree(); //Tree printing in-order.
    //If above test cases are met, the "Program works" would print on screen.
    cout << "\nProgram works!\n";

    return 0;
}