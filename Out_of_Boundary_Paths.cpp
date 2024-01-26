class Solution {
public:
    static const int mod = 1e9+7;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(maxMove+1,vector<vector<int>>(m,vector<int>(n,-1)));
        return findPathsH(m,n,maxMove,startRow,startColumn,0,dp);
    }
    int findPathsH(int m, int n, int maxMove, int startRow, int startColumn,int currMov,vector<vector<vector<int>>> &dp){
        if(currMov>maxMove) return 0;
        if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n) return 1;
        if(dp[currMov][startRow][startColumn] == -1)
            dp[currMov][startRow][startColumn] = (findPathsH(m,n,maxMove,startRow-1,startColumn,currMov+1,dp)%mod + findPathsH(m,n,maxMove,startRow+1,startColumn,currMov+1,dp)%mod + findPathsH(m,n,maxMove,startRow,startColumn-1,currMov+1,dp)%mod + findPathsH(m,n,maxMove,startRow,startColumn+1,currMov+1,dp)%mod )%mod;
        return dp[currMov][startRow][startColumn];
    }
};
// Title: Out of Boundary Paths
