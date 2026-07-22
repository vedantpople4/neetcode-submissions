class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0 , r = heights.size()-1;
        int ans = 0, curr = 0;
        while(r > l){
            curr = min(heights[r], heights[l]) * (r-l);
            ans = max(curr, ans);
            if(heights[r] >= heights[l]) l++;
            else r--;
        }
        return ans;
    }
};
