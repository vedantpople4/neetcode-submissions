class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for(auto it: s){
            if(!isalnum(it)) continue;
            else check += tolower(it);
        }
        cout<<check<<endl;
        string rev = string(check.rbegin(), check.rend());
        return rev == check;
    }
};
