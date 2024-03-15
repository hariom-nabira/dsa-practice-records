class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0, bott=matrix.size()-1, left=0, right=matrix[0].size()-1;
        vector<int> ans;
        while(top<=bott && left<=right){
            for(int j=left;j<=right;j++)
                ans.push_back(matrix[top][j]);
            top++;
            if(!(top<=bott && left<=right)) break;
            for(int i=top;i<=bott;i++)
                ans.push_back(matrix[i][right]);
            right--;
            if(!(top<=bott && left<=right)) break;
            for(int j=right;j>=left;j--)
                ans.push_back(matrix[bott][j]);
            bott--;
            if(!(top<=bott && left<=right)) break;
            for(int i=bott;i>=top;i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};