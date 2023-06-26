/*
 * Kata's URL - https://www.codewars.com/kata/55685cd7ad70877c23000102/train/cpp
 * Difficulty - 8kyu
 * Submitter - karastoyanov
 */

#include <iostream> //Do NOT submit this part

int makeNegative(int num) {

    if (num > 0) {
        return num - (num * 2);
    } else if (num < 0) {
        return num;
    } else {
        return 0;
    }
}

