class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(auto curr: strs){
            string it = curr;
            sort(it.begin(), it.end());
            mp[it].push_back(curr);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
