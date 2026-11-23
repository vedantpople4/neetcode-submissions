class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(), nums.end());
        int ans = 0;
        for(auto it: num){
            if(num.find(it-1)==num.end()){
                int curr = 1;
                while(num.find(it+curr)!=num.end()){
                    curr++;
                }
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};
