#include "removeElement.h"

int Solution::removeElement(vector<int>& nums, int val) {
    int i = 0;
    int j = 0;

    while (i < static_cast<int>(nums.size())) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return j;
}