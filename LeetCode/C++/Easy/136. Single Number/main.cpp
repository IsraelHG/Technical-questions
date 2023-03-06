#include <iostream>
#include "singleNumber.h"

int main() {
    vector<int> nums = {2, 3, 2, 1, 1, 4, 4};
    Solution object;

    int result = object.singleNumber(nums);

    cout << "The unique integer in the array is: " << result << endl;
    
    return 0;
}
