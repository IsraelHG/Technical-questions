#include "twosums.h"
#include <vector>

vector<int> Sums::twoSums(vector<int>& nums, int target) {

    //Solution

    //We will create hash map called "hash_table",
    //and a vector called "target_indexes" that will hold the indexes of the 
    //values that add up to our "target" passed in our function prototype.
    //"hash_table" will hold almost all the values in our vector.

    //vector& nums = {5, 8, 3, 4, 10, 12}
    //Target value = 18
    
    //Method 1: Using hashes to find two sums
    //time complexity: O(2n) = O(n)
    //space complexity: O(n)
    for(int i = 0; i < nums.size(); i++) {      //Cycles through vector "nums"
        int second_target = target - nums[i];   //Subtracts target value (18) from "i"th element in vector.

        if (hash_table.find(second_target) != hash_table.end()) { //If our second target (target - nums[i]) exist as a key in our hash,
            target_indexes.push_back(hash_table.find(second_target)->second); //Add value into our return vector.
            target_indexes.push_back(i); //Then add index of same key value in our return vector.
            break;
        }
        else {
            hash_table[nums.at(i)] = i; //Push all other values onto hash for later use to search.
        }
    }
    return target_indexes;

    //Method 2: Brute-force
    //time complexity: O(n^2)
    //space complexity: O(1)
    vector<int> sum(2);
    for (int i = 1; i < nums.size(); i++) {     //Cycles through vector.
        for (int j = i - 1; j >= 0 ; j--) {     //Control for loop that cycles down from where "i" is.
            if (nums[i] + nums[j] == target) {  //Adds both index location to see if values add up to target.
                sum[0] = i;     //If so, add first index in vector
                sum[1] = j;     //Add second index in vector
                return sum;     //return vector
            }
        }
    }
}