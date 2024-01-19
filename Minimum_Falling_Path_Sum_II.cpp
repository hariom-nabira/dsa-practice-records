class Solution {
public:
    int helper(vector<vector<int>>& matrix,int row,int col,vector<vector<int>> &dp){
        if(row==matrix.size()-1)   return matrix[row][col];
        int mn = INT_MAX, n=matrix.size();
        if(dp[row][col]==INT_MAX){
            for(int i=0;i<n;i++){
                if(i==col ) continue;
                mn = min(mn, helper(matrix,row+1,i,dp));
            }
            dp[row][col] = matrix[row][col] + mn;
        }
        return dp[row][col];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int mn=INT_MAX, n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
            mn = min(mn, helper(matrix,0,i,dp));
        return mn;
    }
};