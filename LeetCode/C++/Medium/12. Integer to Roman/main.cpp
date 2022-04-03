#include <iostream>
#include <fstream>
#include <cassert>
#include "inttoroman.h"

using namespace std;

inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {

	ifstream f;
	f.open("roman-numbers 1-1000.txt");
	assert(f.is_open());

	Integers obj;
	string line;

	int count = 0;
	while (getline(f, line)) {
		count++;
		test(obj.intToRoman(count) == line);
		cout << obj.intToRoman(count) << endl;

	}
	f.close();

	cout << "Program works!" << endl;
	return 0;

}