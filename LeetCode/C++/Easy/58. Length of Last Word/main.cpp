#include <iostream>
#include "lastWord.h"

int main() {
    string s = "Hello world";
    Solution object;

    int length = object.lengthOfLastWord(s);

    cout << "The length of the last word in \"" << s << "\" is " << length << endl;
    return 0;
}
