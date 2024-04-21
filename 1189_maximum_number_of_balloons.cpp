// 1189. Maximum Number of Balloons
// Solved
// Easy
// Topics
// Companies
// Hint
//
// Given a string text, you want to use the characters of text to form as many
// instances of the word "balloon" as possible.
//
// You can use each character in text at most once. Return the maximum number of
// instances that can be formed.
//
//
//
// Example 1:
//
// Input: text = "nlaebolko"
// Output: 1
//
// Example 2:
//
// Input: text = "loonbalxballpoon"
// Output: 2
//
// Example 3:
//
// Input: text = "leetcode"
// Output: 0
//
//
//
// Constraints:
//
//     1 <= text.length <= 10^4
//     text consists of lower case English letters only.
//
// Word: balloon


#include <algorithm>
#include <string>
#include <unordered_map>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        std::unordered_map<char, int> lettersMap;
        int minLetterOne = text.size();
        int minLetterTwo = text.size();
        
        // map all the chars
        for(char c : text){
            lettersMap[c] += 1;
        }
        
        // find number of "ballon" chars
        minLetterOne = std::min({lettersMap['b'], lettersMap['a'], lettersMap['n']});
        minLetterTwo = std::min({lettersMap['l'] / 2, lettersMap['o'] / 2});
 
        return std::min({minLetterOne, minLetterTwo, lettersMap['b'], lettersMap['a'], lettersMap['n']});
    }
};


