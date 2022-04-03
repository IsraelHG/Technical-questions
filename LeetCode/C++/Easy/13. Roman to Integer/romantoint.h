#pragma once
#include <string>
#include <unordered_map>
using namespace std;

class Roman {
public:
	Roman();
	int romanToInt(string s);

private:
	unordered_map<char, int> m;
};