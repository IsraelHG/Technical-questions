#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, queries;
    cin >> n >> queries;
    
    vector<vector<int>> chart(n);
    
    for (int i = 0; i < n; i++) {
        int length;
        cin >> length;
        chart[i].resize(length);
        for (int j = 0; j < length; j++) {
            cin >> chart[i][j];
        }
    }
    
    for (int k = 0; k < queries; k++) {
        int x, y;
        cin >> x >> y;
        cout << chart[x][y] << endl;
    }
    
       
    return 0;
}
