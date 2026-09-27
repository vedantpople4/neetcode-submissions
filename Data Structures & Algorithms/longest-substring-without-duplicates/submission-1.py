class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        charset = set()
        ans = 0
        for r in range(len(s)):
            while s[r] in charset:
                charset.remove(s[left])
                left += 1
            charset.add(s[r])
            ans = max(ans, r-left+1)
        return ans

