// 724. Find Pivot Index
// Solved
// Easy
// Topics
// Companies
// Hint
//
// Given an array of integers nums, calculate the pivot index of this array.
//
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
//
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
//
// Return the leftmost pivot index. If no such index exists, return -1.
//
//  
//
// Example 1:
//
// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
//
// Example 2:
//
// Input: nums = [1,2,3]
// Output: -1
// Explanation:
// There is no index that satisfies the conditions in the problem statement.
//
// Example 3:
//
// Input: nums = [2,1,-1]
// Output: 0
// Explanation:
// The pivot index is 0.
// Left sum = 0 (no elements to the left of index 0)
// Right sum = nums[1] + nums[2] = 1 + -1 = 0

#include <iostream>
#include <algorithm>
#include <ostream>
#include <vector>

// Solution
class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int numsSum = 0;
        int leftSide = 0;

        for(int i = 0; i < nums.size(); i++){
            numsSum += nums.at(i);
        }

        for(int j = 0; j < nums.size(); j++){
            if(leftSide == numsSum - leftSide - nums.at(j)){
                return j;
            }
            leftSide += nums.at(j);
        }
 
        return -1;
    }
};


// Quick test
int main(){
    std::vector nums1 = {1,7,3,6,5,6};
    //      numsSum = {0,1,8,11,17,22,28}
    std::vector nums2 = {1,2,3};
    std::vector nums3 = {2,1,-1};
    
    Solution solution;
    int result1 = solution.pivotIndex(nums1);
    int result2 = solution.pivotIndex(nums2);
    int result3 = solution.pivotIndex(nums3);

    std::cout << "first result: " << result1 << " expected: " << "3" << std::endl;
    std::cout << "seccond result: " << result2 << " expected: " << "-1" << std::endl;
    std::cout << "third result: " << result3 << " expected: " << "0" << std::endl;

}
