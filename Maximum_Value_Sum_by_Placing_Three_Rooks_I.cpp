class Solution {
public:
    long long maximumValueSum(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size(), count=0;
        long long ans=INT_MIN, currSum=0;
        vector<int> cols(m);
        helper(0,board,cols,ans,currSum,count);
        return ans;
    }
    void helper(int i, vector<vector<int>> &board, vector<int> &cols, long long &ans, long long currSum,int count){
        int n = board.size(), m = board[0].size();
        if(i==n){
            if(count==3)
                ans = max(ans,currSum);
            return;
        }
        for(int j=0;j<m;j++){
            if(cols[j]==0){
                cols[j] = 1;
                count++;
                helper(i+1,board,cols,ans, currSum + board[i][j], count);
                count--;
                cols[j] = 0;
            }
        }
        helper(i+1,board,cols,ans,currSum,count);
    }
};
// Title: Maximum Value Sum by Placing Three Rooks I
