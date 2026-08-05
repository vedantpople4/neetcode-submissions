class Solution {
public:
    void dfs(vector<vector<int>> &adj, vector<bool> &vis, int i){
        vis[i] = true;
        for(auto it: adj[i]){
            if(!vis[it]){
                dfs(adj, vis, it);
            }
        }
    };

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }  
        vector<bool> vis(n, false);
        int ans = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj, vis, i);
                ans++;
            }  
        }
        return ans;
    }
};
