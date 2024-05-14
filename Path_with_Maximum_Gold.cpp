class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), mx=INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mx = max(mx,helper(grid,i,j));
            }
        }
        return mx;
    }
    int helper(vector<vector<int>> &grid,int i,int j){
        int m=grid.size(), n = grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0)
            return 0;
        int val = grid[i][j];
        grid[i][j]=0;
        int mxN = helper(grid,i-1,j);
        mxN = max(mxN,helper(grid,i+1,j));
        mxN = max(mxN,helper(grid,i,j-1));
        mxN = max(mxN,helper(grid,i,j-1));
        mxN = max(mxN,helper(grid,i,j+1));
        grid[i][j] = val;
        return val + mxN;
    }
};