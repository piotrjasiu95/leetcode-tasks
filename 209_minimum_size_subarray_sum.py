# 209. Minimum Size Subarray Sum
# Solved
# Medium
# Topics
# Companies
#
# Given an array of positive integers nums and a positive integer target,
# return the minimal length of a subarray whose sum
# is greater than or equal to target.
# If there is no such subarray, return 0 instead.
#
#  
#
# Example 1:
#
# Input: target = 7, nums = [2,3,1,2,4,3]
# Output: 2
# Explanation: The subarray [4,3] has the minimal length under the problem constraint.
#
# Example 2:
#
# Input: target = 4, nums = [1,4,4]
# Output: 1
#
# Example 3:
#
# Input: target = 11, nums = [1,1,1,1,1,1,1,1]
# Output: 0
#
#  
#
# Constraints:
#
#     1 <= target <= 109
#     1 <= nums.length <= 105
#     1 <= nums[i] <= 104
#

class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        sum = 0
        min_num = len(nums)+1
        i = 0
        j = 0

        for i in range(0, len(nums)):
            sum += nums[i]
            while(sum>=target):
                min_num = min(min_num, i-j+1)
                sum -= nums[j]
                j += 1
            
        if(min_num == len(nums)+1):
            min_num = 0

        print(min_num)
        return min_num 


solution = Solution()

nums1 = [2,3,1,2,4,3]
nums2 = [1,4,4]
nums3 = [1,1,1,1,1,1,1,1]
nums4 = [1,2,3,4,5]
nums5 = [2,3,1,2,4,3]


solution.minSubArrayLen(7, nums1)
solution.minSubArrayLen(4, nums2)
solution.minSubArrayLen(11, nums3)
solution.minSubArrayLen(11, nums4)
solution.minSubArrayLen(15, nums4)
solution.minSubArrayLen(7, nums5)



        
