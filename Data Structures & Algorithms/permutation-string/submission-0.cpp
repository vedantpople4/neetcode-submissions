class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        cout<<s1<<" ";
        int sz1 = s1.size();
        int end = s2.size() - sz1 + 1;
        for(int i=0;i<end;i++){
            string curr = s2.substr(i, sz1);
            cout<<curr<<" ";
            sort(curr.begin(), curr.end());
            if(s1 == curr) return true;
        }
        return false;
    }
};
