class Solution {
public:
    bool isPalindrome(string &s){
        int start=0, end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        helper(s, 0, ans, curr);
        return ans;
    }
    void helper(string &s, int index, vector<vector<string>> & ans, vector<string> &curr){
        if(index==s.size()){
            ans.push_back(curr);
            curr = {};
        }
        for(int i=1; i <= s.size()-index; i++){
            string substring = s.substr(index,i);
            if(isPalindrome(substring)){
                curr.push_back(s.substr(index,i));
                helper(s, index+i, ans, curr);
            }
        }
    }
};