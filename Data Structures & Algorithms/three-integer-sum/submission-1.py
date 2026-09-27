class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans = []
        for i in range(0, len(nums)):
            left = i+1
            right = len(nums)-1
            curr = nums[i]
            if curr > 0:
                break
            if i > 0 and curr == nums[i-1]:
                continue
            while(right > left):
                currsum = curr + nums[left] + nums[right]
                if currsum > 0:
                    right = right-1
                elif currsum < 0:
                    left = left+1
                else:
                    ans.append([nums[left], curr, nums[right]])
                    left = left+1
                    right = right-1
                    while nums[left] == nums[left-1] and left < right:
                        left = left+1
        
        return ans
                
                