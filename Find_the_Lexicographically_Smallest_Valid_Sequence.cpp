class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        vector<int> ans;
        int i1=0,i2=0;
        bool ghapla = true;
        helper(i1,i2,word1,word2,ans,ghapla);
        return ans;
    }
    bool helper(int i1, int i2, string word1, string word2, vector<int> &ans, bool ghapla){
        if(i2 == word2.size()) return true;
        
        for(int j=i1; j < word1.size(); j++){
            if(word1[j] == word2[i2]){
                ans.push_back(j);
                if(!helper(j+1,i2+1,word1,word2,ans,ghapla)){
                    ans.pop_back();
                }else{
                    return true;
                }
            }else if(ghapla){
                ans.push_back(j);
                if(helper(j+1,i2+1,word1,word2,ans,!ghapla)){
                    return true;
                }
                else{
                    ans.pop_back();
                }
            }
        }
        return false;
    }
};