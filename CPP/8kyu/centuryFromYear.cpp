/*
 * Kata's URL - https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp
 * Difficulty - 8kyu
 * Submitter - karastoyanov
 */

int centuryFromYear(int year)
{
    int century = year / 100;
    int decade = year % 100;
    if (decade == 0) {
        return century;
    } else {
        return century + 1;
    }
    return 1 ;
}

