#include "plusOne.h"
#include <iostream>

int main() {

    Solution object;

    // Example 1
    vector<int> digits1 = {1, 2, 3};
    vector<int> result1 = object.plusOne(digits1);
    for (int i = 0; i < static_cast<int>(result1.size()); i++) {
        cout << result1[i];
    }
    cout << endl; // expected output: 124
    
    // Example 2
    vector<int> digits2 = {4, 3, 2, 1};
    vector<int> result2 = object.plusOne(digits2);
    for (int i = 0; i < static_cast<int>(result2.size()); i++) {
        cout << result2[i];
    }
    cout << endl; // expected output: 4322
    
    // Example 3
    vector<int> digits3 = {9};
    vector<int> result3 = object.plusOne(digits3);
    for (int i = 0; i < static_cast<int>(result3.size()); i++) {
        cout << result3[i];
    }
    cout << endl; // expected output: 10
    
    return 0;
}