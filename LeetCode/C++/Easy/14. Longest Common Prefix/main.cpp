#include <cassert>
#include <fstream>
#include "longestcommonprefix.h"

using namespace std;

inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file << ", line " << line << "." << endl;
	abort();
}

#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))


int main() {
    ifstream inFile("words.txt");
    ofstream outFile("words_output.txt");
    assert(inFile.is_open());

    Solution obj;
    vector<string> v;

    string word;
    while(inFile >> word) {
        v.push_back(word);
    }
    outFile << obj.longestCommonPrefix(v);

    cout << "Program works!" << endl;
    return 0;
}