#include <iostream>
#include <vector>
#include "removeElement.h"

using namespace std;

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    // Object that holds the soltion function
    Solution obj;
    
    int k = obj.removeElement(nums, val);

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
