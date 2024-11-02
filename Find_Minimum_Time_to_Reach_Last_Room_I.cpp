class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size();
        int m = moveTime[0].size();
        vector<vector<int>> dp(n, vector<int>(m,-1));
        // dp[i][j] -> minimum time it takes to go from (0,0) to (i,j)
        // base -> dp[0][0] = 0;
        // to find = dp[n-1][m-1];
        // dp[i][j] = max(min(dp[i-1][j](top) , dp[i][j-1](left)), a[i][j]) + 1;
        return helper(n-1,m-1,moveTime,dp);
    }
    vector<vector<int>> dir = {{-1,0}, {0,-1}};
    int helper(int i, int j, vector<vector<int>> &a, vector<vector<int>> &dp){
        if(!i && !j) return 0;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int n = a.size();
        int m = a[0].size();
        int ans = INT_MAX;
        for(auto v:dir){
            int newX = i+v[0];
            int newY = j+v[1];
            if(newX>=0 && newX<n && newY>=0 && newY<m){
                ans = min(ans, helper(newX,newY,a,dp));
            }
        }
        ans = max(ans, a[i][j]) + 1;
        return ans;
    }
};
// Title: Find Minimum Time to Reach Last Room I
