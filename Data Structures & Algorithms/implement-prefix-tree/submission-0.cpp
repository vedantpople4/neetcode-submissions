class PrefixTree {
public:
    vector<string> str;
    PrefixTree() {
        
    }
    
    void insert(string word) {
        str.push_back(word);
    }
    
    bool search(string word) {
        for(auto it: str){
            if(it==word){
                return true;
            }
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        int sz = prefix.size();
        for(auto it: str){
            string curr = it.substr(0, sz);
            if(curr==prefix)
                return true;
        }
        return false;
    }
};
