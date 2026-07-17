class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(auto it: nums){
            count[it]++;
        }
        vector<pair<int, int>> p;
        for(auto it: count){
            p.push_back({it.second, it.first});
        }
        sort(p.rbegin(), p.rend());

        vector<int> ans;
        for (int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};
