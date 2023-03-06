#include "singleNumber.h"
#include <iostream>

int Solution::singleNumber(vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        cout << "result ^ nums[i] = result" << endl;
        cout << result << " ^ " << nums[i] << " = ";
        result ^= nums[i];
        cout << result << endl;
    }
    return result;
}