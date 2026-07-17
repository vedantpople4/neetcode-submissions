class Solution:
    def isPalindrome(self, s: str) -> bool:
        finalstr = ''
        for c in s:
            if c.isalnum():
                finalstr += c.lower()

        return finalstr == finalstr[::-1]