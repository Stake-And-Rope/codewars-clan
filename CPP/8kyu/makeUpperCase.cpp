/*
* Kata's URL - https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/cpp
* Difficulty - 8kyu
* Submitter - karastoyanpv
*/

// #include <iostream>
#include <string>

std::string makeUpperCase (const std::string& input_str) {
    
    std::string word = input_str;
    for (int i = 0; i < word.length(); i++) {
        word[i] = toupper(word[i]);
    }
    return word;

}