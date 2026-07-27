class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()==0) return "";
        unordered_map<char, int> tmap, window;
        for(auto it: t) tmap[it]++;
        int curr = 0, need = tmap.size();
        pair<int, int> ans = {-1, -1};
        int anslen = INT_MAX;
        int l = 0;
        for(int r=0;r<s.length();r++){
            char c = s[r];
            window[c]++;
            if (tmap.count(c) && window[c] == tmap[c]){
                curr++;
            }
            while (curr == need){
                if((r-l+1) < anslen){
                    anslen = r-l+1;
                    ans = {l, r};
                }
                window[s[l]]--;
                if(tmap.count(s[l]) && window[s[l]] < tmap[s[l]]){
                    curr--;
                }
                l++;
            }
        }
        return anslen == INT_MAX ? "": s.substr(ans.first, anslen);
    }
};
