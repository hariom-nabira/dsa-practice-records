class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(),wordDict.end());
        vector<string> ans;
        string currSentence, currWord;
        backtrack(s,0,dict,ans,currSentence,currWord);
        return ans;
    }
    void backtrack(string s, int i, unordered_set<string> &dict, vector<string> &ans, string &currSentence, string &currWord){
        if(i==s.size()){
            if(dict.find(currWord) != dict.end()){
                if(!currSentence.empty()) currSentence += ' ';
                currSentence += currWord;
                ans.push_back(currSentence);
            }
            return;
        }
        if(dict.find(currWord) != dict.end()){
            string tempSentence = currSentence;
            if(!tempSentence.empty()) tempSentence += ' ';
            tempSentence += currWord;
            string tempWord;
            backtrack(s,i,dict,ans,tempSentence,tempWord);
        }
        currWord += s[i];
        backtrack(s,i+1,dict,ans,currSentence,currWord);
        currWord.pop_back();
    } 
};
// Title: Word Break II
