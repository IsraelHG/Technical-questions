#include <iostream>
#include "climbStairs.h"

int main() {
    int n = 6;
    Solution object;

    int num_ways = object.climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " steps: " << num_ways << endl;

    return 0;
}