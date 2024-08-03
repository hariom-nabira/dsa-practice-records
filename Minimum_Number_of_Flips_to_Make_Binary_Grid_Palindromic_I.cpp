class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int rowAns=0,colAns=0;
        for(int i=0;i<n;i++){
            int l=0,r=m-1;
            while(l<r){
                if(grid[i][l]!=grid[i][r]) rowAns++;
                l++;
                r--;
            }
        }
        for(int j=0;j<m;j++){
            int l=0,r=n-1;
            while(l<r){
                if(grid[l][j]!=grid[r][j]) colAns++;
                l++;
                r--;
            }
        }
        return min(colAns,rowAns);
    }
};