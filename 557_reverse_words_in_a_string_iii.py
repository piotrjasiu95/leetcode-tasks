# 557. Reverse Words in a String III
# Solved
# Easy
# Topics
# Companies
#
# Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
#
#
#
# Example 1:
#
# Input: s = "Let's take LeetCode contest"
# Output: "s'teL ekat edoCteeL tsetnoc"
#
# Example 2:
#
# Input: s = "Mr Ding"
# Output: "rM gniD"
#
#
#
# Constraints:
#
#     1 <= s.length <= 5 * 104
#     s contains printable ASCII characters.
#     s does not contain any leading or trailing spaces.
#     There is at least one word in s.
#     All the words in s are separated by a single space.
#
#

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split(" ")
        newWords = []
        result = ""

        for word in words:
            newWord = []
            for i in range(0, len(word)):
                newWord.append(word[len(word)-1-i])
            newWords.append("".join(newWord))

        result = " ".join(newWords)
        print(result)
        return result


s1 = "Let's take LeetCode contest"
s2 = "Mr Ding"

solution = Solution()

solution.reverseWords(s1)
solution.reverseWords(s2)
