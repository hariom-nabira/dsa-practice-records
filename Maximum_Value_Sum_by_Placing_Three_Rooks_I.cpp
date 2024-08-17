class Solution {
public:
    long long maximumValueSum(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        long long ans=INT_MIN, currSum=0;
        vector<int> cols(m);
        helper(0,board,cols,ans,currSum);
        return ans;
    }
    void helper(int i, vector<vector<int>> &board, vector<int> &cols, long long &ans, long long currSum){
        int n = board.size(), m = board[0].size();
        if(i==n){
            ans = max(ans,currSum);
            return;
        }
        for(int j=0;j<m;j++){
            if(cols[j]==0){
                cols[j] = 1;
                helper(i+1,board,cols,ans, currSum + board[i][j]);
                cols[j] = 0;
            }
        }
    }
};