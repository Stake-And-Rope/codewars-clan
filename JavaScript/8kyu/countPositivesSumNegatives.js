#!/usr/bin/node

/*
 * Kata's URL - https://www.codewars.com/kata/576bb71bbbcf0951d5000044/javascript
 * Difficulty - 8 kyu
 * Submitter - karastoyanov
 */

function countPositivesSumNegatives(input) {
    let resultArr = [];
    let positivesCounter = 0;
    let negativesSum = 0;

    if (input) {
        for (let i = 0; i < input.length; i++) {
            if (input[i] > 0) {
                positivesCounter++;
            } else if (input[i] < 0) {
                negativesSum += input[i];
            } else {
                continue;
            }
        }
    }

    if (positivesCounter == 0 && negativesSum == 0) {
        return resultArr = [];
    } else {
        resultArr.push(positivesCounter);
        resultArr.push(negativesSum);
        return resultArr;
    }
}

// countPositivesSumNegatives([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15]);
console.log(countPositivesSumNegatives([]));
