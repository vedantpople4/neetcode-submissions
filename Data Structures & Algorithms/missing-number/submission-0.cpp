class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it: nums) mp[it]++;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(i)==mp.end())
                return i;
        }
    }
};
