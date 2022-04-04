#pragma once
#include <vector>
#include <unordered_map>
using namespace std;

class Sums {
public:
	vector<int> twoSums(vector<int>& nums, int target);
private:
    vector<int> target_indexes;
    unordered_map<int,int> hash_table;
};