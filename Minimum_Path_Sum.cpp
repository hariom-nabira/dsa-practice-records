class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mn = INT_MAX;
                if(i>0)
                    mn = min(mn,grid[i-1][j]);
                if(j>0)
                    mn = min(mn,grid[i][j-1]);
                grid[i][j] += (mn==INT_MAX)?0:mn;
            }
        }
        return grid[n-1][m-1];
    }
};
// Title: Minimum Path Sum
