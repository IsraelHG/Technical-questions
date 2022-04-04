#include "twosums.h"
#include <vector>

vector<int> Sums::twoSums(vector<int>& nums, int target) {

    //We will create hash map called "hash_table",
    //and a vector called "target_indexes" that will hold the indexes of the 
    //values that add up to our "target" passed in our function prototype.
    //"hash_table" will hold almost all the values in our vector.
    
    //Method 1: Using hashes to find two sums
    //time complexity: O(2n) = O(n)
    //space complexity: O(n)
    for(int i = 0; i < nums.size(); i++) {
        int second_target = target - nums.at(i);

        if (hash_table.find(second_target) != hash_table.end()) {
            target_indexes.push_back(hash_table.find(second_target)->second);
            target_indexes.push_back(i);
            break;
        }
        else {
            hash_table[nums.at(i)] = i;
        }
    }
    return target_indexes;

    //Method 2: Brute-force
    //time complexity: O(n^2)
    //space complexity: O(1)
    vector<int> sum(2);
    for (int i = 1; i < nums.size(); i++) {
        for (int j = i - 1; j >= 0 ; j--) {
            if (nums[i] + nums[j] == target) {
                sum[0] = i;
                sum[1] = j;
                return sum;
            }
        }
    }
}