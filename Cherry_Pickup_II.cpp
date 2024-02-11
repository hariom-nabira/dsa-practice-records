class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return helper(0,0,m-1,grid,dp);
    }
    int helper(int r,int c1,int c2,vector<vector<int>>& grid,vector<vector<vector<int>>> &dp){
        int n=grid.size(), m=grid[0].size();
        if(r>=n || c1<0||c2<0 || c1>=m||c2>=m) return 0;
        if(dp[r][c1][c2]==-1){
            int mx=INT_MIN, thisRowVal = grid[r][c1];
            if(c1!=c2) thisRowVal += grid[r][c2];
            for(int i=-1;i<=1;i++)
                for(int j=-1;j<=1;j++){
                    mx = max(mx, thisRowVal+helper(r+1,c1+i,c2+j,grid,dp));
                }
            dp[r][c1][c2] = mx;
        }
        return dp[r][c1][c2];
    }
};
// Title: Cherry Pickup II
