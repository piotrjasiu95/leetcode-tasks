# 917. Reverse Only Letters
# Solved
# Easy
# Topics
# Companies
# Hint
#
# Given a string s, reverse the string according to the following rules:
#
#     All the characters that are not English letters remain in the same position.
#     All the English letters (lowercase or uppercase) should be reversed.
#
# Return s after reversing it.
#
#
#
# Example 1:
#
# Input: s = "ab-cd"
# Output: "dc-ba"
#
# Example 2:
#
# Input: s = "a-bC-dEf-ghIj"
# Output: "j-Ih-gfE-dCba"
#
# Example 3:
#
# Input: s = "Test1ng-Leet=code-Q!"
# Output: "Qedo1ct-eeLg=ntse-T!"
#
#
#
# Constraints:
#
#     1 <= s.length <= 100
#     s consists of characters with ASCII values in the range [33, 122].
#     s does not contain '\"' or '\\'.


class Solution(object):
    def reverseOnlyLetters(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = []
        i = 0
        j = len(s) - 1

        for i in range(len(s)):
            if(s[i].isalpha()):
                while(len(result)<i+1):
                    if(s[j].isalpha()):
                        result.append(s[j])
                    j -= 1
            else:
                result.append(s[i])

        result = "".join(result)
        print(result)
        return result



s1 = "ab-cd"
s2 = "a-bC-dEf-ghIj"
s3 = "Test1ng-Leet=code-Q!"

solution = Solution()
solution.reverseOnlyLetters(s1)
solution.reverseOnlyLetters(s2)
solution.reverseOnlyLetters(s3)
