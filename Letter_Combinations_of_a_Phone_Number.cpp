class Solution {
public:
    unordered_map<char, string> mp = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        helper(0,digits, "", ans);
        return ans;
    }
    void helper(int i, string &digits, string curr, vector<string> &ans){
        if(i==digits.size() && !curr.empty()){
            ans.push_back(curr);
            return;
        }
        for(char ch : mp[digits[i]]){
            helper(i+1,digits,curr+ch,ans);
        }
    }
};
// Title: Letter Combinations of a Phone Number
