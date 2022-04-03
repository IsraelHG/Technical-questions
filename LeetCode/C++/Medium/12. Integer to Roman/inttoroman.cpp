#include "inttoroman.h"

string Integers::intToRoman(int num) {

    string result = "";
    for (int i = 0; num != 0; i++) {
        while (num >= numbers[i]) {
            result += characters[i];
            num -= numbers[i];
        }
    }
    return result;
}