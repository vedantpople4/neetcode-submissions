class Solution {
public:
    string longestPalindrome(string s) {
        int ans = 0, idx = 0;
        for(int i=0;i<s.size();i++){
            int l = i, r = i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1 > ans){
                    ans = r-l+1;
                    idx = l;
                }
                l--;
                r++;
            }
            l = i, r = i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1 > ans){
                    ans = r-l+1;
                    idx = l;
                }
                l--;
                r++;
            }
        }
        string ans_str = s.substr(idx, ans);
        return ans_str;
    }
};
