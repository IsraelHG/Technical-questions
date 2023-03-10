#include <iostream>
#include <fstream>
#include "merge.h"

inline void _test(const char* expression, const char* file, int line) {
    cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
    abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))


void printVector(const vector<int>& vec) {
    cout << "[ ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << "]" << endl;
}


int main() {
    Solution object;
    ifstream infile("testcases.txt");
    int m, n;

    while (infile >> m >> n) {
        vector<int> nums1(m + n), nums2(n);
        for (int i = 0; i < m; i++) {
            infile >> nums1[i];
        }
        for (int i = 0; i < n; i++) {
            infile >> nums2[i];
        }

        cout << "nums1: ";
        printVector(nums1);
        cout << "nums2: ";
        printVector(nums2);

        object.merge(nums1, m, nums2, n);

        cout << "result:";
        printVector(nums1);
        cout << endl;

        for (int j = 1; j < static_cast<int>(nums1.size()); j++) {
            test(nums1[j] >= nums1[j - 1]);
        }
    }
    cout << "All test cases passed." << endl;
    return 0;
}