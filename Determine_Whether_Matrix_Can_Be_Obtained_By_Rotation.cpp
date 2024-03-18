class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++)
                swap(matrix[i][j], matrix[j][i]);

        for(int i=0;i<n;i++)
            for(int j=0;j<n/2;j++)
                swap(matrix[i][j], matrix[i][n-1-j]);
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target) return true;
        for(int i=0;i<3;i++){
            rotate(mat);
            if(mat==target) return true;
        }
        return false;
    }
};
// Title: Determine Whether Matrix Can Be Obtained By Rotation
