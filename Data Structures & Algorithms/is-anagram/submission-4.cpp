class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) 
            return false;
        unordered_map<char, int> a, b;
        for(auto it: s) a[it]++;
        for(auto it: t) b[it]++;
        return a==b;
    }
};
