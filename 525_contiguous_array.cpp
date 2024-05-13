// 525. Contiguous Array
// Medium
// Topics
// Companies
//
// Given a binary array nums, return the maximum length of a contiguous subarray
// with an equal number of 0 and 1.
//
//
//
// Example 1:
//
// Input: nums = [0,1]
// Output: 2
// Explanation: [0, 1] is the longest contiguous subarray with an equal number
// of 0 and 1.
//
// Example 2:
//
// Input: nums = [0,1,0]
// Output: 2
// Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal
// number of 0 and 1.
//
//
//
// Constraints:
//
//     1 <= nums.length <= 10^5
//     nums[i] is either 0 or 1.

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        std::unordered_map<int, int> diffMap;
        int maxLen = 0;
        int diff = 0;
        diffMap[0] = -1;

        for (int i = 0; i < nums.size(); ++i) {
            diff += (nums[i] == 1) ? 1 : -1;
            if (diffMap.find(diff) != diffMap.end()) {
                maxLen = std::max(maxLen, i - diffMap[diff]);
            } else {
                diffMap[diff] = i;
            }
        }

        return maxLen;
    }
};

// quick test
int main() {
    std::vector nums1 = {0, 1};
    std::vector nums2 = {0, 1, 1};
    std::vector nums3 = {0, 1, 0, 1};
    std::vector nums4 = {0, 0, 1, 0, 0, 0, 1, 1};
    Solution solution;
    int test1 = solution.findMaxLength(nums1);
    int test2 = solution.findMaxLength(nums2);
    int test3 = solution.findMaxLength(nums3);
    int test4 = solution.findMaxLength(nums4);
    std::cout << "first test for [0,1]: " << test1 << ", expected output: 2\n";
    std::cout << "first test for [0,1,0]: " << test2
              << ", expected output: 2\n";
    std::cout << "first test for [0,1,0,1]: " << test3
              << ", expected output: 4\n";
    std::cout << "first test for [0,0,1,0,0,0,1,1]: " << test4
              << ", expected output: 6\n";
    return 0;
}
