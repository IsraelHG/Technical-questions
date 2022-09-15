#include "longestcommonprefix.h"

string Solution::longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    string firstWord = strs[0];
    int words = strs.size();
    int firstWordSize = firstWord.size();

    //This outer for loop takes care of looping through each letter (index) of each word and 
    // compares the next letter.
    for (int i = 0 ; i < firstWordSize; i++) {
        // Inner for loop takes care of looping through the other words in the vector.
        for (int j = 1; j < words; j++) {
            string iterator = strs[j];
            // Checks and compares if the first letter of each word are the same.
            // If they are equal, move on the next word.
            if(iterator[i] == firstWord[i]) {
                // Continues to the next word.
                continue;
            }
            else {
                return ans;
            }
        }
        // Once the letters of both words match, you append it in a var.
        ans += firstWord[i];
    }
    return ans;
}