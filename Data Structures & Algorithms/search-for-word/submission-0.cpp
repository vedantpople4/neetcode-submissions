class Solution {
public:
    int m, n;
    vector<vector<bool>> visited;
    //vector<pair<int, int>> directions = ({0,1}, {0,-1}, {1,0}, {-1,0})
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        if(m*n < word.size()) return false;
        visited = vector<vector<bool>>(m, vector<bool>(n, false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, string word, int r, int c, int idx){
        if(idx==word.length()){
            return true;
        }
        if(r<0 || r>=board.size() || c<0 || c>=board[0].size() || board[r][c]!=word[idx] || visited[r][c]){
            return false;
        }
        visited[r][c] = true;
        bool ans = dfs(board, word, r+1, c, idx+1) || 
            dfs(board, word, r-1, c, idx+1) ||
            dfs(board, word, r, c+1, idx+1) ||
            dfs(board, word, r, c-1, idx+1);
        visited[r][c] = false;
        return ans;
    }
};
