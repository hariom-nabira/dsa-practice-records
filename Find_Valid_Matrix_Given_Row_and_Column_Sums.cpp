class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size(), m=colSum.size();
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mn = min(rowSum[i],colSum[j]);
                mat[i][j] = mn;
                rowSum[i] -= mn;
                colSum[j] -= mn;
            }
        }
        return mat;
    }
};
// Title: Find Valid Matrix Given Row and Column Sums
