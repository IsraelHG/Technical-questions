#include "longestpalindrome.h"

string Solution::longestPalindrome(string s) {
    int end = 0;
    int start = 0;
    int max_len = 0;
    int n = s.length();

    //This takes care of odd sized words
    for (int i = 0; i < n; i++) {
        int l = i;
        int r = i;
        while(l >= 0 && r < n) {
            if(s[l] == s[r]) {
                l--;
                r++;
            }
            else
                break;
        }
        if (r - l - 1 > max_len) {
            max_len = r - l - 1;
            start = l + 1;
            end = r - 1;
        }
    }

    //This takes care of even sized words
    for(int i = 0; i < n-1; i++) {
        int l = i;
        int r = i + 1;
        while(l >= 0 && r < n){
            if(s[l] == s[r]){
                l--;
                r++;
            }
            else
                break;
        }
        if(r - l - 1 > max_len){
            max_len = r - l - 1;
            start = l + 1;
            end = r - 1;
        }
    }
    return s.substr(start, end - start + 1);
}