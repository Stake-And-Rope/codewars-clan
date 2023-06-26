/*
* Kata's URL - https://www.codewars.com/kata/57cc975ed542d3148f00015b/cpp
* Difficulty - 8kyu
* Submitter - karastoyanov
*/

#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    
    for (auto i:seq)
        if (i == elem) 
            return true;
    return false;
        
}