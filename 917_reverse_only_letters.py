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
        return result



