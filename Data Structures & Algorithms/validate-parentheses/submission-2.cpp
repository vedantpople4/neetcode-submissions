class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> pairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for(auto it: s){
            if(pairs.count(it)){
                if(!st.empty() && st.top()==pairs[it]){
                    st.pop();
                } else return false;
            } else st.push(it);
        }
        return st.empty();
    }
};
