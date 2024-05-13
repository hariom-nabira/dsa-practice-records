class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), ans=0;
        ans += n*(1<<(m-1));
        for(int j=1;j<m;j++){
            int ones=0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==grid[i][0]) ones++;
            }
            if(ones>=(n+1)/2)
                ans += ones*(1<<(m-1-j));
            else
                ans += (n-ones)*(1<<(m-1-j));
        }
        return ans;
    }
};