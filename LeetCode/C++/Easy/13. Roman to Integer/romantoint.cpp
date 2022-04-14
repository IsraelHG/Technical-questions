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
    for (int i = 0; i <= s.length() - 1; i++) { //Cycle through each 'char' of given roman string "s" from left to right.
        if (m[s[i]] >= m[s[i + 1]]) {           //Comapres current char to next char and decides if to add or not.
            sum += m[s[i]];                     //(i.e. "XVIII", if "X" > "V", sum += "key value of "X" from hashmap")
        }
        else {
            sum -= m[s[i]];                     //(i.e. "IX", if "I" !> "X", sum -= "key value of "I" from hashmap")
        }
    }
    return sum;
}