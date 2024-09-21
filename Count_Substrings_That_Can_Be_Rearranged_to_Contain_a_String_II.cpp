class Solution {
public:
    bool isEnough(vector<int> &currFreq, vector<int> &reqFreq){
        for(int i=0;i<26;i++){
            if(currFreq[i] < reqFreq[i]) return false;
        }
        return true;
    }
    long long validSubstringCount(string word1, string word2) {
        vector<int> reqFreq(26), currFreq(26);
        for(auto &ch: word2){
            reqFreq[ch-'a']++;
        }
        int i=0, n = word1.size();
        long long ans=0;
        for(int j=0;j<n;j++){
            currFreq[word1[j]-'a']++;
            if(isEnough(currFreq,reqFreq)){
                ans += n-j;
                currFreq[word1[i]-'a']--;
                i++;
                currFreq[word1[j]-'a']--;
                j--;
            }
        }
        return ans;
    }
};