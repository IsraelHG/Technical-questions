#include "romantoint.h"

Roman::Roman() {
	m.insert(pair<char, int>('I', 1));
	m.insert(pair<char, int>('V', 5));
	m.insert(pair<char, int>('X', 10));
	m.insert(pair<char, int>('L', 50));
	m.insert(pair<char, int>('C', 100));
	m.insert(pair<char, int>('D', 500));
	m.insert(pair<char, int>('M', 1000));
}

//Solution
int Roman::romanToInt(string s) {   

    int sum = 0;
    //Reads from left to right. (i.e. "XVIII")
    for (int i = 0; i <= s.length() - 1; i++) {
        if (m[s[i]] >= m[s[i + 1]]) {
            sum += m[s[i]];
        }
        else {
            sum -= m[s[i]];
        }
    }
    return sum;
}