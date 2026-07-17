class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        vector<vector<string>> res;
        for(auto it: strs){
            string curr = it;
            sort(curr.begin(), curr.end());
            ans[curr].push_back(it);
        }
        for(auto it: ans){
            res.push_back(it.second);
        }
        return res;
    }
};
