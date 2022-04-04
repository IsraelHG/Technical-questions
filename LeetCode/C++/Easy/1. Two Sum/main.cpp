#include <iostream>
#include <fstream>
#include <cassert>
#include "twosums.h"

using namespace std;

inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {

    int target = 18; //change target to numbers that add up to 2 numbers in our vector.
    vector<int> v;
    vector<int> v_final;
    v.push_back(5); //index 0
    v.push_back(8); //index 1
    v.push_back(3); //index 2
    v.push_back(4); //index 3
    v.push_back(10); //index 4
    v.push_back(12); //index 5

    cout << "Vector v: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    } cout << endl;

    Sums obj;
    v_final = obj.twoSums(v, target);

    cout << "Indexes in our vector that add up to " << target << ": ";
    cout << v_final[0] << ", " << v_final[1];
    cout << endl;

	cout << "Program works!" << endl;
	return 0;

}