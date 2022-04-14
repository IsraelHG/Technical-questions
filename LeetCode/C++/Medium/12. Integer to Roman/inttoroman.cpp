#include "inttoroman.h"

//Solution
string Integers::intToRoman(int num) {

    string result = "";
    for (int i = 0; num != 0; i++) {    //Cycles through numbers[13] from index 0-13
        while (num >= numbers[i]) {     //Base case: once num > num in array, do the following...
            result += characters[i];    //Add largest character without surpassing num (i.e. if num == 13, then result += "X")
            num -= numbers[i];          //Then subtact num from largest number[i] without surpassing num (i.e. if num == 13, then num -= 10)
        }
    }
    return result;
}