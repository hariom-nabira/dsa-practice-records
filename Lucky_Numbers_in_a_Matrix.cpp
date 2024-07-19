class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<int> rowMin(n,INT_MAX);
        vector<int> colMax(m,INT_MIN);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowMin[i] = min(rowMin[i],matrix[i][j]);
                colMax[j] = max(colMax[j],matrix[i][j]);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rowMin[i]==colMax[j]) ans.push_back(rowMin[i]);
            }
        }
        return ans;
    }
};
// Title: Lucky Numbers in a Matrix
