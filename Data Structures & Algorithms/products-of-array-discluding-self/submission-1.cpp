class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0), right(n, 0), ans(n,0);
        left[0] = 1;
        right[n-1] = 1;
        for(int i=1;i<n;i++){
            left[i] = nums[i-1]*left[i-1];
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int j=n-2;j>=0;j--){
            right[j] = nums[j+1]*right[j+1];
            cout<<right[j]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            ans[i] = left[i]*right[i];
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ans;
    }
};
