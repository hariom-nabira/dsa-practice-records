class Solution {
public:
    int dir[5] = {0,1,0,-1,0};

    bool isValidCell(vector<vector<int>>& grid,int i,int j){
        int m=grid.size(), n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n)
            return false;
        return true;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        queue<pair<int,int>> multiSourceBFS;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)
                    multiSourceBFS.push({i,j});
            }
        }
        int time=0;
        while(!multiSourceBFS.empty()){
            int size = multiSourceBFS.size();
            while(size--){
                auto curr = multiSourceBFS.front();
                multiSourceBFS.pop();
                for(int d=0;d<4;d++){
                    int di = curr.first + dir[d];
                    int dj = curr.second + dir[d+1];
                    if(isValidCell(grid,di,dj) && grid[di][dj]==1){
                        multiSourceBFS.push({di,dj});
                        grid[di][dj] = 2;
                    }
                }
            }
            time++;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return time-1;
    }
};
// Title: Rotting Oranges
