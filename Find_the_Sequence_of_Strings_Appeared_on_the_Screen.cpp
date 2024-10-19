class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string curr="";
        for(auto &ch:target){
            for(char c='a';c<=ch;c++){
                ans.push_back(curr+c);
            }
            curr += ch;
        }
        return ans;
    }
};