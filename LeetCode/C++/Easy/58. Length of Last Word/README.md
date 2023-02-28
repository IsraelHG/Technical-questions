# 58. Length of Last Word

Given a string `s` consisting of words and spaces, *return the length of the **last** word in the string*.

A *word* is a maximal ***substring*** consisting of non-space characters only.

**Example 1:**

```
Input: s = "Hello World"
Output: 5

Explanation: The last word is "World" with length 5.
```

**Example 2:**

```
Input: s = "   fly me   to   the moon  "
Output: 4

Explanation: The last word is "moon" with length 4.
```

**Example 3:**

```
Input: s = "luffy is still joyboy"
Output: 6

Explanation: The last word is "joyboy" with length 6.
```

**Constraints:**

- `1 <= s.length <= 104`
- `s` consists of only English letters and spaces `' '`
- There will be at least one word in `s`

<br><br/>

# Explanation

The algorithm I presented earlier has a time complexity of `O(n)`, where `n` is the `length of the input string.

We can traverse the input string from right to left and keep track of the length of the current word. We stop when we encounter a space or when we reach the beginning of the string. At this point, we return the length of the last word.

Here's the C++ code:

```
main.cpp
-----------------------------------------------------------------------------------
#include <iostream>
#include "lastWord.h"

int main() {
    string s = "Hello world";
    Solution object;

    int length = object.lengthOfLastWord(s);

    cout << "The length of the last word in \"" << s << "\" is " << length << endl;
    return 0;
}
```

In this example, we call the `object.lengthOfLastWord(s)` function with the input string "Hello world". The function returns the length of the last word in the string, which is 5.

We then print a message to the console that displays the original string and the length of the last word. The output of this program would be:

```
The length of the last word in "Hello world" is 5
```

The solution is pasted below:

```
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
```
