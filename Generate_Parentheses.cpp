class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(n,0,"",ans);
        return ans;
    }
    void helper(int open, int close, string path, vector<string> &ans){
        if(!open && !close){
            ans.push_back(path);
            return;
        }
        if(open)helper(open-1,close+1,path+'(', ans);
        if(close)helper(open,close-1,path+')',ans);
    }
};