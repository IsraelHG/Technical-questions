#include <iostream>
#include <fstream>
#include <cassert>
#include "longestPalindrome.h"

using namespace std;

inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {

	ifstream f;
    ofstream out ("words_output.txt");
	f.open("words.txt");
	assert(f.is_open());

	Solution obj;
	string line;

	while (getline(f, line)) {
		out << obj.longestPalindrome(line) << endl;
	}
	f.close();
    out.close();

	cout << "Program works!" << endl;
	return 0;
}