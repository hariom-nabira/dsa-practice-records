class Solution {
private:
    vector<int> dir = {0,1,0,-1,0};
    bool isValidCell(vector<vector<int>>& grid, int i, int j){
        int n=grid.size();
        if(i<0 || j<0 || i>=n || j>=n)
            return false;
        return true;
    }
    bool isValidSafety(vector<vector<int>>& grid, int val){
        int n = grid.size();
        if(grid[0][0]<val || grid[n-1][n-1]<val) 
            return false;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        queue<pair<int,int>> q;
        q.push({0,0});
        visited[0][0] = true;
        while(!q.empty()){
            pair<int,int> p = q.front();
            if(p.first == n-1 && p.second == n-1)
                return true;
            q.pop();
            for(int d=0;d<4;d++){
                int di = p.first + dir[d];
                int dj = p.second + dir[d+1];
                if(isValidCell(grid,di,dj) && !visited[di][dj] && grid[di][dj] >= val){
                    visited[di][dj] = true;
                    q.push({di,dj});
                }
            }
        }
        return false;
    }
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0] || grid[n-1][n-1]) return 0;
        queue<pair<int,int>> multiSourceBFS;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                    multiSourceBFS.push({i,j});
                grid[i][j]--;
            }
        }
        int end=0, start=0, ans=-1;
        while(!multiSourceBFS.empty()){
            pair<int,int> curr = multiSourceBFS.front();
            multiSourceBFS.pop();
            for(int d=0;d<4;d++){
                int di = curr.first + dir[d];
                int dj = curr.second + dir[d+1];
                int val = grid[curr.first][curr.second];
                if(isValidCell(grid, di, dj) && grid[di][dj]==-1){
                    end = grid[di][dj] = val+1;
                    multiSourceBFS.push({di,dj});
                }
            }
        }
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isValidSafety(grid,mid)){
                ans = mid;
                start = mid+1;
            }else
                end = mid-1;
        }
        return ans;
    }
};
// Title: Find the Safest Path in a Grid
