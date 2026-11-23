class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto it: s){
            if(isalnum(it)){
                str+=tolower(it);
            }
        }
        //cout<<str<<endl;
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!=str[str.length()-i-1]) 
                return false;
        }
        return true;
    }
};
