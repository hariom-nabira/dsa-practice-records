class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minCol=INT_MAX, maxCol=INT_MIN,minRow=INT_MAX, maxRow=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    minRow = min(minRow,i);
                    maxRow = max(maxRow,i);
                    minCol = min(minCol,j);
                    maxCol = max(maxCol,j);
                }
            }
        }
        return (maxRow-minRow+1)*(maxCol-minCol+1);
    }
};