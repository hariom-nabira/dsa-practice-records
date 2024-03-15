class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(), m=obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int>(m,-1));
        return helper(obstacleGrid,0,0,dp);
    }
    int helper(vector<vector<int>>& grid, int i,int j,vector<vector<int>> &dp){
        int n=grid.size(), m=grid[0].size();
        if(i>=n || j>=m || grid[i][j]==1) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(dp[i][j] == -1)
        dp[i][j] = helper(grid,i,j+1,dp) + helper(grid,i+1,j,dp);
        return dp[i][j];
    }
};
// Title: Unique Paths II
