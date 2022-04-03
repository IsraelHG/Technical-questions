#pragma once
#include <string>
using namespace std;

class Integers {
public:
	string intToRoman(int num);

private:
	int numbers[13] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	string characters[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
};