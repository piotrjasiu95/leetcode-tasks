# 283. Move Zeroes
# Solved
# Easy
# Topics
# Companies
# Hint
#
# Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#
# Note that you must do this in-place without making a copy of the array.
#
#
#
# Example 1:
#
# Input: nums = [0,1,0,3,12]
# Output: [1,3,12,0,0]
#
# Example 2:
#
# Input: nums = [0]
# Output: [0]
#
#
#
# Constraints:
#
#     1 <= nums.length <= 104
#     -231 <= nums[i] <= 231 - 1


class Solution(object):
    def moveZeros(self, nums):
        i = 0
        j = 0
        for i in range(0, len(nums)):
            if nums[i] != 0:
                nums[j] = nums[i]
                if(i != j):
                    nums[i] = 0
                j += 1
        
        print(nums)
        return nums


solution = Solution()

nums1 = [0,1,0,3,12]
nums2 = [0]

solution.moveZeros(nums1)
solution.moveZeros(nums2)
