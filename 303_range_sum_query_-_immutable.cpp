// 303. Range Sum Query - Immutable
// Easy
// Topics
// Companies
//
// Given an integer array nums, handle multiple queries of the following type:
//
//     Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
//
// Implement the NumArray class:
//
//     NumArray(int[] nums) Initializes the object with the integer array nums.
//     int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
//
//  
//
// Example 1:
//
// Input
// ["NumArray", "sumRange", "sumRange", "sumRange"]
// [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
// Output
// [null, 1, -1, -3]
//
// Explanation
// NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
// numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
// numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
// numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
//
//  
//
// Constraints:
//
//     1 <= nums.length <= 104
//     -105 <= nums[i] <= 105
//     0 <= left <= right < nums.length
//     At most 104 calls will be made to sumRange.

#include <vector>

class NumArray {
private:
    std::vector<int> sum;

public:
    NumArray(std::vector<int>& nums) {
        sum.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            sum.push_back(nums[i] + sum.back()); 
        }
    }

    int sumRange(int left, int right) {
        int result = sum[right];
        if (left > 0) {
            result -= sum[left - 1];
        }

        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */



