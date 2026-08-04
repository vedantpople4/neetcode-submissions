class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> dp = nums;
        for(int i=1;i<nums.size();i++){
            dp[i] = max(nums[i], nums[i]+dp[i-1]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};
