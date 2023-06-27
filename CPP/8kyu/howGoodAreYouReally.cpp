/*
 * Kata's URL - https://www.codewars.com/kata/5601409514fc93442500010b/train/cpp
 * Difficulty - 8kyu
 * Submitter - karastoyanov
 */

#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int sumPoints = 0;
    double averagePoints = 0;
    int lenClass = classPoints.size();

    for (int i = 0; i < lenClass; i++) {
        sumPoints += classPoints[i];
    }
    averagePoints = sumPoints / lenClass;

    if (averagePoints >= yourPoints) {
        return false;
    } else {
        return true;
    }

}


