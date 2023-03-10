#include <iostream>
#include "merge.h"

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m - 1; // End of nums1
    int p2 = n - 1; // End of nums2
    int p = m + n - 1; // End of nums1 (including ending zeros)
    
    // While both pointers in both vectors haven't 
    // reached the beginning of the vec.
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        }
        else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }
    // If nums2 vec hasn't ended to the beginning and nums1 ptr has.
    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p--;
        p2--;
    }
}