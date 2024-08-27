class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size(), m = grid1[0].size(), ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    // cout<<i<<" "<<j<<"\n";
                    if(isThereCorrIslandDFS(grid2,i,j,grid1)){
                        // cout<<"         "<<i<<" "<<j<<"\n";
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
private:
    bool isThereCorrIslandDFS(vector<vector<int>> &grid2,int i, int j, vector<vector<int>> &grid1){
        int n = grid1.size(), m = grid1[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid2[i][j] != 1) return true;
        bool flag = (grid1[i][j]==1)? true : false;
        grid2[i][j] = -1;
        bool flag1 = isThereCorrIslandDFS(grid2,i-1,j,grid1);
        bool flag2 = isThereCorrIslandDFS(grid2,i+1,j,grid1);
        bool flag3 = isThereCorrIslandDFS(grid2,i,j-1,grid1);
        bool flag4 = isThereCorrIslandDFS(grid2,i,j+1,grid1);
        return flag && flag1 && flag2 && flag3 && flag4;
    }
};