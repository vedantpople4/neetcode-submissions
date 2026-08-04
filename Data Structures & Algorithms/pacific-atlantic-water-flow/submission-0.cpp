class Solution {
public:
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0},
                                         {0, 1}, {0, -1}};
    void bfs(queue<pair<int, int>> &q, vector<vector<bool>> &ocean, vector<vector<int>> &heights){
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            ocean[r][c] = true;
            for(auto [dr, dc]: directions){
                int nr = r+dr, nc = c+dc;
                if(nr >= 0 && nr<heights.size() && nc>=0 && nc<heights[0].size() && !ocean[nr][nc] && heights[nr][nc]>=heights[r][c])
                    q.push({nr, nc});
                }
            }
    };
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<bool>> pacgrid(m, vector<bool>(n, false));
        vector<vector<bool>> atlgrid(m, vector<bool>(n, false));
        queue<pair<int, int>> pac, atl;
        for(int i=0;i<m;i++){
            pac.push({i, 0});
            atl.push({i, n-1});
        }
        for(int j=0;j<n;j++){
            pac.push({0, j});
            atl.push({m-1, j});
        }
        bfs(pac, pacgrid, heights);
        bfs(atl, atlgrid, heights);
        vector<vector<int>> res;
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if(pacgrid[r][c] && atlgrid[r][c]){
                    res.push_back({r,c});
                }
            }
        }
        return res;
    }
};
