class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans = 0, curr = 0, mini = nums[0], n = nums.size();
        for(int i=1;i<n;i++){
            curr = nums[i] - mini;
            if(curr > ans) ans = curr;
            cout<<ans<<" ";
            mini = min(mini, nums[i]);
            cout<<mini<<" ";
            cout<<endl;
        }
        return ans;

    }
};
