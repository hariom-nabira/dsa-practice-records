class Solution {
public:
    bool exist(vector<vector<char>> &board, string word) {
        int m = board.size(), n = board[0].size(); 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0])
                    if(helper(board,i,j,0,word))
                        return true;
            }
        }
        return false;
    }

    bool helper(vector<vector<char>> &board,int i,int j,int k,string &word){
        if(k==word.size()) return true;
        int m = board.size(), n = board[0].size();
        bool ans = false; 
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!=word[k]){
            return false;
        }
        board[i][j] = '@';
        vector<vector<int>> moves = {{-1,0},{1,0},{0,-1},{0,1}};
        for(auto m : moves)
           ans |= helper(board,i+m[0],j+m[1],k+1,word);
        if(!ans)
            board[i][j]=word[k];
        return ans;
    }
};