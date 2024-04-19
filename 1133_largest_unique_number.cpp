// 1133. Largest Unique Number
// Solved
// Easy
// Topics
// Companies
// Hint
//
// Given an integer array nums, return the largest integer that only occurs once. If no integer occurs once, return -1.
//
//  
//
// Example 1:
//
// Input: nums = [5,7,3,9,4,9,8,3,1]
// Output: 8
// Explanation: The maximum integer in the array is 9 but it is repeated. The number 8 occurs only once, so it is the answer.
//
// Example 2:
//
// Input: nums = [9,9,8,8]
// Output: -1
// Explanation: There is no number that occurs only once.
//
//  
//
// Constraints:
//
//     1 <= nums.length <= 2000
//     0 <= nums[i] <= 1000

#include <algorithm>
#include <vector>
#include <unordered_map>


class Solution {
public:
    int largestUniqueNumber(std::vector<int>& nums) {
        int i = 0;
        int maxValue = -1;
        std::unordered_map<int, int> map;
        
        for(i = 0; i < nums.size(); i++){
            map[nums[i]] += 1;
        }
        
        for(const auto& pair : map){
            if(pair.second < 2){
                maxValue = std::max(maxValue, pair.first);
            }
        }
        
        return maxValue;
    }
};

