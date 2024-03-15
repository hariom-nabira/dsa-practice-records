class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> dp(grid);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mn = INT_MAX;
                if(i>0)
                    mn = min(mn,dp[i-1][j]);
                if(j>0)
                    mn = min(mn,dp[i][j-1]);
                dp[i][j] += (mn==INT_MAX)?0:mn;
            }
        }
        return dp[n-1][m-1];
    }
};