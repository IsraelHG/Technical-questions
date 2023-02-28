#include "lastWord.h"

int Solution::lengthOfLastWord(string s) {
    int length = 0;
    int i = s.size() - 1;
    
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}