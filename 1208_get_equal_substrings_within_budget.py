# 1208. Get Equal Substrings Within Budge
# Medium
# Topics
# Companies
# Hint
#
# You are given two strings s and t of the same length and an integer maxCost.
#
# You want to change s to t. Changing the ith character of s to ith character of t costs |s[i] - t[i]|
# (i.e., the absolute difference between the ASCII values of the characters).
#
# Return the maximum length of a substring of s that can be changed to be the same as the corresponding
# substring of t with a cost less than or equal to maxCost. If there is no substring from s that can be changed
# to its corresponding substring from t, return 0.
#
#  
#
# Example 1:
#
# Input: s = "abcd", t = "bcdf", maxCost = 3
# Output: 3
# Explanation: "abc" of s can change to "bcd".
# That costs 3, so the maximum length is 3.
#
# Example 2:
#
# Input: s = "abcd", t = "cdef", maxCost = 3
# Output: 1
# Explanation: Each character in s costs 2 to change to character in t,  so the maximum length is 1.
#
# Example 3:
#
# Input: s = "abcd", t = "acde", maxCost = 0
# Output: 1
# Explanation: You cannot make any change, so the maximum length is 1.
#
#  
#
# Constraints:
#
#     1 <= s.length <= 105
#     t.length == s.length
#     0 <= maxCost <= 106
#     s and t consist of only lowercase English letters.
#
#


class Solution(object):
    def equalSubstring(self, s, t, maxCost):
        """
        :type s: str
        :type t: str
        :type maxCost: int
        :rtype: int
        """
        # ord(char)

        # a = 97  b = 98  c = 99  d = 100 e = 101
        # f = 102 g = 103 h = 104 i = 105 j = 106 
        # k = 107 l = 108 m = 109 n = 110 o = 111
        # p = 112 q = 113 r = 114 s = 115 t = 116
        # u = 117 v = 118 w = 119 x = 120 y = 121
        # z = 122
        
        i = 0
        j = 0
        max_val = 0
        length = 0
        val_idx = []

        
        for i in range(0, len(t)):
            val_idx.append(abs(ord(s[i]) - ord(t[i])))
            max_val += val_idx[i]

            while(max_val>maxCost):
                if(j< len(t)):
                    max_val -= val_idx[j]
                    j += 1
                else:
                    break

            length = max(length, i - j + 1)
        print(length)
        return(length)

solution = Solution()

s1 = "abcd"
t1 = "bcdf"

s2 = "abcd"
t2 = "cdef"

s3 = "abcd"
t3 = "acde"

solution.equalSubstring(s1, t1, 3)
solution.equalSubstring(s2, t2, 3)
solution.equalSubstring(s3, t3, 0)

