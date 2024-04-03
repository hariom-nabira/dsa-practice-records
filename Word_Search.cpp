class Solution {
public:
    bool exist(vector<vector<char>> &board, string word) {
        int m = board.size(), n = board[0].size(); 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(helper(board,i,j,0,word))
                    return true;
            }
        }
        return false;
    }

    bool helper(vector<vector<char>> &board,int i,int j,int k,string &word){
        if(k==word.size()) return true;
        int m = board.size(), n = board[0].size(); 
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!=word[k]){
            return false;
        }
        board[i][j] = '@';
        if( helper(board,i-1,j,k+1,word) || helper(board,i+1,j,k+1,word) ||
            helper(board,i,j-1,k+1,word) || helper(board,i,j+1,k+1,word) )
                return true;
        board[i][j]=word[k];
        return false;;
    }
};
// Title: Word Search
