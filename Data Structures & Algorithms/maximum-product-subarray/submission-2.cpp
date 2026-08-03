class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int currMin = 1, currMax = 1;
        for(int i=0;i<nums.size();i++){
            int temp = currMax * nums[i];
            currMax = max(max(currMin*nums[i], currMax*nums[i]), nums[i]);
            currMin = min(min(temp, nums[i]*currMin), nums[i]);
            ans = max(currMax, ans);
        }
        return ans;
    }
};
