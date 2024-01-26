class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        return findPathsH(m,n,maxMove,startRow,startColumn,0);
    }
    int findPathsH(int m, int n, int maxMove, int startRow, int startColumn,int currMov){
        if(currMov>maxMove) return 0;
        if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n) return 1;
        return findPathsH(m,n,maxMove,startRow-1,startColumn,currMov+1) + findPathsH(m,n,maxMove,startRow+1,startColumn,currMov+1) + findPathsH(m,n,maxMove,startRow,startColumn-1,currMov+1) + findPathsH(m,n,maxMove,startRow,startColumn+1,currMov+1);
    }
};
// Title: Out of Boundary Paths
