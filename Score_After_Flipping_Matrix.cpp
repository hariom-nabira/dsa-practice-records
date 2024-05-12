class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), ans=0;
        for(int i=0;i<n;i++){
            if(grid[i][0]==1) continue;
            for(int j=0;j<m;j++){
                grid[i][j] = (grid[i][j]==0)?1:0;
            }
        }
        ans += n*(1<<(m-1));
        for(int j=1;j<m;j++){
            int count=0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==1) count++;
            }
            if(count>=(n+1)/2)
                ans += count*(1<<(m-1-j));
            else
                ans += (n-count)*(1<<(m-1-j));
        }
        return ans;
    }
};
// Title: Score After Flipping Matrix
