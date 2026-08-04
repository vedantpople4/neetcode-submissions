class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int n = nums.size();
        vector<bool> dp(n, false);
        dp[n-1] = true;
        for(int i=n-2;i>=0;i--){
            int end = min(n, i+nums[i]+1);
            for(int j=i+1;j<end;j++){
                if(dp[j]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};
