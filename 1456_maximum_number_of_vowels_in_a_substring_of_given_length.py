# 1456. Maximum Number of Vowels in a Substring of Given Length
# Medium
# Topics
# Companies
# Hint
#
# Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
#
# Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
#
#  
#
# Example 1:
#
# Input: s = "abciiidef", k = 3
# Output: 3
# Explanation: The substring "iii" contains 3 vowel letters.
#
# Example 2:
#
# Input: s = "aeiou", k = 2
# Output: 2
# Explanation: Any substring of length 2 contains 2 vowels.
#
# Example 3:
#
# Input: s = "leetcode", k = 3
# Output: 2
# Explanation: "lee", "eet" and "ode" contain 2 vowels.
#
#  
#
# Constraints:
#
#     1 <= s.length <= 105
#     s consists of lowercase English letters.
#     1 <= k <= s.length
#

class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        max_val = 0
        curr_val = 0
        i = 0
        j = 0

        for i in range(0, len(s)):
            if s[i] in ["a", "e", "i", "o", "u"]:
                curr_val += 1
            if i - j >= k:
                if s[j] in ["a", "e", "i", "o", "u"]:
                    curr_val -= 1
                j += 1
            max_val = max(max_val, curr_val)
        print(max_val)
        return(max_val)

solution = Solution()

s1 = "abciiidef"
s2 = "aeiou"
s3 = "leetcode"

solution.maxVowels(s1,3)
solution.maxVowels(s2,2)
solution.maxVowels(s3,3)


