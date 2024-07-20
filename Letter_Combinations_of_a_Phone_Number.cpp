class Solution {
public:
    unordered_map<int,vector<string>> mp = {
        {2, {"a","b","c"}},
        {3, {"d","e","f"}},
        {4, {"g","h","i"}},
        {5, {"j","k","l"}},
        {6, {"m","n","o"}},
        {7, {"p","q","r","s"}},
        {8, {"t","u","v"}},
        {9, {"w","x","y","z"}},
    };
    vector<string> letterCombinations(string digits) {
        int start=0;
        vector<string> ans;
        string curr;
        helper(start,digits, curr, ans);
        return ans;
    }
    void helper(int i, string &digits, string curr, vector<string> &ans){
        if(i==digits.size() && !curr.empty()){
            ans.push_back(curr);
            return;
        }
        for(string s : mp[digits[i]-'0']){
            helper(i+1,digits,curr+s,ans);
        }
    }
};
// Title: Letter Combinations of a Phone Number
