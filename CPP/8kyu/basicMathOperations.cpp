/*
 * Kata's URL - https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
 * Difficulty - 8kyu
 * Submitter - karastoyanov
 */

int basicOp(char op, int val1, int val2) {
  // Your code here
    if (op == '+') {
        return val1 + val2;
    } else if (op == '-') {
        return val1 - val2;
    } else if (op == '*') {
        return val1 * val2;
    } else if (op == '/') {
        return val1 / val2;
    }
}
