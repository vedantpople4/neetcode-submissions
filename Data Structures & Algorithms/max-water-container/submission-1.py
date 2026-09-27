class Solution:
    def maxArea(self, heights: List[int]) -> int:
        ans = 0
        left, right = 0, len(heights)-1
        while right > left:
            curr = (right - left) * min(heights[left], heights[right])
            if heights[right] > heights[left]:
                left += 1
            else:
                right -= 1
            ans = max(ans, curr)
        
        return ans